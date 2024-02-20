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
// class AActor*                      Victim                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// float                              IncomingDamage                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FDamageEvent                TheDamageEvent                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, Net, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class AActor*                      DamageCauser                                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_VectorFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UDmgType_Melee_StonePick_LifeSupport_C::BPAdjustDamage(float* IncomingDamage, struct FDamageEvent* TheDamageEvent, float ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, struct FRotator* CallFunc_FindLookAtRotation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FRotator* CallFunc_MakeRotator_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue, struct FVector* CallFunc_Multiply_VectorFloat_ReturnValue, double* CallFunc_Multiply_VectorFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DmgType_Melee_StonePick_LifeSupport_C", "BPAdjustDamage");

	Params::UDmgType_Melee_StonePick_LifeSupport_C_BPAdjustDamage_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (IncomingDamage != nullptr)
		*IncomingDamage = Parms.IncomingDamage;

	if (TheDamageEvent != nullptr)
		*TheDamageEvent = std::move(Parms.TheDamageEvent);

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


