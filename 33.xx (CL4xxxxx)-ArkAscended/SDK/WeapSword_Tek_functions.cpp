#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WeapSword_Tek.WeapSword_Tek_C
// (Actor)

class UClass* AWeapSword_Tek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WeapSword_Tek_C");

	return Clss;
}


// WeapSword_Tek_C WeapSword_Tek.Default__WeapSword_Tek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWeapSword_Tek_C* AWeapSword_Tek_C::GetDefaultObj()
{
	static class AWeapSword_Tek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWeapSword_Tek_C*>(AWeapSword_Tek_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WeapSword_Tek.WeapSword_Tek_C.DoAppliedDamageToTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageTarget                                                     (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// double                             ElementCostMultiplier                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              DamageIn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExtraDamage                                                     (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_AppliedDamageToTarget_bExtraDamage                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool AWeapSword_Tek_C::DoAppliedDamageToTarget(bool* CallFunc_AppliedDamageToTarget_bExtraDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "DoAppliedDamageToTarget");

	Params::AWeapSword_Tek_C_DoAppliedDamageToTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_AppliedDamageToTarget_bExtraDamage != nullptr)
		*CallFunc_AppliedDamageToTarget_bExtraDamage = Parms.CallFunc_AppliedDamageToTarget_bExtraDamage;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.OnRep_HideWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool AWeapSword_Tek_C::OnRep_HideWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "OnRep_HideWeapon");

	Params::AWeapSword_Tek_C_OnRep_HideWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.AppliedDamageToTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageTarget                                                     (Edit, ConstParm, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// double                             ElementCostMultiplier                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              DamageIn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               bExtraDamage                                                     (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bDoExtraDamage                                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             AmmoCost                                                         (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class AShooterGameState*           K2Node_DynamicCast_AsShooter_Game_State                          (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              CallFunc_FCeil_ReturnValue                                       (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

bool AWeapSword_Tek_C::AppliedDamageToTarget(bool* bDoExtraDamage, double* AmmoCost, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, double CallFunc_Array_Get_Item, class AShooterGameState** K2Node_DynamicCast_AsShooter_Game_State, bool* K2Node_DynamicCast_bSuccess_2, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32* CallFunc_FCeil_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "AppliedDamageToTarget");

	Params::AWeapSword_Tek_C_AppliedDamageToTarget_Params Parms{};

	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bDoExtraDamage != nullptr)
		*bDoExtraDamage = Parms.bDoExtraDamage;

	if (AmmoCost != nullptr)
		*AmmoCost = Parms.AmmoCost;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsShooter_Game_State != nullptr)
		*K2Node_DynamicCast_AsShooter_Game_State = Parms.K2Node_DynamicCast_AsShooter_Game_State;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_FCeil_ReturnValue != nullptr)
		*CallFunc_FCeil_ReturnValue = Parms.CallFunc_FCeil_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.BPWeaponDealDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Impact                                                           (ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     ShootDir                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              DamageAmount                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class UClass*                      DamageType                                                       (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig)
// float                              Impulse                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              OutDamage                                                        (BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AppliedDamageToTarget_bExtraDamage                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_FFloor_ReturnValue                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

int32 AWeapSword_Tek_C::BPWeaponDealDamage(int32* DamageAmount, float* Impulse, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* CallFunc_AppliedDamageToTarget_bExtraDamage, double* CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "BPWeaponDealDamage");

	Params::AWeapSword_Tek_C_BPWeaponDealDamage_Params Parms{};

	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageAmount != nullptr)
		*DamageAmount = Parms.DamageAmount;

	if (Impulse != nullptr)
		*Impulse = Parms.Impulse;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (CallFunc_AppliedDamageToTarget_bExtraDamage != nullptr)
		*CallFunc_AppliedDamageToTarget_bExtraDamage = Parms.CallFunc_AppliedDamageToTarget_bExtraDamage;

	if (CallFunc_Multiply_IntFloat_ReturnValue != nullptr)
		*CallFunc_Multiply_IntFloat_ReturnValue = Parms.CallFunc_Multiply_IntFloat_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.BPStartEquippedNotify
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue                           (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APrimalBuff*                 CallFunc_StaticAddBuff_ReturnValue_1                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValidClass_ReturnValue                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UClass*                      CallFunc_ClassAssetResolve_ReturnValue_1                         (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool AWeapSword_Tek_C::BPStartEquippedNotify(class AActor* CallFunc_GetOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "BPStartEquippedNotify");

	Params::AWeapSword_Tek_C_BPStartEquippedNotify_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_ClassDynamicCast_AsPrimal_Buff != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Buff = Parms.K2Node_ClassDynamicCast_AsPrimal_Buff;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.StartUnequipEvent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UClass*                      CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UClass*                      K2Node_ClassDynamicCast_AsPrimal_Buff                            (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

bool AWeapSword_Tek_C::StartUnequipEvent(class AActor* CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass** K2Node_ClassDynamicCast_AsPrimal_Buff)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "StartUnequipEvent");

	Params::AWeapSword_Tek_C_StartUnequipEvent_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_ClassDynamicCast_AsPrimal_Buff != nullptr)
		*K2Node_ClassDynamicCast_AsPrimal_Buff = Parms.K2Node_ClassDynamicCast_AsPrimal_Buff;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.ReceiveTick
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               bDoActive                                                        (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             Temp_real_Variable                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsActive_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1                 (Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_2                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

float AWeapSword_Tek_C::ReceiveTick(float* DeltaSeconds, bool* bDoActive, bool Temp_bool_Variable, double K2Node_Select_Default, bool CallFunc_IsActive_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue_1, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "ReceiveTick");

	Params::AWeapSword_Tek_C_ReceiveTick_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

	if (bDoActive != nullptr)
		*bDoActive = Parms.bDoActive;

	if (CallFunc_GetMaterial_ReturnValue != nullptr)
		*CallFunc_GetMaterial_ReturnValue = Parms.CallFunc_GetMaterial_ReturnValue;

	if (CallFunc_GetMaterial_ReturnValue_1 != nullptr)
		*CallFunc_GetMaterial_ReturnValue_1 = Parms.CallFunc_GetMaterial_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.BPHandleMeleeAttack
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalBuff*                 CallFunc_GetBuff_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class ABuff_TekArmor_Sword_C*      K2Node_DynamicCast_AsBuff_Tek_Armor_Sword                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsServer_ReturnValue                                    (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyOwned_ReturnValue                              (ConstParm, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)

bool AWeapSword_Tek_C::BPHandleMeleeAttack(bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsLocallyOwned_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "BPHandleMeleeAttack");

	Params::AWeapSword_Tek_C_BPHandleMeleeAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsLocallyOwned_ReturnValue != nullptr)
		*CallFunc_IsLocallyOwned_ReturnValue = Parms.CallFunc_IsLocallyOwned_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.BPAppliedPrimalItemToWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FLinearColor                CallFunc_GetItemCustomColor_outColor                             (BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetItemCustomColor_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_X_ImplicitCast                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Y_ImplicitCast                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)

bool AWeapSword_Tek_C::BPAppliedPrimalItemToWeapon(const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "BPAppliedPrimalItemToWeapon");

	Params::AWeapSword_Tek_C_BPAppliedPrimalItemToWeapon_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_X_ImplicitCast = CallFunc_MakeVector_X_ImplicitCast;
	Parms.CallFunc_MakeVector_Y_ImplicitCast = CallFunc_MakeVector_Y_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult                  (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_1                (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_2                (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_K2_SetRelativeTransform_SweepHitResult_3                (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)

bool AWeapSword_Tek_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "UserConstructionScript");

	Params::AWeapSword_Tek_C_UserConstructionScript_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WeapSword_Tek.WeapSword_Tek_C.PlayAttackSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapSword_Tek_C::PlayAttackSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "PlayAttackSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapSword_Tek.WeapSword_Tek_C.NetDoPlayMeleeAttackSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AWeapSword_Tek_C::NetDoPlayMeleeAttackSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "NetDoPlayMeleeAttackSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WeapSword_Tek.WeapSword_Tek_C.ExecuteUbergraph_WeapSword_Tek
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyOwned_ReturnValue                              (ConstParm, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// class USkeletalMeshComponent*      CallFunc_GetWeaponMesh_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class UAudioComponent* AWeapSword_Tek_C::ExecuteUbergraph_WeapSword_Tek(int32* EntryPoint, bool* CallFunc_IsLocallyOwned_ReturnValue, class USkeletalMeshComponent** CallFunc_GetWeaponMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WeapSword_Tek_C", "ExecuteUbergraph_WeapSword_Tek");

	Params::AWeapSword_Tek_C_ExecuteUbergraph_WeapSword_Tek_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_IsLocallyOwned_ReturnValue != nullptr)
		*CallFunc_IsLocallyOwned_ReturnValue = Parms.CallFunc_IsLocallyOwned_ReturnValue;

	if (CallFunc_GetWeaponMesh_ReturnValue != nullptr)
		*CallFunc_GetWeaponMesh_ReturnValue = Parms.CallFunc_GetWeaponMesh_ReturnValue;

	return Parms.ReturnValue;

}

}


