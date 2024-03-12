#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C
// (None)

class UClass* UPrimalItemArmor_HazardSuitPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_HazardSuitPants_C");

	return Clss;
}


// PrimalItemArmor_HazardSuitPants_C PrimalItemArmor_HazardSuitPants.Default__PrimalItemArmor_HazardSuitPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_HazardSuitPants_C* UPrimalItemArmor_HazardSuitPants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_HazardSuitPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_HazardSuitPants_C*>(UPrimalItemArmor_HazardSuitPants_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void UPrimalItemArmor_HazardSuitPants_C::BlueprintUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_HazardSuitPants_C", "BlueprintUnequipped");

	Params::UPrimalItemArmor_HazardSuitPants_C_BlueprintUnequipped_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PrimalItemArmor_HazardSuitPants.PrimalItemArmor_HazardSuitPants_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

class APrimalBuff* UPrimalItemArmor_HazardSuitPants_C::BlueprintEquipped(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemArmor_HazardSuitPants_C", "BlueprintEquipped");

	Params::UPrimalItemArmor_HazardSuitPants_C_BlueprintEquipped_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


