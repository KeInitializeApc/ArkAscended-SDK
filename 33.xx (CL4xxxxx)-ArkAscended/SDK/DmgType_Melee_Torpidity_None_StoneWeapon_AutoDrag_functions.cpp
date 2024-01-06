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
// class AActor*                      Victim                                                           (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             OutgoingDamage                                                   (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_OutgoingDamage_ImplicitCast                   (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::BPAdjustHarvestingDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float* ReturnValue, double* OutgoingDamage, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, double* K2Node_VariableSet_OutgoingDamage_ImplicitCast, float* K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C", "BPAdjustHarvestingDamage");

	Params::UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C_BPAdjustHarvestingDamage_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (OutgoingDamage != nullptr)
		*OutgoingDamage = Parms.OutgoingDamage;

	if (K2Node_VariableSet_OutgoingDamage_ImplicitCast != nullptr)
		*K2Node_VariableSet_OutgoingDamage_ImplicitCast = Parms.K2Node_VariableSet_OutgoingDamage_ImplicitCast;

	if (K2Node_FunctionResult_ReturnValue_ImplicitCast != nullptr)
		*K2Node_FunctionResult_ReturnValue_ImplicitCast = Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast;

	return Parms.ReturnValue;

}

}


