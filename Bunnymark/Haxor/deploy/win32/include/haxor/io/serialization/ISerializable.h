#ifndef INCLUDED_haxor_io_serialization_ISerializable
#define INCLUDED_haxor_io_serialization_ISerializable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(haxor,io,serialization,Formatter)
HX_DECLARE_CLASS3(haxor,io,serialization,ISerializable)
HX_DECLARE_CLASS3(haxor,io,serialization,SerializedField)
namespace haxor{
namespace io{
namespace serialization{


class HXCPP_CLASS_ATTRIBUTES  ISerializable_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef ISerializable_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		virtual ::String OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt)=0;
		virtual Dynamic OnSerializeField_dyn()=0;
		virtual bool OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt)=0;
		virtual Dynamic OnDeserializeField_dyn()=0;
};

#define DELEGATE_haxor_io_serialization_ISerializable \
virtual ::String OnSerializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt) { return mDelegate->OnSerializeField(p_field,p_fmt);}  \
virtual Dynamic OnSerializeField_dyn() { return mDelegate->OnSerializeField_dyn();}  \
virtual bool OnDeserializeField( ::haxor::io::serialization::SerializedField p_field,::haxor::io::serialization::Formatter p_fmt) { return mDelegate->OnDeserializeField(p_field,p_fmt);}  \
virtual Dynamic OnDeserializeField_dyn() { return mDelegate->OnDeserializeField_dyn();}  \


template<typename IMPL>
class ISerializable_delegate_ : public ISerializable_obj
{
	protected:
		IMPL *mDelegate;
	public:
		ISerializable_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_haxor_io_serialization_ISerializable
};

} // end namespace haxor
} // end namespace io
} // end namespace serialization

#endif /* INCLUDED_haxor_io_serialization_ISerializable */ 
