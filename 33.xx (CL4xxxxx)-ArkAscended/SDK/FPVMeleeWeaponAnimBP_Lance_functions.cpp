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
// struct FPoseLink                   AnimGraph                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UFPVMeleeWeaponAnimBP_Lance_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "AnimGraph");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UFPVMeleeWeaponAnimBP_Lance_C::BlueprintUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "BlueprintUpdateAnimation");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FPVMeleeWeaponAnimBP_Lance.FPVMeleeWeaponAnimBP_Lance_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AWeapLance_C*                K2Node_DynamicCast_AsWeap_Lance                                  (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)

double UFPVMeleeWeaponAnimBP_Lance_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_IsBlockingWithShield_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params Parms{};

	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation = CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsBlockingWithShield_ReturnValue != nullptr)
		*CallFunc_IsBlockingWithShield_ReturnValue = Parms.CallFunc_IsBlockingWithShield_ReturnValue;

	return Parms.ReturnValue;

}

}


