#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C
// (None)

class UClass* UPrimalItemArmor_Base_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Base_Tek_C");

	return Clss;
}


// PrimalItemArmor_Base_Tek_C PrimalItemArmor_Base_Tek.Default__PrimalItemArmor_Base_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Base_Tek_C* UPrimalItemArmor_Base_Tek_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Base_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Base_Tek_C*>(UPrimalItemArmor_Base_Tek_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetMaxAmmo
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPrimalItemArmor_Base_Tek_C::BPGetMaxAmmo(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetMaxAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInfinite                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               IsBuffInfinite                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::IsInfiniteAmmo(bool IsInfinite, bool IsBuffInfinite, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class ABuff_TekArmor_C** K2Node_DynamicCast_AsBuff_Tek_Armor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IsInfiniteAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params Parms{};

	Parms.IsInfinite = IsInfinite;
	Parms.IsBuffInfinite = IsBuffInfinite;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsBuff_Tek_Armor != nullptr)
		*K2Node_DynamicCast_AsBuff_Tek_Armor = Parms.K2Node_DynamicCast_AsBuff_Tek_Armor;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ApplyingSkinOntoItem");

	Params::UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::RemovedSkinFromItem(bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "RemovedSkinFromItem");

	Params::UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params Parms{};

	Parms.bIsFirstTime = bIsFirstTime;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           OwningPlayer                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UClass*                      TekArmorBuff                                                     (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      OutInternalBuff                                                  (Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FMapSpecificTekArmorBuffs   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

bool UPrimalItemArmor_Base_Tek_C::GetInternalMapRestrictedTekArmorBuff(class UClass** TekArmorBuff, class UClass** OutInternalBuff, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetInternalMapRestrictedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params Parms{};

	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (TekArmorBuff != nullptr)
		*TekArmorBuff = Parms.TekArmorBuff;

	if (OutInternalBuff != nullptr)
		*OutInternalBuff = Parms.OutInternalBuff;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ResolvedTekArmorBuff                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      OutBuff                                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)

class UClass* UPrimalItemArmor_Base_Tek_C::GetResolvedTekArmorBuff(class UClass** ResolvedTekArmorBuff, class UClass** OutBuff, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetResolvedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ResolvedTekArmorBuff != nullptr)
		*ResolvedTekArmorBuff = Parms.ResolvedTekArmorBuff;

	if (OutBuff != nullptr)
		*OutBuff = Parms.OutBuff;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::FillEmptyArmorElementWhenAvailable(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_UseItemOntoItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "FillEmptyArmorElementWhenAvailable");

	Params::UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params Parms{};

	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_UseItemOntoItem_ReturnValue = CallFunc_UseItemOntoItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::InitBuff(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "InitBuff");

	Params::UPrimalItemArmor_Base_Tek_C_InitBuff_Params Parms{};

	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 PossessedByController                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UPrimalItemArmor_Base_Tek_C::BlueprintOwnerPosssessed(class AController* PossessedByController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintOwnerPosssessed");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintOwnerPosssessed_Params Parms{};

	Parms.PossessedByController = PossessedByController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::BlueprintUnequipped(class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintUnequipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params Parms{};

	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FString                      Return                                                           (Edit, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

class FString UPrimalItemArmor_Base_Tek_C::BPGetCustomInventoryWidgetText(const class FString& ReturnValue, class FString* Return, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = std::move(Parms.Return);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               PreventCheckingInventory                                         (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CanDecrease                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Return_Val                                                       (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::Can_Element_Decrease(bool* PreventCheckingInventory, bool CanDecrease, bool* Return_Val, bool CallFunc_IsInfiniteAmmo_IsInfinite, bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "Can Element Decrease");

	Params::UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params Parms{};

	Parms.CanDecrease = CanDecrease;
	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PreventCheckingInventory != nullptr)
		*PreventCheckingInventory = Parms.PreventCheckingInventory;

	if (Return_Val != nullptr)
		*Return_Val = Parms.Return_Val;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Return_Val                                                       (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

void UPrimalItemArmor_Base_Tek_C::BlueprintEquipped(bool bIsFromSaveGame, bool* Return_Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Val != nullptr)
		*Return_Val = Parms.Return_Val;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

int32 UPrimalItemArmor_Base_Tek_C::TryToDecreaseElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TryToDecreaseElement");

	Params::UPrimalItemArmor_Base_Tek_C_TryToDecreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.SetElementToMax
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::SetElementToMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "SetElementToMax");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IncreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Percent                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)

void UPrimalItemArmor_Base_Tek_C::IncreaseElement(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TekArmorSkinApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TekArmorSkinRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_Base_Tek_C::TekArmorSkinRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "TekArmorSkinRemoved");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ExecuteUbergraph_PrimalItemArmor_Base_Tek
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             K2Node_CustomEvent_Percent                                       (BlueprintVisible, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1          (Edit, ConstParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference, Interp)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite_1                             (Edit, ConstParm, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)

class UWorld* UPrimalItemArmor_Base_Tek_C::ExecuteUbergraph_PrimalItemArmor_Base_Tek(bool CallFunc_IsInfiniteAmmo_IsInfinite, int32 CallFunc_GetWeaponClipAmmo_ReturnValue, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_1, double* K2Node_CustomEvent_Percent, int32 CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32* K2Node_CustomEvent_AmountToDecreaseBy, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, class UClass* CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1, bool CallFunc_IsInfiniteAmmo_IsInfinite_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ExecuteUbergraph_PrimalItemArmor_Base_Tek");

	Params::UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params Parms{};

	Parms.CallFunc_IsInfiniteAmmo_IsInfinite = CallFunc_IsInfiniteAmmo_IsInfinite;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue = CallFunc_GetWeaponClipAmmo_ReturnValue;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1 = CallFunc_GetWeaponClipAmmo_ReturnValue_1;
	Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2 = CallFunc_GetWeaponClipAmmo_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1 = CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_StaticAddBuff_ReturnValue_1 = CallFunc_StaticAddBuff_ReturnValue_1;
	Parms.CallFunc_IsInfiniteAmmo_IsInfinite_1 = CallFunc_IsInfiniteAmmo_IsInfinite_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Percent != nullptr)
		*K2Node_CustomEvent_Percent = Parms.K2Node_CustomEvent_Percent;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (K2Node_CustomEvent_AmountToDecreaseBy != nullptr)
		*K2Node_CustomEvent_AmountToDecreaseBy = Parms.K2Node_CustomEvent_AmountToDecreaseBy;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


