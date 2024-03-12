#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUDNotificationPanel.HUDNotificationPanel_C
// (None)

class UClass* UHUDNotificationPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDNotificationPanel_C");

	return Clss;
}


// HUDNotificationPanel_C HUDNotificationPanel.Default__HUDNotificationPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDNotificationPanel_C* UHUDNotificationPanel_C::GetDefaultObj()
{
	static class UHUDNotificationPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDNotificationPanel_C*>(UHUDNotificationPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUDNotificationPanel.HUDNotificationPanel_C.GetStatusStateNotifications
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsInStatusState_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character_1                     (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FPrimalCharacterStatusStateDefinitionCallFunc_GetStatusStateDefinitions_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHUDNotificationEntry_StructK2Node_MakeStruct_HUDNotificationEntry_Struct                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

struct FHUDNotificationEntry_Struct UHUDNotificationPanel_C::GetStatusStateNotifications(class UObject** Object, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, int32* Temp_int_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, int32* CallFunc_GetChildrenCount_ReturnValue, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character_1, bool* K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* Temp_int_Variable_1, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "GetStatusStateNotifications");

	Params::UHUDNotificationPanel_C_GetStatusStateNotifications_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Object != nullptr)
		*Object = Parms.Object;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.ShouldShowExtendedInfoButton
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FHUDNotificationEntry_Struct>TargetArray                                                      (ConstParm, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHUDNotificationPanel_C::ShouldShowExtendedInfoButton(bool* CallFunc_Greater_IntInt_ReturnValue, int32* CallFunc_GetChildrenCount_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "ShouldShowExtendedInfoButton");

	Params::UHUDNotificationPanel_C_ShouldShowExtendedInfoButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.HaveSameNotificationStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructHUDNotificationEntry_Struct                                      (Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
// struct FHUDNotificationEntry_StructHUDNotificationEntry_Struct2                                     (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool UHUDNotificationPanel_C::HaveSameNotificationStyle(struct FHUDNotificationEntry_Struct* HUDNotificationEntry_Struct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "HaveSameNotificationStyle");

	Params::UHUDNotificationPanel_C_HaveSameNotificationStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HUDNotificationEntry_Struct != nullptr)
		*HUDNotificationEntry_Struct = std::move(Parms.HUDNotificationEntry_Struct);

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructLocalVarHud                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CreateNewVarLocal                                                (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_TimeSince_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UHUDNotificationPanel_C::UpdateNotifications(bool Temp_bool_Variable, int32* Temp_int_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "UpdateNotifications");

	Params::UHUDNotificationPanel_C_UpdateNotifications_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (CallFunc_GetChildAt_ReturnValue_1 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_1 = Parms.CallFunc_GetChildAt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.UpdateVisibilitySmallNotifications
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RequireToHide                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_3                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetChildrenCount_ReturnValue_2                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Variable_3                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_ShouldShowExtendedInfoButton_ReturnValue                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry_1                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_3                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetChildrenCount_ReturnValue_3                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small_1               (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// struct FHUDNotificationEntry_StructCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_HaveSameNotificationStyle_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)

bool UHUDNotificationPanel_C::UpdateVisibilitySmallNotifications(bool RequireToHide, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool Temp_bool_Variable, int32* Temp_int_Variable_2, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32* CallFunc_GetChildrenCount_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue_1, int32* CallFunc_GetChildrenCount_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32* Temp_int_Variable_3, class UWidget** CallFunc_GetChildAt_ReturnValue_2, bool* K2Node_DynamicCast_bSuccess_2, bool CallFunc_LessEqual_IntInt_ReturnValue_2, class UWidget** CallFunc_GetChildAt_ReturnValue_3, int32* CallFunc_GetChildrenCount_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_IntInt_ReturnValue_3, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "UpdateVisibilitySmallNotifications");

	Params::UHUDNotificationPanel_C_UpdateVisibilitySmallNotifications_Params Parms{};

	Parms.RequireToHide = RequireToHide;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetChildrenCount_ReturnValue_1 != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue_1 = Parms.CallFunc_GetChildrenCount_ReturnValue_1;

	if (CallFunc_GetChildAt_ReturnValue_1 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_1 = Parms.CallFunc_GetChildAt_ReturnValue_1;

	if (CallFunc_GetChildrenCount_ReturnValue_2 != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue_2 = Parms.CallFunc_GetChildrenCount_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (Temp_int_Variable_3 != nullptr)
		*Temp_int_Variable_3 = Parms.Temp_int_Variable_3;

	if (CallFunc_GetChildAt_ReturnValue_2 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_2 = Parms.CallFunc_GetChildAt_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetChildAt_ReturnValue_3 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_3 = Parms.CallFunc_GetChildAt_ReturnValue_3;

	if (CallFunc_GetChildrenCount_ReturnValue_3 != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue_3 = Parms.CallFunc_GetChildrenCount_ReturnValue_3;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.Get Quantity Type Notifications Repeated
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructNotification                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPanelWidget*                Widget                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UPrimalUserWidget*>   ReturnHudNotiifcation1                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           HudRefLocal                                                      (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UPrimalUserWidget*>   ReturnHudNotiifcation                                            (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FHUDNotificationEntry_StructNewLocalVar_0                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// int32                              NewLocalVar                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Variable_2                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_HaveSameNotificationStyle_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

int32 UHUDNotificationPanel_C::Get_Quantity_Type_Notifications_Repeated(class UPanelWidget* Widget, const TArray<class UPrimalUserWidget*>& ReturnHudNotiifcation1, const TArray<class UPrimalUserWidget*>& ReturnHudNotiifcation, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* Temp_int_Variable, int32* Temp_int_Variable_1, int32* Temp_int_Variable_2, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, int32* CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "Get Quantity Type Notifications Repeated");

	Params::UHUDNotificationPanel_C_Get_Quantity_Type_Notifications_Repeated_Params Parms{};

	Parms.Widget = Widget;
	Parms.ReturnHudNotiifcation1 = ReturnHudNotiifcation1;
	Parms.ReturnHudNotiifcation = ReturnHudNotiifcation;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (Temp_int_Variable_2 != nullptr)
		*Temp_int_Variable_2 = Parms.Temp_int_Variable_2;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.CreateSmallEntryNotification
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructEntry                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class UHUDNotificationEntrySmall_C*CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UHorizontalBoxSlot* UHUDNotificationPanel_C::CreateSmallEntryNotification(TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUDNotificationEntrySmall_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "CreateSmallEntryNotification");

	Params::UHUDNotificationPanel_C_CreateSmallEntryNotification_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.CreateEntryWidgetForNotification
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHUDNotificationEntry_StructEntry                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// class UUniformGridPanel*           ToGridPanel                                                      (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               PreventAnim                                                      (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>Array                                                            (ExportObject, Parm, OutParm, ZeroConstructor)
// bool                               CallFunc_ShouldShowExtendedInfoButton_ReturnValue                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UHUDNotificationEntry_C*     CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

int32 UHUDNotificationPanel_C::CreateEntryWidgetForNotification(class UUniformGridPanel* ToGridPanel, bool PreventAnim, TArray<struct FHUDNotificationEntry_Struct>* Array, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32* Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UHUDNotificationEntry_C* CallFunc_Create_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "CreateEntryWidgetForNotification");

	Params::UHUDNotificationPanel_C_CreateEntryWidgetForNotification_Params Parms{};

	Parms.ToGridPanel = ToGridPanel;
	Parms.PreventAnim = PreventAnim;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.AddHUDNotificationEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      String                                                           (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FColor                      Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)
// class UMaterialInterface*          Material                                                         (Edit, ConstParm, Net, EditFixedSize, Transient, Config, DisableEditOnInstance)
// class UTexture2D*                  Texture                                                          (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// double                             DisplayTime                                                      (ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             DisplayScale                                                     (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsSingleton                                                     (Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              MessageTypeID                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Priority                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               WasLastNotification                                              (ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>LocalEntries                                                     (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UHUDNotificationEntry_C*     NotificationToReplace                                            (Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              QuantittyOfCurrentNotification                                   (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FHUDNotificationEntry_StructLocalEntry                                                       (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               LocalUpdatedSingleton                                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Len_ReturnValue                                         (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_LinearColorLinearColor_ReturnValue           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// struct FHUDNotificationEntry_StructK2Node_MakeStruct_HUDNotificationEntry_Struct                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldShowExtendedInfoButton_ReturnValue                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_ShouldShowExtendedInfoButton_ReturnValue_1              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Get_Quantity_Type_Notifications_Repeated_Quantity       (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UPrimalUserWidget*>   CallFunc_Get_Quantity_Type_Notifications_Repeated_ReturnHudNotiifcation1(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry                       (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FHUDNotificationEntry_StructK2Node_MakeStruct_HUDNotificationEntry_Struct_1                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Get_Quantity_Type_Notifications_Repeated_Quantity_1     (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// TArray<class UPrimalUserWidget*>   CallFunc_Get_Quantity_Type_Notifications_Repeated_ReturnHudNotiifcation1_1(BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UPrimalUserWidget*           CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UHUDNotificationEntry_C*     K2Node_DynamicCast_AsHUDNotification_Entry_1                     (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)

bool UHUDNotificationPanel_C::AddHUDNotificationEntry(const class FString& String, struct FColor* Color, class UMaterialInterface* Material, int32 MessageTypeID, int32* Priority, bool* WasLastNotification, class UHUDNotificationEntry_C* NotificationToReplace, int32 QuantittyOfCurrentNotification, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsTimeSince_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_1, class UPrimalUserWidget* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array_1, class UPrimalUserWidget* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32* CallFunc_GetChildrenCount_ReturnValue, int32* CallFunc_GetChildrenCount_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "AddHUDNotificationEntry");

	Params::UHUDNotificationPanel_C_AddHUDNotificationEntry_Params Parms{};

	Parms.String = String;
	Parms.Material = Material;
	Parms.MessageTypeID = MessageTypeID;
	Parms.NotificationToReplace = NotificationToReplace;
	Parms.QuantittyOfCurrentNotification = QuantittyOfCurrentNotification;
	Parms.CallFunc_GetShooterGameUserSettings_ReturnValue = CallFunc_GetShooterGameUserSettings_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

	if (Priority != nullptr)
		*Priority = Parms.Priority;

	if (WasLastNotification != nullptr)
		*WasLastNotification = Parms.WasLastNotification;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (CallFunc_GetChildrenCount_ReturnValue_1 != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue_1 = Parms.CallFunc_GetChildrenCount_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue_1 = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UHUDNotificationPanel_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "Tick");

	Params::UHUDNotificationPanel_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UHUDNotificationPanel_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "OnGamepadActiveChangedBP");

	Params::UHUDNotificationPanel_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDNotificationPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.DoExtraScalingForSplitscreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   PlayerSize                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UHUDNotificationPanel_C::DoExtraScalingForSplitscreen(const struct FVector2D& PlayerSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "DoExtraScalingForSplitscreen");

	Params::UHUDNotificationPanel_C_DoExtraScalingForSplitscreen_Params Parms{};

	Parms.PlayerSize = PlayerSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUDNotificationPanel.HUDNotificationPanel_C.ExecuteUbergraph_HUDNotificationPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_ShouldShowExtendedHUDInfo_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_HasAnyChildren_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_HasAnyChildren_ReturnValue_2                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalGlobalUIData*         K2Node_DynamicCast_AsPrimal_Global_UIData                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FKey                        CallFunc_GetKeybindByPredicate_ReturnValue                       (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue                          (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FKey                        CallFunc_GetKeybindByPredicate_ReturnValue_1                     (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_Key_GetDisplayName_ReturnValue_1                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_Hub*                     CallFunc_GetCurrentHubUI_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector2D                   K2Node_Event_PlayerSize                                          (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterHUD*                 CallFunc_GetShooterHUD_ReturnValue_1                             (ConstParm, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UHUDNotificationEntrySmall_C*K2Node_DynamicCast_AsHUDNotification_Entry_Small_1               (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FHUDNotificationEntry_StructCallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FHUDNotificationEntry_StructK2Node_MakeStruct_HUDNotificationEntry_Struct                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<struct FHUDNotificationEntry_Struct>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Divide_DoubleFloat_B_ImplicitCast                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ConstParm, ExportObject, Net, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UHUDNotificationPanel_C::ExecuteUbergraph_HUDNotificationPanel(int32* EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool* K2Node_Event_bIsGamepadActive, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, class UPrimalGlobalUIData** K2Node_DynamicCast_AsPrimal_Global_UIData, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsTimeSince_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_2, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* Temp_int_Variable, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess_3, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_4, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess_5, bool Temp_bool_Variable, int32* Temp_int_Variable_1, class UWidget** CallFunc_GetChildAt_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_6, double CallFunc_SelectFloat_ReturnValue_2, const struct FHUDNotificationEntry_Struct& CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, TArray<struct FHUDNotificationEntry_Struct>* K2Node_MakeArray_Array, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUDNotificationPanel_C", "ExecuteUbergraph_HUDNotificationPanel");

	Params::UHUDNotificationPanel_C_ExecuteUbergraph_HUDNotificationPanel_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetChildrenCount_ReturnValue_1 != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue_1 = Parms.CallFunc_GetChildrenCount_ReturnValue_1;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

	if (K2Node_DynamicCast_AsPrimal_Global_UIData != nullptr)
		*K2Node_DynamicCast_AsPrimal_Global_UIData = Parms.K2Node_DynamicCast_AsPrimal_Global_UIData;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_MakeVector2D_ReturnValue_1 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_1 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_1);

	if (CallFunc_MakeVector2D_ReturnValue_2 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_2 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_2);

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_GetChildAt_ReturnValue_1 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_1 = Parms.CallFunc_GetChildAt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}

}


