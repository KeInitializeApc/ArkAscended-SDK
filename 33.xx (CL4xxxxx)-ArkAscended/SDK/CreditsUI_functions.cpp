#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreditsUI.CreditsUI_C
// (None)

class UClass* UCreditsUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreditsUI_C");

	return Clss;
}


// CreditsUI_C CreditsUI.Default__CreditsUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreditsUI_C* UCreditsUI_C::GetDefaultObj()
{
	static class UCreditsUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreditsUI_C*>(UCreditsUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreditsUI.CreditsUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreditsUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UCreditsUI_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "Tick");

	Params::UCreditsUI_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function CreditsUI.CreditsUI_C.CloseButtonEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCreditsUI_C::CloseButtonEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "CloseButtonEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void UCreditsUI_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreditsUI.CreditsUI_C.ExecuteUbergraph_CreditsUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// class UPrimalGlobalsBlueprint_C*   K2Node_DynamicCast_AsPrimal_Globals_Blueprint                    (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

FDelegateProperty_ UCreditsUI_C::ExecuteUbergraph_CreditsUI(int32* EntryPoint, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UObject** CallFunc_GetClassDefaultObject_ReturnValue, class UPrimalGlobalsBlueprint_C** K2Node_DynamicCast_AsPrimal_Globals_Blueprint, bool* K2Node_DynamicCast_bSuccess, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot** K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_ReturnValue, int32* Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreditsUI_C", "ExecuteUbergraph_CreditsUI");

	Params::UCreditsUI_C_ExecuteUbergraph_CreditsUI_Params Parms{};

	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_GetClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_GetClassDefaultObject_ReturnValue = Parms.CallFunc_GetClassDefaultObject_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Globals_Blueprint != nullptr)
		*K2Node_DynamicCast_AsPrimal_Globals_Blueprint = Parms.K2Node_DynamicCast_AsPrimal_Globals_Blueprint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsCanvas_Panel_Slot != nullptr)
		*K2Node_DynamicCast_AsCanvas_Panel_Slot = Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}

}


