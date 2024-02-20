#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C
// (None)

class UClass* UPrimalItem_WeaponMachinedSniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeaponMachinedSniper_C");

	return Clss;
}


// PrimalItem_WeaponMachinedSniper_C PrimalItem_WeaponMachinedSniper.Default__PrimalItem_WeaponMachinedSniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeaponMachinedSniper_C* UPrimalItem_WeaponMachinedSniper_C::GetDefaultObj()
{
	static class UPrimalItem_WeaponMachinedSniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeaponMachinedSniper_C*>(UPrimalItem_WeaponMachinedSniper_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItem_WeaponMachinedSniper.PrimalItem_WeaponMachinedSniper_C.BPPreventWeaponEquip
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        RiddenDino                                                       (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetRidingDino_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UPrimalItem_WeaponMachinedSniper_C::BPPreventWeaponEquip(bool ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponMachinedSniper_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponMachinedSniper_C_BPPreventWeaponEquip_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}

}


