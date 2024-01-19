#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
// (None)

class UClass* UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C");

	return Clss;
}


// DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.Default__DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C*>(UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_Torpidity_Low_StoneWeapon_Fire.DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C.OverrideBuffToGiveVictimCharacter
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class APrimalCharacter*            Victim                                                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      OutVal                                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TSoftClassPtr<class APrimalBuff>   Temp_softclass_Variable                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// TSoftClassPtr<class APrimalBuff>   K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (DisableEditOnInstance, SubobjectReference)

class UClass* UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::OverrideBuffToGiveVictimCharacter(class UClass* ReturnValue, class UClass** OutVal, bool Temp_bool_Variable, class APrimalDinoCharacter* K2Node_DynamicCast_AsPrimal_Dino_Character, TSoftClassPtr<class APrimalBuff> Temp_softclass_Variable, bool CallFunc_Less_DoubleDouble_ReturnValue, TSoftClassPtr<class APrimalBuff> K2Node_Select_Default, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C", "OverrideBuffToGiveVictimCharacter");

	Params::UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C_OverrideBuffToGiveVictimCharacter_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsPrimal_Dino_Character = K2Node_DynamicCast_AsPrimal_Dino_Character;
	Parms.Temp_softclass_Variable = Temp_softclass_Variable;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutVal != nullptr)
		*OutVal = Parms.OutVal;

	return Parms.ReturnValue;

}

}


