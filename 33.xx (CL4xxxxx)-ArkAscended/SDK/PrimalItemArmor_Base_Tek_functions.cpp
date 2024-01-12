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
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UPrimalItemArmor_Base_Tek_C::BPGetMaxAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetMaxAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetMaxAmmo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.IsInfiniteAmmo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsInfinite                                                       (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               IsBuffInfinite                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class UObject*                     CallFunc_GetClassDefaultObject_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class ABuff_TekArmor_C* UPrimalItemArmor_Base_Tek_C::IsInfiniteAmmo(bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IsInfiniteAmmo");

	Params::UPrimalItemArmor_Base_Tek_C_IsInfiniteAmmo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.ApplyingSkinOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UPrimalItemArmor_Base_Tek_C::ApplyingSkinOntoItem(class UPrimalItem* ToOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ApplyingSkinOntoItem");

	Params::UPrimalItemArmor_Base_Tek_C_ApplyingSkinOntoItem_Params Parms{};

	Parms.ToOwnerItem = ToOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.RemovedSkinFromItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

void UPrimalItemArmor_Base_Tek_C::RemovedSkinFromItem(class UPrimalItem* FromOwnerItem, bool bIsFirstTime, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "RemovedSkinFromItem");

	Params::UPrimalItemArmor_Base_Tek_C_RemovedSkinFromItem_Params Parms{};

	Parms.FromOwnerItem = FromOwnerItem;
	Parms.bIsFirstTime = bIsFirstTime;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetInternalMapRestrictedTekArmorBuff
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UClass*                      TekArmorBuff                                                     (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      OutInternalBuff                                                  (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_BPGetPrimaryMapName_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst, SubobjectReference)
// struct FMapSpecificTekArmorBuffs   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

bool UPrimalItemArmor_Base_Tek_C::GetInternalMapRestrictedTekArmorBuff(int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_BPGetPrimaryMapName_ReturnValue, struct FMapSpecificTekArmorBuffs* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetInternalMapRestrictedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetInternalMapRestrictedTekArmorBuff_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BPGetPrimaryMapName_ReturnValue = CallFunc_BPGetPrimaryMapName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.GetResolvedTekArmorBuff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ResolvedTekArmorBuff                                             (ExportObject, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      OutBuff                                                          (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class UPrimalItemArmor_Base_Tek_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek                  (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)

class UClass* UPrimalItemArmor_Base_Tek_C::GetResolvedTekArmorBuff(class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class UPrimalItemArmor_Base_Tek_C** K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "GetResolvedTekArmorBuff");

	Params::UPrimalItemArmor_Base_Tek_C_GetResolvedTekArmorBuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwnerPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwnerPlayer_ReturnValue = Parms.CallFunc_GetOwnerPlayer_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek != nullptr)
		*K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek = Parms.K2Node_DynamicCast_AsPrimal_Item_Armor_Base_Tek;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.FillEmptyArmorElementWhenAvailable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_UseItemOntoItem_ReturnValue                             (Edit, ExportObject, Net, OutParm, ReturnParm, EditConst, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::FillEmptyArmorElementWhenAvailable(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "FillEmptyArmorElementWhenAvailable");

	Params::UPrimalItemArmor_Base_Tek_C_FillEmptyArmorElementWhenAvailable_Params Parms{};

	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.InitBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)

class UClass* UPrimalItemArmor_Base_Tek_C::InitBuff(class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "InitBuff");

	Params::UPrimalItemArmor_Base_Tek_C_InitBuff_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintOwnerPosssessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 PossessedByController                                            (BlueprintVisible, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UClass* UPrimalItemArmor_Base_Tek_C::BlueprintUnequipped(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintUnequipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintUnequipped_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BPGetCustomInventoryWidgetText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      Return                                                           (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

double UPrimalItemArmor_Base_Tek_C::BPGetCustomInventoryWidgetText(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BPGetCustomInventoryWidgetText");

	Params::UPrimalItemArmor_Base_Tek_C_BPGetCustomInventoryWidgetText_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.Can Element Decrease
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// bool                               PreventCheckingInventory                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CanDecrease                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               Return_Val                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_BPGetItemOfTemplate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::Can_Element_Decrease(bool* CallFunc_IsValid_ReturnValue, class UPrimalItem* CallFunc_BPGetItemOfTemplate_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "Can Element Decrease");

	Params::UPrimalItemArmor_Base_Tek_C_Can_Element_Decrease_Params Parms{};

	Parms.CallFunc_BPGetItemOfTemplate_ReturnValue = CallFunc_BPGetItemOfTemplate_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Return_Val                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)

bool UPrimalItemArmor_Base_Tek_C::BlueprintEquipped(bool bIsFromSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_Base_Tek_C_BlueprintEquipped_Params Parms{};

	Parms.bIsFromSaveGame = bIsFromSaveGame;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_Base_Tek.PrimalItemArmor_Base_Tek_C.TryToDecreaseElement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AmountToDecreaseBy                                               (BlueprintReadOnly, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)

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
// double                             Percent                                                          (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

double UPrimalItemArmor_Base_Tek_C::IncreaseElement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "IncreaseElement");

	Params::UPrimalItemArmor_Base_Tek_C_IncreaseElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite                               (Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_1                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             K2Node_CustomEvent_Percent                                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_GetWeaponClipAmmo_ReturnValue_2                         (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              K2Node_CustomEvent_AmountToDecreaseBy                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Can_Element_Decrease_CanDecrease                        (BlueprintReadOnly, Parm, ReturnParm, EditConst, SubobjectReference)
// int32                              CallFunc_Clamp_ReturnValue                                       (ConstParm, BlueprintVisible, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UClass*                      CallFunc_GetResolvedTekArmorBuff_ResolvedTekArmorBuff_1          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff       (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// class UClass*                      CallFunc_GetInternalMapRestrictedTekArmorBuff_TekArmorBuff_1     (Edit, ExportObject, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue_1                             (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// class UWorld*                      CallFunc_GetPrimaryWorld_ReturnValue                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsInfiniteAmmo_IsInfinite_1                             (Edit, ConstParm, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)

bool UPrimalItemArmor_Base_Tek_C::ExecuteUbergraph_PrimalItemArmor_Base_Tek(int32* CallFunc_GetWeaponClipAmmo_ReturnValue, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_1, int32* CallFunc_GetWeaponClipAmmo_ReturnValue_2, double* CallFunc_FClamp_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class AActor** CallFunc_GetOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class AActor** CallFunc_GetOwner_ReturnValue_2, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor** CallFunc_GetOwner_ReturnValue_3, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue, class AShooterCharacter** CallFunc_GetOwnerPlayer_ReturnValue_1, class APrimalBuff* CallFunc_StaticAddBuff_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_Base_Tek_C", "ExecuteUbergraph_PrimalItemArmor_Base_Tek");

	Params::UPrimalItemArmor_Base_Tek_C_ExecuteUbergraph_PrimalItemArmor_Base_Tek_Params Parms{};

	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Character_1 = K2Node_DynamicCast_AsPrimal_Character_1;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.CallFunc_StaticAddBuff_ReturnValue = CallFunc_StaticAddBuff_ReturnValue;
	Parms.CallFunc_StaticAddBuff_ReturnValue_1 = CallFunc_StaticAddBuff_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetWeaponClipAmmo_ReturnValue != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_1 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_1 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_1;

	if (CallFunc_GetWeaponClipAmmo_ReturnValue_2 != nullptr)
		*CallFunc_GetWeaponClipAmmo_ReturnValue_2 = Parms.CallFunc_GetWeaponClipAmmo_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetOwner_ReturnValue_1 != nullptr)
		*CallFunc_GetOwner_ReturnValue_1 = Parms.CallFunc_GetOwner_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetOwner_ReturnValue_2 != nullptr)
		*CallFunc_GetOwner_ReturnValue_2 = Parms.CallFunc_GetOwner_ReturnValue_2;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetOwner_ReturnValue_3 != nullptr)
		*CallFunc_GetOwner_ReturnValue_3 = Parms.CallFunc_GetOwner_ReturnValue_3;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_GetOwnerPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwnerPlayer_ReturnValue = Parms.CallFunc_GetOwnerPlayer_ReturnValue;

	if (CallFunc_GetOwnerPlayer_ReturnValue_1 != nullptr)
		*CallFunc_GetOwnerPlayer_ReturnValue_1 = Parms.CallFunc_GetOwnerPlayer_ReturnValue_1;

	return Parms.ReturnValue;

}

}


