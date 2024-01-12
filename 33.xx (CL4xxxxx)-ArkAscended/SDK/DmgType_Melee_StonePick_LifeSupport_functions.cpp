#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_StonePick_LifeSupport.DmgType_Melee_StonePick_LifeSupport_C
// (None)

class UClass* UDmgType_Melee_StonePick_LifeSupport_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_StonePick_LifeSupport_C");

	return Clss;
}


// DmgType_Melee_StonePick_LifeSupport_C DmgType_Melee_StonePick_LifeSupport.Default__DmgType_Melee_StonePick_LifeSupport_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_StonePick_LifeSupport_C* UDmgType_Melee_StonePick_LifeSupport_C::GetDefaultObj()
{
	static class UDmgType_Melee_StonePick_LifeSupport_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_StonePick_LifeSupport_C*>(UDmgType_Melee_StonePick_LifeSupport_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DmgType_Melee_StonePick_LifeSupport.DmgType_Melee_StonePick_LifeSupport_C.BPAdjustDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Victim                                                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (ConstParm, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (Edit, ConstParm, Parm, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (Edit, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UDmgType_Melee_StonePick_LifeSupport_C::BPAdjustDamage(class AActor** Victim, float* IncomingDamage, struct FDamageEvent* TheDamageEvent, class AController* EventInstigator, class AActor* DamageCauser, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, struct FRotator* CallFunc_FindLookAtRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_StonePick_LifeSupport_C", "BPAdjustDamage");

	Params::UDmgType_Melee_StonePick_LifeSupport_C_BPAdjustDamage_Params Parms{};

	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (Victim != nullptr)
		*Victim = Parms.Victim;

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_FindLookAtRotation_ReturnValue != nullptr)
		*CallFunc_FindLookAtRotation_ReturnValue = std::move(Parms.CallFunc_FindLookAtRotation_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_VectorFloat_ReturnValue = std::move(Parms.CallFunc_Multiply_VectorFloat_ReturnValue);

	if (CallFunc_Multiply_VectorFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_VectorFloat_B_ImplicitCast = Parms.CallFunc_Multiply_VectorFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


