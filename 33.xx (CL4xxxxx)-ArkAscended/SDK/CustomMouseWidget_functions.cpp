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
// double                             Scale0                                                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Scale1                                                           (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// double                             Scale2                                                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

double UCustomMouseWidget_C::SetInnerRingScales(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetInnerRingScales");

	Params::UCustomMouseWidget_C_SetInnerRingScales_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Add                                                              (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

double UCustomMouseWidget_C::SetPointerColorAdd(class UMaterialInstanceDynamic** CallFunc_GetDynamicMaterial_ReturnValue, float* CallFunc_SetScalarParameterValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerColorAdd");

	Params::UCustomMouseWidget_C_SetPointerColorAdd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetDynamicMaterial_ReturnValue != nullptr)
		*CallFunc_GetDynamicMaterial_ReturnValue = Parms.CallFunc_GetDynamicMaterial_ReturnValue;

	if (CallFunc_SetScalarParameterValue_Value_ImplicitCast != nullptr)
		*CallFunc_SetScalarParameterValue_Value_ImplicitCast = Parms.CallFunc_SetScalarParameterValue_Value_ImplicitCast;

	return Parms.ReturnValue;

}


// Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

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
// double                             NewParam                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

void UCustomMouseWidget_C::SetPointerScale(double* NewParam, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetPointerScale");

	Params::UCustomMouseWidget_C_SetPointerScale_Params Parms{};

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             LeftRightAlpha                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             UpDownAlpha                                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               UseArrow                                                         (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7               (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, EditorOnly)

bool UCustomMouseWidget_C::SetArrowAlpha(double* LeftRightAlpha, double* UpDownAlpha, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6, float* CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "SetArrowAlpha");

	Params::UCustomMouseWidget_C_SetArrowAlpha_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LeftRightAlpha != nullptr)
		*LeftRightAlpha = Parms.LeftRightAlpha;

	if (UpDownAlpha != nullptr)
		*UpDownAlpha = Parms.UpDownAlpha;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_3;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_4;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_5;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_6;

	if (CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7 != nullptr)
		*CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7 = Parms.CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_7;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void UCustomMouseWidget_C::ExecuteUbergraph_CustomMouseWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CustomMouseWidget_C", "ExecuteUbergraph_CustomMouseWidget");

	Params::UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


