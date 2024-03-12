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
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

void AClimbing_ImpactEffect_C::DeactivateImpactEffect(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "DeactivateImpactEffect");

	Params::AClimbing_ImpactEffect_C_DeactivateImpactEffect_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = CallFunc_K2_SetTimer_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast    (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)

void AClimbing_ImpactEffect_C::ExecuteUbergraph_Climbing_ImpactEffect(int32* EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class AShooterWeapon_Climb** K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsClimbingHanging_ReturnValue, double CallFunc_SelectFloat_ReturnValue, float CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Climbing_ImpactEffect_C", "ExecuteUbergraph_Climbing_ImpactEffect");

	Params::AClimbing_ImpactEffect_C_ExecuteUbergraph_Climbing_ImpactEffect_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_IsClimbingHanging_ReturnValue = CallFunc_IsClimbingHanging_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast = CallFunc_SetVolumeMultiplier_NewVolumeMultiplier_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsShooter_Weapon_Climb != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon_Climb = Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

}

}


