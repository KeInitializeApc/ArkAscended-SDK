#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CustomMouseWidget.CustomMouseWidget_C
// (None)

class UClass* UCustomMouseWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomMouseWidget_C");

	return Clss;
}


// CustomMouseWidget_C CustomMouseWidget.Default__CustomMouseWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomMouseWidget_C* UCustomMouseWidget_C::GetDefaultObj()
{
	static class UCustomMouseWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomMouseWidget_C*>(UCustomMouseWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Scale0                                                           (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Scale1                                                           (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             Scale2                                                           (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)

struct FVector2D UCustomMouseWidget_C::SetInnerRingScales()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetInnerRingScales");

	Params::UCustomMouseWidget_C_SetInnerRingScales_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Add                                                              (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)

float UCustomMouseWidget_C::SetPointerColorAdd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerColorAdd");

	Params::UCustomMouseWidget_C_SetPointerColorAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UCustomMouseWidget_C::ShowReticule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "ShowReticule");

	Params::UCustomMouseWidget_C_ShowReticule_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewParam                                                         (ExportObject, Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

struct FVector2D UCustomMouseWidget_C::SetPointerScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerScale");

	Params::UCustomMouseWidget_C_SetPointerScale_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LeftRightAlpha                                                   (Net, EditFixedSize, Parm, ReturnParm, GlobalConfig, SubobjectReference)
// double                             UpDownAlpha                                                      (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               UseArrow                                                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference, EditorOnly)

float UCustomMouseWidget_C::SetArrowAlpha()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetArrowAlpha");

	Params::UCustomMouseWidget_C_SetArrowAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.UseCircle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::UseCircle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "UseCircle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.useArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::UseArrow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "useArrow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCustomMouseWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

int32 UCustomMouseWidget_C::ExecuteUbergraph_CustomMouseWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "ExecuteUbergraph_CustomMouseWidget");

	Params::UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


