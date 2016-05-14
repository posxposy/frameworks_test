//! Includes
#include "bunnymark.h"


//! Variables

static const orxS32     s32MaxBunnyCount                    = 500000;
static volatile orxS32  s32ActiveBunnyCount                 = 0;
static orxFLOAT         fGravity                            = orxFLOAT_0;
static orxVECTOR        avBunnyPosList[s32MaxBunnyCount]    = {};
static orxVECTOR        avBunnySpeedList[s32MaxBunnyCount]  = {};


//! Code

orxSTATUS orxFASTCALL Bootstrap()
{
  orxSTATUS eResult = orxSTATUS_FAILURE;

  // Adds default config paths
  orxResource_AddStorage(orxCONFIG_KZ_RESOURCE_GROUP, "../../../data", orxFALSE);

  // Loads main config file
  orxConfig_Load("Bunny.ini");

  // Done!
  return eResult;
}

orxSTATUS orxFASTCALL Update(void *_pContext)
{
  orxSTATUS eResult = orxSTATUS_SUCCESS;

  // For all active bunnies
  for(orxS32 i = 0, iCount = s32ActiveBunnyCount; i < iCount; i++)
  {
    // Updates its speed
    avBunnySpeedList[i].fY += orx2F(0.5f);

    // Moves it
    avBunnyPosList[i].fX += avBunnySpeedList[i].fX;
    avBunnyPosList[i].fY += avBunnySpeedList[i].fY;

    // Constrains it
    if(avBunnyPosList[i].fX < orxFLOAT_0)
    {
        avBunnySpeedList[i].fX  = -avBunnySpeedList[i].fX;
        avBunnyPosList[i].fX    = orxFLOAT_0;
    }
    else if(avBunnyPosList[i].fX > orx2F(800.0f))
    {
        avBunnySpeedList[i].fX  = -avBunnySpeedList[i].fX;
        avBunnyPosList[i].fX    = orx2F(800.0f);
    }
    if(avBunnyPosList[i].fY < orxFLOAT_0)
    {
        avBunnySpeedList[i].fY  = -avBunnySpeedList[i].fY;
        avBunnyPosList[i].fY    = orxFLOAT_0;
    }
    else if (avBunnyPosList[i].fY > orx2F(600.0f))
    {
        avBunnySpeedList[i].fY  = -avBunnySpeedList[i].fY;
        avBunnyPosList[i].fY    = orx2F(600.0f);
    }
  }

  // Done!
  return eResult;
}

orxSTATUS orxFASTCALL EventHandler(const orxEVENT *_pstEvent)
{
  orxSTATUS eResult = orxSTATUS_SUCCESS;

  // Object start?
  if(_pstEvent->eID == orxRENDER_EVENT_OBJECT_START)
  {
    orxOBJECT *pstObject;

    // Gets sending object
    pstObject = orxOBJECT(_pstEvent->hSender);

    // Bunny?
    if(orxString_Compare(orxObject_GetName(pstObject), "Bunny") == 0)
    {
      orxDISPLAY_TRANSFORM  stTransform;
      orxBITMAP            *pstBitmap;

      // Gets its current bitmap
      pstBitmap = orxTexture_GetBitmap(orxObject_GetWorkingTexture(pstObject));

      // Sets its color
      orxDisplay_SetBitmapColor(pstBitmap, orx2RGBA(255, 255, 255, 255));

      // Inits transform
      stTransform.fRepeatX  =
      stTransform.fRepeatY  =
      stTransform.fScaleX   =
      stTransform.fScaleY   = orxFLOAT_1;
      stTransform.fSrcX     =
      stTransform.fSrcY     =
      stTransform.fRotation = orxFLOAT_0;

      // For all active bunnies
      for(orxS32 i = 0, iCount = orxConfig_GetS32("Count"); i < iCount; i++)
      {
        // Updates transform
        stTransform.fDstX   = avBunnyPosList[i].fX;
        stTransform.fDstY   = avBunnyPosList[i].fY;

        // Renders it
        orxDisplay_TransformBitmap(pstBitmap, &stTransform, orxDISPLAY_SMOOTHING_OFF, orxDISPLAY_BLEND_MODE_ALPHA);
      }

      // Runs update task
      orxThread_RunTask(Update, orxNULL, orxNULL, orxNULL);

      // Stores FPS
      orxConfig_SetS32("FPS", orxFPS_GetFPS());

      // Don't render it
      eResult = orxSTATUS_FAILURE;
    }
  }

  // Done!
  return eResult;
}

orxSTATUS orxFASTCALL Init()
{
  orxSTATUS eResult = orxSTATUS_SUCCESS;

  // Creates viewport
  orxViewport_CreateFromConfig("Viewport");

  // Creates scene
  orxObject_CreateFromConfig("Scene");

  // Pushes bunny config section
  orxConfig_PushSection("Bunny");

  // Adds render event handler
  orxEvent_AddHandler(orxEVENT_TYPE_RENDER, EventHandler);

  // Gets gravity
  fGravity = orxConfig_GetFloat("Gravity");

  // Inits all bunnies
  for(orxS32 i = 0; i < s32MaxBunnyCount; i++)
  {
    orxConfig_GetVector("InitPos", &avBunnyPosList[i]);
    orxConfig_GetVector("InitSpeed", &avBunnySpeedList[i]);
  }

  // Done!
  return eResult;
}

orxSTATUS orxFASTCALL Run()
{
  orxS32    s32Delta = 0, s32Count;
  orxSTATUS eResult = orxSTATUS_SUCCESS;

  // Add bunnies?
  if(orxInput_IsActive("AddBunny") && orxInput_HasNewStatus("AddBunny"))
  {
    s32Delta = orxConfig_GetS32("Delta");
  }

  // Remove bunnies?
  if(orxInput_IsActive("RemoveBunny") && orxInput_HasNewStatus("RemoveBunny"))
  {
    s32Delta = -orxConfig_GetS32("Delta");
  }

  // Updates bunny count
  s32Count = orxConfig_GetS32("Count") + s32Delta;
  s32Count = orxCLAMP(s32Count, 0, s32MaxBunnyCount);
  orxConfig_SetS32("Count", s32Count);
  s32ActiveBunnyCount = s32Count;

  // Screenshot?
  if(orxInput_IsActive("Screenshot") && orxInput_HasNewStatus("Screenshot"))
  {
    // Captures it
    orxScreenshot_Capture();
  }
  // Quitting?
  if(orxInput_IsActive("Quit"))
  {
    // Updates result
    eResult = orxSTATUS_FAILURE;
  }

  // Done!
  return eResult;
}

void orxFASTCALL Exit()
{
  // We could delete everything we created here but orx will do it for us anyway =)
}

int main(int argc, char **argv)
{
  // Sets config bootstrap
  orxConfig_SetBootstrap(Bootstrap);

  // Executes orx
  orx_Execute(argc, argv, Init, Run, Exit);

  // Done!
  return EXIT_SUCCESS;
}


#ifdef __orxMSVC__

#include "windows.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
  // Sets config bootstrap
  orxConfig_SetBootstrap(Bootstrap);

  // Executes orx
  orx_WinExecute(Init, Run, Exit);

  // Done!
  return EXIT_SUCCESS;
}

#endif // __orxMSVC__
