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
// class APrimalCharacter*            Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UClass*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UClass*                      OutVal                                                           (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class APrimalDinoCharacter*        K2Node_DynamicCast_AsPrimal_Dino_Character                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TSoftClassPtr<class APrimalBuff>   Temp_softclass_Variable                                          (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TSoftClassPtr<class APrimalBuff>   K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C::OverrideBuffToGiveVictimCharacter(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class UClass* ReturnValue, class UClass** OutVal, bool* Temp_bool_Variable, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, TSoftClassPtr<class APrimalBuff>* K2Node_Select_Default, class UClass* CallFunc_ClassAssetResolve_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C", "OverrideBuffToGiveVictimCharacter");

	Params::UDmgType_Melee_Torpidity_Low_StoneWeapon_Fire_C_OverrideBuffToGiveVictimCharacter_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_ClassAssetResolve_ReturnValue = CallFunc_ClassAssetResolve_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

	if (OutVal != nullptr)
		*OutVal = Parms.OutVal;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_DynamicCast_AsPrimal_Dino_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Dino_Character = Parms.K2Node_DynamicCast_AsPrimal_Dino_Character;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}

}


