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
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class APrimalDinoCharacter*        RiddenDino                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetOwnerPlayer_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetRidingDino_ReturnValue                               (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class APrimalDinoCharacter>CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UPrimalItem_WeaponMachinedSniper_C::BPPreventWeaponEquip(class APrimalDinoCharacter* RiddenDino, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AShooterCharacter* CallFunc_GetOwnerPlayer_ReturnValue, class APrimalDinoCharacter* CallFunc_GetRidingDino_ReturnValue, TSoftClassPtr<class APrimalDinoCharacter> CallFunc_Array_Get_Item, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItem_WeaponMachinedSniper_C", "BPPreventWeaponEquip");

	Params::UPrimalItem_WeaponMachinedSniper_C_BPPreventWeaponEquip_Params Parms{};

	Parms.RiddenDino = RiddenDino;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwnerPlayer_ReturnValue = CallFunc_GetOwnerPlayer_ReturnValue;
	Parms.CallFunc_GetRidingDino_ReturnValue = CallFunc_GetRidingDino_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


