#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C
// (None)

class UClass* UPrimalItem_WeaponTekClaws_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponTekClaws_C");

	return Clss;
}


// PrimalItem_WeaponTekClaws_C PrimalItem_WeaponTekClaws.Default__PrimalItem_WeaponTekClaws_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponTekClaws_C* UPrimalItem_WeaponTekClaws_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponTekClaws_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponTekClaws_C*>(UPrimalItem_WeaponTekClaws_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BPAddedAttachments
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapTekClaws_Base_C*        K2Node_DynamicCast_AsWeap_Tek_Claws_Base                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

void UPrimalItem_WeaponTekClaws_C::BPAddedAttachments(class AWeapTekClaws_Base_C** K2Node_DynamicCast_AsWeap_Tek_Claws_Base, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekClaws_C", "BPAddedAttachments");

	Params::UPrimalItem_WeaponTekClaws_C_BPAddedAttachments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsWeap_Tek_Claws_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Tek_Claws_Base = Parms.K2Node_DynamicCast_AsWeap_Tek_Claws_Base;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.CanRunCosmeticEvents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanRun                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               RetCanRun                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_WeaponTekClaws_C::CanRunCosmeticEvents(bool* CanRun, bool* RetCanRun, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekClaws_C", "CanRunCosmeticEvents");

	Params::UPrimalItem_WeaponTekClaws_C_CanRunCosmeticEvents_Params Parms{};

	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanRun != nullptr)
		*CanRun = Parms.CanRun;

	if (RetCanRun != nullptr)
		*RetCanRun = Parms.RetCanRun;

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintUnequipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItem_WeaponTekClaws_C::BlueprintUnequipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekClaws_C", "BlueprintUnequipped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintOwnerPosssessed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 PossessedByController                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class AController* UPrimalItem_WeaponTekClaws_C::BlueprintOwnerPosssessed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekClaws_C", "BlueprintOwnerPosssessed");

	Params::UPrimalItem_WeaponTekClaws_C_BlueprintOwnerPosssessed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PrimalItem_WeaponTekClaws.PrimalItem_WeaponTekClaws_C.BlueprintEquipped
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFromSaveGame                                                  (Edit, ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AWeapTekClaws_Base_C*        K2Node_DynamicCast_AsWeap_Tek_Claws_Base                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

bool UPrimalItem_WeaponTekClaws_C::BlueprintEquipped(class AWeapTekClaws_Base_C** K2Node_DynamicCast_AsWeap_Tek_Claws_Base, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponTekClaws_C", "BlueprintEquipped");

	Params::UPrimalItem_WeaponTekClaws_C_BlueprintEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsWeap_Tek_Claws_Base != nullptr)
		*K2Node_DynamicCast_AsWeap_Tek_Claws_Base = Parms.K2Node_DynamicCast_AsWeap_Tek_Claws_Base;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


