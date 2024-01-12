#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_InstallationStatus.UI_InstallationStatus_C
// (None)

class UClass* UUI_InstallationStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_InstallationStatus_C");

	return Clss;
}


// UI_InstallationStatus_C UI_InstallationStatus.Default__UI_InstallationStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_InstallationStatus_C* UUI_InstallationStatus_C::GetDefaultObj()
{
	static class UUI_InstallationStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_InstallationStatus_C*>(UUI_InstallationStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_InstallationStatus.UI_InstallationStatus_C.SetTextBasedOnState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// enum class EInstallStatus          Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// class FText                        Temp_text_Variable_5                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// class FText                        Temp_text_Variable_6                                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

TArray<struct FFormatArgumentData> UUI_InstallationStatus_C::SetTextBasedOnState(enum class EInstallStatus Temp_byte_Variable, class FText* K2Node_Select_Default, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "SetTextBasedOnState");

	Params::UUI_InstallationStatus_C_SetTextBasedOnState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Amount                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstalationState                                                 (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               MaintainPreviousValue                                            (ConstParm, ExportObject, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// double                             Temp_real_Variable                                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, NonTransactional)
// double                             Temp_real_Variable_4                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             Temp_real_Variable_5                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             Temp_real_Variable_6                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             Temp_real_Variable_7                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, EditorOnly)
// double                             Temp_real_Variable_8                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             Temp_real_Variable_9                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp, EditorOnly)
// double                             Temp_real_Variable_10                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)

double UUI_InstallationStatus_C::GetTrueProgress(int32* Amount, enum class ELibraryProgressState InstalationState, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "GetTrueProgress");

	Params::UUI_InstallationStatus_C_GetTrueProgress_Params Parms{};

	Parms.InstalationState = InstalationState;
	Parms.MaintainPreviousValue = MaintainPreviousValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.Temp_real_Variable_4 = Temp_real_Variable_4;
	Parms.Temp_real_Variable_5 = Temp_real_Variable_5;
	Parms.Temp_real_Variable_6 = Temp_real_Variable_6;
	Parms.Temp_real_Variable_7 = Temp_real_Variable_7;
	Parms.Temp_real_Variable_8 = Temp_real_Variable_8;
	Parms.Temp_real_Variable_9 = Temp_real_Variable_9;
	Parms.Temp_real_Variable_10 = Temp_real_Variable_10;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Install_Status                                                   (Edit, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// enum class EInstallStatus          Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// struct FLinearColor                Temp_struct_Variable_3                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_4                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_5                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_6                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FLinearColor                K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

struct FLinearColor UUI_InstallationStatus_C::UpdateColor(enum class EInstallStatus* Install_Status, enum class EInstallStatus Temp_byte_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateColor");

	Params::UUI_InstallationStatus_C_UpdateColor_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (Install_Status != nullptr)
		*Install_Status = Parms.Install_Status;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, GlobalConfig, SubobjectReference)
// enum class EInstallStatus          NewInstallationStatus                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// enum class ELibraryProgressState   InstallationPhase                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetTrueProgress_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetTrueProgress_MaintainPreviousValue                   (Edit, ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UUI_InstallationStatus_C::UpdateModProgress(int32* Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState* InstallationPhase, bool* CallFunc_IsAnimationPlaying_ReturnValue, double* CallFunc_GetTrueProgress_ReturnValue, bool* CallFunc_GetTrueProgress_MaintainPreviousValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateModProgress");

	Params::UUI_InstallationStatus_C_UpdateModProgress_Params Parms{};

	Parms.NewInstallationStatus = NewInstallationStatus;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (InstallationPhase != nullptr)
		*InstallationPhase = Parms.InstallationPhase;

	if (CallFunc_IsAnimationPlaying_ReturnValue != nullptr)
		*CallFunc_IsAnimationPlaying_ReturnValue = Parms.CallFunc_IsAnimationPlaying_ReturnValue;

	if (CallFunc_GetTrueProgress_ReturnValue != nullptr)
		*CallFunc_GetTrueProgress_ReturnValue = Parms.CallFunc_GetTrueProgress_ReturnValue;

	if (CallFunc_GetTrueProgress_MaintainPreviousValue != nullptr)
		*CallFunc_GetTrueProgress_MaintainPreviousValue = Parms.CallFunc_GetTrueProgress_MaintainPreviousValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              GameSlot                                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

void UUI_InstallationStatus_C::Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C** GameSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "Event Set Bindings To Game Slot");

	Params::UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GameSlot != nullptr)
		*GameSlot = Parms.GameSlot;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, DuplicateTransient)
// class FText                        Message                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UUI_InstallationStatus_C::PlayNotificationUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "PlayNotificationUpdate");

	Params::UUI_InstallationStatus_C_PlayNotificationUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_CustomEvent_GameSlot                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             K2Node_CustomEvent_Duration                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FText                        K2Node_CustomEvent_Message                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

bool UUI_InstallationStatus_C::ExecuteUbergraph_UI_InstallationStatus(class UUI_GameSlot_C** K2Node_CustomEvent_GameSlot, bool* CallFunc_IsValid_ReturnValue, double* K2Node_CustomEvent_Duration, class FText* K2Node_CustomEvent_Message, float* CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "ExecuteUbergraph_UI_InstallationStatus");

	Params::UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_GameSlot != nullptr)
		*K2Node_CustomEvent_GameSlot = Parms.K2Node_CustomEvent_GameSlot;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_Duration != nullptr)
		*K2Node_CustomEvent_Duration = Parms.K2Node_CustomEvent_Duration;

	if (K2Node_CustomEvent_Message != nullptr)
		*K2Node_CustomEvent_Message = Parms.K2Node_CustomEvent_Message;

	if (CallFunc_RetriggerableDelay_Duration_ImplicitCast != nullptr)
		*CallFunc_RetriggerableDelay_Duration_ImplicitCast = Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	return Parms.ReturnValue;

}

}


