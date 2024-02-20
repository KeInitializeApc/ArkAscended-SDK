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
// bool                               bIgnoreCooldown                                                  (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               RetCanUse                                                        (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AStructureSeatingBaseBP_C*   K2Node_DynamicCast_AsStructure_Seating_Base_BP                   (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UPrimalItem_WeaponFishingRod_C::BPCanUse(bool bIgnoreCooldown, bool ReturnValue, bool* RetCanUse, class UClass* CallFunc_ClassAssetResolve_ReturnValue, class UClass* CallFunc_ClassAssetResolve_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool CallFunc_BP_ForceAllowMountedWeapon_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, class AStructureSeatingBaseBP_C** K2Node_DynamicCast_AsStructure_Seating_Base_BP, bool* CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponFishingRod_C", "BPCanUse");

	Params::UPrimalItem_WeaponFishingRod_C_BPCanUse_Params Parms{};

	Parms.bIgnoreCooldown = bIgnoreCooldown;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue_1 = CallFunc_ClassAssetResolve_ReturnValue_1;
	Parms.CallFunc_BP_ForceAllowMountedWeapon_ReturnValue = CallFunc_BP_ForceAllowMountedWeapon_ReturnValue;
	Parms.CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1 = CallFunc_BP_ForceAllowMountedWeapon_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RetCanUse != nullptr)
		*RetCanUse = Parms.RetCanUse;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_DynamicCast_AsStructure_Seating_Base_BP != nullptr)
		*K2Node_DynamicCast_AsStructure_Seating_Base_BP = Parms.K2Node_DynamicCast_AsStructure_Seating_Base_BP;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	return Parms.ReturnValue;

}

}


