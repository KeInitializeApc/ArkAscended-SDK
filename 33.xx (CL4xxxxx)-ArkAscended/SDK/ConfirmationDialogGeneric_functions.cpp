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
// class FText                        CancelText                                                       (Edit, ExportObject, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

class FText UConfirmationDialogGeneric_C::OverrideCancelButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideCancelButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        AcceptText                                                       (Edit, ConstParm, Net, ReturnParm, Transient, GlobalConfig, InstancedReference, SubobjectReference)

class FText UConfirmationDialogGeneric_C::OverrideAcceptButtonText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideAcceptButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FText                        K2Node_Event_CancelText                                          (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Event_AcceptText                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetNumLocalPlayerControllers_ReturnValue                (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue              (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)

bool UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int32 EntryPoint, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, int32* CallFunc_GetNumLocalPlayerControllers_ReturnValue, int32* CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "ExecuteUbergraph_ConfirmationDialogGeneric");

	Params::UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetNumLocalPlayerControllers_ReturnValue != nullptr)
		*CallFunc_GetNumLocalPlayerControllers_ReturnValue = Parms.CallFunc_GetNumLocalPlayerControllers_ReturnValue;

	if (CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue != nullptr)
		*CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue = Parms.CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

	return Parms.ReturnValue;

}

}


