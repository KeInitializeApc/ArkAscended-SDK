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
// double                             Scale0                                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Scale1                                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Scale2                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)

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
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, BlueprintVisible, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInstanceDynamic* UCustomMouseWidget_C::SetPointerColorAdd(float CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerColorAdd");

	Params::UCustomMouseWidget_C_SetPointerColorAdd_Params Parms{};

	Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast = CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// double                             NewParam                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

struct FVector2D UCustomMouseWidget_C::SetPointerScale(double NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerScale");

	Params::UCustomMouseWidget_C_SetPointerScale_Params Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LeftRightAlpha                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             UpDownAlpha                                                      (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               UseArrow                                                         (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7               (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)

float UCustomMouseWidget_C::SetArrowAlpha(double LeftRightAlpha, double UpDownAlpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetArrowAlpha");

	Params::UCustomMouseWidget_C_SetArrowAlpha_Params Parms{};

	Parms.LeftRightAlpha = LeftRightAlpha;
	Parms.UpDownAlpha = UpDownAlpha;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

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


