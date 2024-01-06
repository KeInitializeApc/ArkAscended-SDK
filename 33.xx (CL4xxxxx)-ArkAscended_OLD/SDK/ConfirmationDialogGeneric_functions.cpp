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
// class FText                        CancelText                                                       (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void UConfirmationDialogGeneric_C::OverrideCancelButtonText(class FText* CancelText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideCancelButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideCancelButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CancelText != nullptr)
		*CancelText = Parms.CancelText;

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.OverrideAcceptButtonText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        AcceptText                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, GlobalConfig, InstancedReference, SubobjectReference)

void UConfirmationDialogGeneric_C::OverrideAcceptButtonText(class FText* AcceptText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "OverrideAcceptButtonText");

	Params::UConfirmationDialogGeneric_C_OverrideAcceptButtonText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AcceptText != nullptr)
		*AcceptText = Parms.AcceptText;

}


// Function ConfirmationDialogGeneric.ConfirmationDialogGeneric_C.ExecuteUbergraph_ConfirmationDialogGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Event_CancelText                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Event_AcceptText                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetNumLocalPlayerControllers_ReturnValue                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetSplitscreenLocalPlayerIndex_ReturnValue              (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_GetObjectName_ReturnValue_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)

bool UConfirmationDialogGeneric_C::ExecuteUbergraph_ConfirmationDialogGeneric(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConfirmationDialogGeneric_C", "ExecuteUbergraph_ConfirmationDialogGeneric");

	Params::UConfirmationDialogGeneric_C_ExecuteUbergraph_ConfirmationDialogGeneric_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}

