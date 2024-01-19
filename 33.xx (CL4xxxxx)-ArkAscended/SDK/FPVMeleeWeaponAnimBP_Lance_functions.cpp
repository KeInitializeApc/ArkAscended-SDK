#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C
// (None)

class UClass* UFPVMeleeWeaponAnimBP_Lance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVMeleeWeaponAnimBP_Lance_C");

	return Clss;
}


// FPVMeleeWeaponAnimBP_Lance_C FPVMeleeWeaponAnimBP_Lance.Default__FPVMeleeWeaponAnimBP_Lance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVMeleeWeaponAnimBP_Lance_C* UFPVMeleeWeaponAnimBP_Lance_C::GetDefaultObj()
{
	static class UFPVMeleeWeaponAnimBP_Lance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVMeleeWeaponAnimBP_Lance_C*>(UFPVMeleeWeaponAnimBP_Lance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)

struct FPoseLink UFPVMeleeWeaponAnimBP_Lance_C::AnimGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "AnimGraph");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UFPVMeleeWeaponAnimBP_Lance_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "BlueprintUpdateAnimation");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AWeapLance_C*                K2Node_DynamicCast_AsWeap_Lance                                  (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)

double UFPVMeleeWeaponAnimBP_Lance_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(int32 EntryPoint, class AShooterWeapon** K2Node_DynamicCast_AsShooter_Weapon, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue, struct FRotator* CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool CallFunc_IsBlockingWithShield_ReturnValue, class AWeapLance_C** K2Node_DynamicCast_AsWeap_Lance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsBlockingWithShield_ReturnValue = CallFunc_IsBlockingWithShield_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon = Parms.K2Node_DynamicCast_AsShooter_Weapon;

	if (CallFunc_GetPawnOwner_ReturnValue != nullptr)
		*CallFunc_GetPawnOwner_ReturnValue = Parms.CallFunc_GetPawnOwner_ReturnValue;

	if (CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation != nullptr)
		*CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation = std::move(Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation);

	if (CallFunc_GetBlockingShieldOffsets_ReturnValue != nullptr)
		*CallFunc_GetBlockingShieldOffsets_ReturnValue = Parms.CallFunc_GetBlockingShieldOffsets_ReturnValue;

	if (K2Node_DynamicCast_AsWeap_Lance != nullptr)
		*K2Node_DynamicCast_AsWeap_Lance = Parms.K2Node_DynamicCast_AsWeap_Lance;

	return Parms.ReturnValue;

}

}


