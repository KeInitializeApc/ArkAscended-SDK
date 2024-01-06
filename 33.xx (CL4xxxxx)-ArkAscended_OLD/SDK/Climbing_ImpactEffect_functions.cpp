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
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (BlueprintVisible, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

void AClimbing_ImpactEffect_C::DeactivateImpactEffect(struct FTimerHandle* CallFunc_K2_SetTimer_ReturnValue, float* CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DeactivateImpactEffect");

	Params::AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_SetTimer_ReturnValue != nullptr)
		*CallFunc_K2_SetTimer_ReturnValue = std::move(Parms.CallFunc_K2_SetTimer_ReturnValue);

	if (CallFunc_K2_SetTimer_Time_ImplicitCast != nullptr)
		*CallFunc_K2_SetTimer_Time_ImplicitCast = Parms.CallFunc_K2_SetTimer_Time_ImplicitCast;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)

bool AClimbing_ImpactEffect_C::ExecuteUbergraph_Climbing_ImpactEffect(int32* EntryPoint, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, class AShooterWeapon_Climb** K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* CallFunc_IsClimbingHanging_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, float* CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ExecuteUbergraph_Climbing_ImpactEffect");

	Params::AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_K2_GetActorLocation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorLocation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorLocation_ReturnValue);

	if (CallFunc_GetOwner_ReturnValue != nullptr)
		*CallFunc_GetOwner_ReturnValue = Parms.CallFunc_GetOwner_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	if (K2Node_DynamicCast_AsShooter_Weapon_Climb != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon_Climb = Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb;

	if (CallFunc_IsClimbingHanging_ReturnValue != nullptr)
		*CallFunc_IsClimbingHanging_ReturnValue = Parms.CallFunc_IsClimbingHanging_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast != nullptr)
		*CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;

	return Parms.ReturnValue;

}

}


