#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C
// (None)

class UClass* UPrimalItemArmor_TekShirt_Gen2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_TekShirt_Gen2_C");

	return Clss;
}


// PrimalItemArmor_TekShirt_Gen2_C PrimalItemArmor_TekShirt_Gen2.Default__PrimalItemArmor_TekShirt_Gen2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_TekShirt_Gen2_C* UPrimalItemArmor_TekShirt_Gen2_C::GetDefaultObj()
{
	static class UPrimalItemArmor_TekShirt_Gen2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_TekShirt_Gen2_C*>(UPrimalItemArmor_TekShirt_Gen2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.RemovedSkinFromItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 FromOwnerItem                                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_TekShirt_Gen2_C::RemovedSkinFromItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_TekShirt_Gen2_C", "RemovedSkinFromItem");

	Params::UPrimalItemArmor_TekShirt_Gen2_C_RemovedSkinFromItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.ApplyingSkinOntoItem
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalItem*                 ToOwnerItem                                                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bIsFirstTime                                                     (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_TekShirt_Gen2_C::ApplyingSkinOntoItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_TekShirt_Gen2_C", "ApplyingSkinOntoItem");

	Params::UPrimalItemArmor_TekShirt_Gen2_C_ApplyingSkinOntoItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UPrimalItemArmor_TekShirt_Gen2_C::BlueprintEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_TekShirt_Gen2_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_TekShirt_Gen2_C_BlueprintEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemArmor_TekShirt_Gen2_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_TekShirt_Gen2_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItemArmor_TekShirt_Gen2.PrimalItemArmor_TekShirt_Gen2_C.TryTekSuitVFXOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnequip                                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue                             (ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// struct FTransform                  CallFunc_SelectTransform_ReturnValue_1                           (ConstParm, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UPrimalItemArmor_TekShirt_C* K2Node_DynamicCast_AsPrimal_Item_Armor_Tek_Shirt                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue_1                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class ABuff_TekArmor_C*            K2Node_DynamicCast_AsBuff_Tek_Armor_1                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)

class APrimalBuff* UPrimalItemArmor_TekShirt_Gen2_C::TryTekSuitVFXOffset(const struct FTransform& CallFunc_MakeTransform_ReturnValue, struct FTransform* CallFunc_SelectTransform_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, struct FTransform* CallFunc_SelectTransform_ReturnValue_1, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_3, class ABuff_TekArmor_C* K2Node_DynamicCast_AsBuff_Tek_Armor_1, bool* K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_TekShirt_Gen2_C", "TryTekSuitVFXOffset");

	Params::UPrimalItemArmor_TekShirt_Gen2_C_TryTekSuitVFXOffset_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor = K2Node_DynamicCast_AsBuff_Tek_Armor;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBuff_Tek_Armor_1 = K2Node_DynamicCast_AsBuff_Tek_Armor_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SelectTransform_ReturnValue != nullptr)
		*CallFunc_SelectTransform_ReturnValue = std::move(Parms.CallFunc_SelectTransform_ReturnValue);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_SelectTransform_ReturnValue_1 != nullptr)
		*CallFunc_SelectTransform_ReturnValue_1 = std::move(Parms.CallFunc_SelectTransform_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	return Parms.ReturnValue;

}

}


