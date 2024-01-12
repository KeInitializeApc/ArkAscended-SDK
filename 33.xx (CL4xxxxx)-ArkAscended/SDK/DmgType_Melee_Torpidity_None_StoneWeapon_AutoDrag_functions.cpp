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
// class AActor*                      Victim                                                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ConstParm, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             OutgoingDamage                                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_OutgoingDamage_ImplicitCast                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)

float UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C::BPAdjustHarvestingDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, double OutgoingDamage, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, double K2Node_VariableSet_OutgoingDamage_ImplicitCast, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C", "BPAdjustHarvestingDamage");

	Params::UDmgType_Melee_Torpidity_None_StoneWeapon_AutoDrag_C_BPAdjustHarvestingDamage_Params Parms{};

	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.OutgoingDamage = OutgoingDamage;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_VariableSet_OutgoingDamage_ImplicitCast = K2Node_VariableSet_OutgoingDamage_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Victim != nullptr)
		*Victim = Parms.Victim;

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


