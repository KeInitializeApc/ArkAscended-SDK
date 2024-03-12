#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C
// (None)

class UClass* UPrimalItem_WeaponTekGrenadeLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekGrenadeLauncher_C");

	return Clss;
}


// PrimalItem_WeaponTekGrenadeLauncher_C PrimalItem_WeaponTekGrenadeLauncher.Default__PrimalItem_WeaponTekGrenadeLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekGrenadeLauncher_C* UPrimalItem_WeaponTekGrenadeLauncher_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekGrenadeLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekGrenadeLauncher_C*>(UPrimalItem_WeaponTekGrenadeLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetItemDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InDescription                                                    (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bGetLongDescription                                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class FString>              Slots                                                            (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FString                      Desc                                                             (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_JoinStringArrayWithNewlines_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FCustomItemData             CallFunc_GetCustomItemData_OutData                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_GetCustomItemData_ReturnValue                           (ExportObject, Parm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Item                            (ConstParm, ExportObject, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_StaticGetItemNameAndIcon_OutItemName                    (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_StaticGetItemNameAndIcon_OutItemIcon                    (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_StaticGetItemNameAndIcon_ReturnValue                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double UPrimalItem_WeaponTekGrenadeLauncher_C::BPGetItemDescription(class AShooterPlayerController** ForPC, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_JoinStringArrayWithNewlines_ReturnValue, const struct FCustomItemData& CallFunc_GetCustomItemData_OutData, bool CallFunc_GetCustomItemData_ReturnValue, class UClass* CallFunc_Array_Get_Item, float CallFunc_Array_Get_Item_1, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekGrenadeLauncher_C", "BPGetItemDescription");

	Params::UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetItemDescription_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_JoinStringArrayWithNewlines_ReturnValue = CallFunc_JoinStringArrayWithNewlines_ReturnValue;
	Parms.CallFunc_GetCustomItemData_OutData = CallFunc_GetCustomItemData_OutData;
	Parms.CallFunc_GetCustomItemData_ReturnValue = CallFunc_GetCustomItemData_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_MakeStruct_FormatArgumentData_2 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_2 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_2);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekGrenadeLauncher.PrimalItem_WeaponTekGrenadeLauncher_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

class FString UPrimalItem_WeaponTekGrenadeLauncher_C::BPGetCustomInventoryWidgetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekGrenadeLauncher_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItem_WeaponTekGrenadeLauncher_C_BPGetCustomInventoryWidgetText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


