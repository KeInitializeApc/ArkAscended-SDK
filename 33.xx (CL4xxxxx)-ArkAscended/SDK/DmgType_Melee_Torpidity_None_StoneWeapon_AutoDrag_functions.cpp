#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C
// (None)

class UClass* UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C");

	return Clss;
}


// DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.Default__DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C* UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::GetDefaultObj()
{
	static class UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C*>(UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag.DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C.BPAdjustHarvestingDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             OutgoingDamage                                                   (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_OutgoingDamage_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::BPAdjustHarvestingDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float ReturnValue, double* OutgoingDamage, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, double* K2Node_VariableSet_OutgoingDamage_ImplicitCast, float* K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C", "BPAdjustHarvestingDamage");

	Params::UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C_BPAdjustHarvestingDamage_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

	if (OutgoingDamage != nullptr)
		*OutgoingDamage = Parms.OutgoingDamage;

	if (K2Node_VariableSet_OutgoingDamage_ImplicitCast != nullptr)
		*K2Node_VariableSet_OutgoingDamage_ImplicitCast = Parms.K2Node_VariableSet_OutgoingDamage_ImplicitCast;

	if (K2Node_FunctionResult_ReturnValue_ImplicitCast != nullptr)
		*K2Node_FunctionResult_ReturnValue_ImplicitCast = Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


