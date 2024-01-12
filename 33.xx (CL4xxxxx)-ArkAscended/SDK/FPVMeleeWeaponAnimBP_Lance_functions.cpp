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
// float                              DeltaTimeX                                                       (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(Edit, Net, OutParm, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class AWeapLance_C*                K2Node_DynamicCast_AsWeap_Lance                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)

double UFPVMeleeWeaponAnimBP_Lance_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance(float K2Node_Event_DeltaTimeX, class AActor** CallFunc_GetOwningActor_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, struct FVector* CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_IsBlockingWithShield_ReturnValue, class AWeapLance_C** K2Node_DynamicCast_AsWeap_Lance, bool* K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Lance_C", "ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance");

	Params::UFPVMeleeWeaponAnimBP_Lance_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Lance_Params Parms{};

	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningActor_ReturnValue != nullptr)
		*CallFunc_GetOwningActor_ReturnValue = Parms.CallFunc_GetOwningActor_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation != nullptr)
		*CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation = std::move(Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation);

	if (CallFunc_IsBlockingWithShield_ReturnValue != nullptr)
		*CallFunc_IsBlockingWithShield_ReturnValue = Parms.CallFunc_IsBlockingWithShield_ReturnValue;

	if (K2Node_DynamicCast_AsWeap_Lance != nullptr)
		*K2Node_DynamicCast_AsWeap_Lance = Parms.K2Node_DynamicCast_AsWeap_Lance;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	return Parms.ReturnValue;

}

}


