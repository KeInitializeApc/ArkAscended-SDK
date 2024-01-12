#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Climbing_ImpactEffect.Climbing_ImpactEffect_C
// (Actor)

class UClass* AClimbing_ImpactEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Climbing_ImpactEffect_C");

	return Clss;
}


// Climbing_ImpactEffect_C Climbing_ImpactEffect.Default__Climbing_ImpactEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AClimbing_ImpactEffect_C* AClimbing_ImpactEffect_C::GetDefaultObj()
{
	static class AClimbing_ImpactEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AClimbing_ImpactEffect_C*>(AClimbing_ImpactEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DestroyImpactEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AClimbing_ImpactEffect_C::DestroyImpactEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DestroyImpactEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.DeactivateImpactEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float AClimbing_ImpactEffect_C::DeactivateImpactEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DeactivateImpactEffect");

	Params::AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AClimbing_ImpactEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Climbing_ImpactEffect.Climbing_ImpactEffect_C.ExecuteUbergraph_Climbing_ImpactEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float AClimbing_ImpactEffect_C::ExecuteUbergraph_Climbing_ImpactEffect(class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon_Climb* K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ExecuteUbergraph_Climbing_ImpactEffect");

	Params::AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb = K2Node_DynamicCast_AsShooter_Weapon_Climb;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}

}


