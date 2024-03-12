#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShooterHudBP.ShooterHudBP_C
// (Actor)

class UClass* AShooterHudBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShooterHudBP_C");

	return Clss;
}


// ShooterHudBP_C ShooterHudBP.Default__ShooterHudBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShooterHudBP_C* AShooterHudBP_C::GetDefaultObj()
{
	static class AShooterHudBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShooterHudBP_C*>(AShooterHudBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShooterHudBP.ShooterHudBP_C.BPCustomAddHUDNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      NotificationString                                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FColor                      NotificationColor                                                (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInterface*          NotificationMaterial                                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2D*                  NotificationTexture                                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              DisplayTime                                                      (ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              DisplayScale                                                     (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bIsSingleton                                                     (Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              MessageTypeID                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Priority                                                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayerController_ReturnValue                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalUserWidget*           CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UHUDNotificationPanel_C*     K2Node_DynamicCast_AsHUDNotification_Panel                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_AddHUDNotificationEntry_DisplayTime_ImplicitCast        (Edit, BlueprintVisible, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_AddHUDNotificationEntry_DisplayScale_ImplicitCast       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double AShooterHudBP_C::BPCustomAddHUDNotification(const class FString& NotificationString, const struct FColor& NotificationColor, class UMaterialInterface* NotificationMaterial, class UTexture2D* NotificationTexture, int32 MessageTypeID, int32* Priority, class UPrimalUserWidget* CallFunc_Create_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShooterHudBP_C", "BPCustomAddHUDNotification");

	Params::AShooterHudBP_C_BPCustomAddHUDNotification_Params Parms{};

	Parms.NotificationString = NotificationString;
	Parms.NotificationColor = NotificationColor;
	Parms.NotificationMaterial = NotificationMaterial;
	Parms.NotificationTexture = NotificationTexture;
	Parms.MessageTypeID = MessageTypeID;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Priority != nullptr)
		*Priority = Parms.Priority;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function ShooterHudBP.ShooterHudBP_C.GetAdditionalExplorerNoteDynamicMaterialParams
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FExplorerNoteEntry          ExplorerNote                                                     (Edit, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FNameScalarPair>     ScalarMaterialParams                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FNameColorPair>      ColorMaterialParams                                              (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CosmeticHLNA                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               FoundItemColors                                                  (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FNameColorPair>      ColorMatParams                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FNameScalarPair>     ScalarMatParams                                                  (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalCharacter*            CallFunc_GetPawn_ReturnValue                                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue_1                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FNameScalarPair             K2Node_MakeStruct_NameScalarPair                                 (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FNameScalarPair             K2Node_MakeStruct_NameScalarPair_1                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetItemColorID_ReturnValue                              (Edit, ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_2                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FLinearColor                CallFunc_StaticGetColorForItemColorID_ReturnValue                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// struct FNameColorPair              K2Node_MakeStruct_NameColorPair                                  (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// TArray<class AShooterCharacter*>   CallFunc_GetAllLocalPlayerCharacters_ReturnValue                 (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool AShooterHudBP_C::GetAdditionalExplorerNoteDynamicMaterialParams(struct FExplorerNoteEntry* ExplorerNote, TArray<struct FNameScalarPair>* ScalarMaterialParams, TArray<struct FNameColorPair>* ColorMaterialParams, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32* Temp_int_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_2, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class AShooterCharacter*>* CallFunc_GetAllLocalPlayerCharacters_ReturnValue, class AShooterCharacter* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShooterHudBP_C", "GetAdditionalExplorerNoteDynamicMaterialParams");

	Params::AShooterHudBP_C_GetAdditionalExplorerNoteDynamicMaterialParams_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ExplorerNote != nullptr)
		*ExplorerNote = std::move(Parms.ExplorerNote);

	if (ScalarMaterialParams != nullptr)
		*ScalarMaterialParams = std::move(Parms.ScalarMaterialParams);

	if (ColorMaterialParams != nullptr)
		*ColorMaterialParams = std::move(Parms.ColorMaterialParams);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (K2Node_MakeStruct_FormatArgumentData_2 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_2 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_2);

	if (K2Node_MakeArray_Array_2 != nullptr)
		*K2Node_MakeArray_Array_2 = std::move(Parms.K2Node_MakeArray_Array_2);

	if (CallFunc_GetAllLocalPlayerCharacters_ReturnValue != nullptr)
		*CallFunc_GetAllLocalPlayerCharacters_ReturnValue = std::move(Parms.CallFunc_GetAllLocalPlayerCharacters_ReturnValue);

	return Parms.ReturnValue;

}


// Function ShooterHudBP.ShooterHudBP_C.BPForceReinitUI
// (Event, Public, BlueprintEvent)
// Parameters:

void AShooterHudBP_C::BPForceReinitUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShooterHudBP_C", "BPForceReinitUI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShooterHudBP.ShooterHudBP_C.ExecuteUbergraph_ShooterHudBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool AShooterHudBP_C::ExecuteUbergraph_ShooterHudBP(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShooterHudBP_C", "ExecuteUbergraph_ShooterHudBP");

	Params::AShooterHudBP_C_ExecuteUbergraph_ShooterHudBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


