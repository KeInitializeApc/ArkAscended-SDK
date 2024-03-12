#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C
// (None)

class UClass* UPrimalItem_WeaponFishingRod_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponFishingRod_C");

	return Clss;
}


// PrimalItem_WeaponFishingRod_C PrimalItem_WeaponFishingRod.Default__PrimalItem_WeaponFishingRod_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponFishingRod_C* UPrimalItem_WeaponFishingRod_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponFishingRod_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponFishingRod_C*>(UPrimalItem_WeaponFishingRod_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponFishingRod.PrimalItem_WeaponFishingRod_C.BPCanUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIgnoreCooldown                                                  (BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetCanUse                                                        (BlueprintVisible, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue                  (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1                (Edit, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class AStructureSeatingBaseBP_C*   K2Node_DynamicCast_AsStructure_Seating_Base_BP                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool UPrimalItem_WeaponFishingRod_C::BPCanUse(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponFishingRod_C", "BPCanUse");

	Params::UPrimalItem_WeaponFishingRod_C_BPCanUse_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


