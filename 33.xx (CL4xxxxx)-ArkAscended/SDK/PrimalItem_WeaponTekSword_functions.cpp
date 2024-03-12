#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C
// (None)

class UClass* UPrimalItem_WeaponTekSword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekSword_C");

	return Clss;
}


// PrimalItem_WeaponTekSword_C PrimalItem_WeaponTekSword.Default__PrimalItem_WeaponTekSword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekSword_C* UPrimalItem_WeaponTekSword_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekSword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekSword_C*>(UPrimalItem_WeaponTekSword_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTekSword_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekSword_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintOwnerPosssessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 PossessedByController                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class AController* UPrimalItem_WeaponTekSword_C::BlueprintOwnerPosssessed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekSword_C", "BlueprintOwnerPosssessed");

	Params::UPrimalItem_WeaponTekSword_C_BlueprintOwnerPosssessed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.InitBuff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class APrimalBuff* UPrimalItem_WeaponTekSword_C::InitBuff(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekSword_C", "InitBuff");

	Params::UPrimalItem_WeaponTekSword_C_InitBuff_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekSword.PrimalItem_WeaponTekSword_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponTekSword_C::BlueprintEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekSword_C", "BlueprintEquipped");

	Params::UPrimalItem_WeaponTekSword_C_BlueprintEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


