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
// enum class EInstallStatus          Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// enum class EInstallStatus          Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FText                        Temp_text_Variable                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        Temp_text_Variable_1                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        Temp_text_Variable_2                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        Temp_text_Variable_3                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class FText                        Temp_text_Variable_4                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class FText                        Temp_text_Variable_5                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// class FText                        Temp_text_Variable_6                                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TArray<struct FFormatArgumentData> UUI_InstallationStatus_C::SetTextBasedOnState(enum class EInstallStatus* Index, enum class EInstallStatus* Temp_byte_Variable, class FText* K2Node_Select_Default, class FText* CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "SetTextBasedOnState");

	Params::UUI_InstallationStatus_C_SetTextBasedOnState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.GetTrueProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Amount                                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   InstalationState                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               MaintainPreviousValue                                            (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             Temp_real_Variable                                               (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             Temp_real_Variable_4                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             Temp_real_Variable_5                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             Temp_real_Variable_6                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             Temp_real_Variable_7                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             Temp_real_Variable_8                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             Temp_real_Variable_9                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             Temp_real_Variable_10                                            (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ELibraryProgressState   Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)

double UUI_InstallationStatus_C::GetTrueProgress(double ReturnValue, bool MaintainPreviousValue, double Temp_real_Variable, double Temp_real_Variable_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double Temp_real_Variable_4, double Temp_real_Variable_5, double Temp_real_Variable_6, double Temp_real_Variable_7, double Temp_real_Variable_8, double Temp_real_Variable_9, double Temp_real_Variable_10, enum class ELibraryProgressState* Temp_byte_Variable, double* K2Node_Select_Default, double CallFunc_Divide_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "GetTrueProgress");

	Params::UUI_InstallationStatus_C_GetTrueProgress_Params Parms{};

	Parms.ReturnValue = ReturnValue;
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
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInstallStatus          Install_Status                                                   (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// enum class EInstallStatus          Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable                                             (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FLinearColor                Temp_struct_Variable_1                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FLinearColor                Temp_struct_Variable_2                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FLinearColor                Temp_struct_Variable_3                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_4                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_5                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// struct FLinearColor                Temp_struct_Variable_6                                           (ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FLinearColor                K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

struct FLinearColor UUI_InstallationStatus_C::UpdateColor(enum class EInstallStatus Install_Status, enum class EInstallStatus* Temp_byte_Variable, struct FLinearColor* K2Node_Select_Default, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateColor");

	Params::UUI_InstallationStatus_C_UpdateColor_Params Parms{};

	Parms.Install_Status = Install_Status;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.UpdateModProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Progress                                                         (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// enum class EInstallStatus          NewInstallationStatus                                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// enum class ELibraryProgressState   InstallationPhase                                                (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ConstParm, ExportObject, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetTrueProgress_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetTrueProgress_MaintainPreviousValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_InstallationStatus_C::UpdateModProgress(int32* Progress, enum class EInstallStatus NewInstallationStatus, enum class ELibraryProgressState InstallationPhase, bool CallFunc_IsAnimationPlaying_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "UpdateModProgress");

	Params::UUI_InstallationStatus_C_UpdateModProgress_Params Parms{};

	Parms.NewInstallationStatus = NewInstallationStatus;
	Parms.InstallationPhase = InstallationPhase;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.Event Set Bindings To Game Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_GameSlot_C*              GameSlot                                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

void UUI_InstallationStatus_C::Event_Set_Bindings_To_Game_Slot(class UUI_GameSlot_C* GameSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "Event Set Bindings To Game Slot");

	Params::UUI_InstallationStatus_C_Event_Set_Bindings_To_Game_Slot_Params Parms{};

	Parms.GameSlot = GameSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.PlayNotificationUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, DuplicateTransient)
// class FText                        Message                                                          (BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, EditConst, SubobjectReference)

double UUI_InstallationStatus_C::PlayNotificationUpdate(class FText* Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "PlayNotificationUpdate");

	Params::UUI_InstallationStatus_C_PlayNotificationUpdate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Message != nullptr)
		*Message = Parms.Message;

	return Parms.ReturnValue;

}


// Function UI_InstallationStatus.UI_InstallationStatus_C.ExecuteUbergraph_UI_InstallationStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class UUI_GameSlot_C*              K2Node_CustomEvent_GameSlot                                      (Edit, BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             K2Node_CustomEvent_Duration                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FText                        K2Node_CustomEvent_Message                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UUI_InstallationStatus_C::ExecuteUbergraph_UI_InstallationStatus(class UUI_GameSlot_C* K2Node_CustomEvent_GameSlot, bool* CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double K2Node_CustomEvent_Duration, class FText K2Node_CustomEvent_Message, float CallFunc_RetriggerableDelay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_InstallationStatus_C", "ExecuteUbergraph_UI_InstallationStatus");

	Params::UUI_InstallationStatus_C_ExecuteUbergraph_UI_InstallationStatus_Params Parms{};

	Parms.K2Node_CustomEvent_GameSlot = K2Node_CustomEvent_GameSlot;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.K2Node_CustomEvent_Message = K2Node_CustomEvent_Message;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


