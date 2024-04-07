#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConfirmationDialogGeneric.ConfirmationDialogGeneric_C
// (None)

class UClass* UConfirmationDialogGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfirmationDialogGeneric_C");

	return Clss;
}


// ConfirmationDialogGeneric_C ConfirmationDialogGeneric.Default__ConfirmationDialogGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConfirmationDialogGeneric_C* UConfirmationDialogGeneric_C::GetDefaultObj()
{
	static class UConfirmationDialogGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConfirmationDialogGeneric_C*>(UConfirmationDialogGeneric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UConfirmationDialogGeneric_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideCancelButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelText                                                       (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UConfirmationDialogGeneric_C::OverrideCancelButtonText(class FText CancelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideCancelButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params Parms{};

	Parms.CancelText = CancelText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        AcceptText                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UConfirmationDialogGeneric_C::OverrideAcceptButtonText(class FText AcceptText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideAcceptButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params Parms{};

	Parms.AcceptText = AcceptText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        K2Node_Event_CancelText                                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        K2Node_Event_AcceptText                                          (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetNumLocalPlayerControllers_ReturnValue                (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue              (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)

bool UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int32* EntryPoint, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class FText* K2Node_Event_CancelText, class FString* CallFunc_GetObjectName_ReturnValue, class FText* K2Node_Event_AcceptText, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, int32* CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32* CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, class FString* CallFunc_GetObjectName_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "ExecuteUbergraph_ConfirmationDialogGeneric");

	Params::UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (K2Node_Event_CancelText != nullptr)
		*K2Node_Event_CancelText = Parms.K2Node_Event_CancelText;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	if (K2Node_Event_AcceptText != nullptr)
		*K2Node_Event_AcceptText = Parms.K2Node_Event_AcceptText;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetNumLocalPlayerControllers_ReturnValue != nullptr)
		*CallFunc_GetNumLocalPlayerControllers_ReturnValue = Parms.CallFunc_GetNumLocalPlayerControllers_ReturnValue;

	if (CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue != nullptr)
		*CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue = Parms.CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_GetObjectName_ReturnValue_1 != nullptr)
		*CallFunc_GetObjectName_ReturnValue_1 = std::move(Parms.CallFunc_GetObjectName_ReturnValue_1);

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	return Parms.ReturnValue;

}

}


