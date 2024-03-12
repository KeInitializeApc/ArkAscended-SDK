#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C
// (None)

class UClass* UFPVMeleeWeaponAnimBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVMeleeWeaponAnimBP_Base_C");

	return Clss;
}


// FPVMeleeWeaponAnimBP_Base_C FPVMeleeWeaponAnimBP_Base.Default__FPVMeleeWeaponAnimBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVMeleeWeaponAnimBP_Base_C* UFPVMeleeWeaponAnimBP_Base_C::GetDefaultObj()
{
	static class UFPVMeleeWeaponAnimBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVMeleeWeaponAnimBP_Base_C*>(UFPVMeleeWeaponAnimBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void UFPVMeleeWeaponAnimBP_Base_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Base_C", "AnimGraph");

	Params::UFPVMeleeWeaponAnimBP_Base_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UFPVMeleeWeaponAnimBP_Base_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Base_C", "BlueprintUpdateAnimation");

	Params::UFPVMeleeWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTimeX != nullptr)
		*DeltaTimeX = Parms.DeltaTimeX;

}


// Function FPVMeleeWeaponAnimBP_Base.FPVMeleeWeaponAnimBP_Base_C.ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintReadOnly, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (ConstParm, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(Edit, BlueprintVisible, Net, EditFixedSize, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (BlueprintVisible, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsRunning_ReturnValue                                   (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)

bool UFPVMeleeWeaponAnimBP_Base_C::ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, bool* K2Node_DynamicCast_bSuccess, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool* CallFunc_IsBlockingWithShield_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, float* K2Node_Event_DeltaTimeX, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_2, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVMeleeWeaponAnimBP_Base_C", "ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base");

	Params::UFPVMeleeWeaponAnimBP_Base_C_ExecuteUbergraph_FPVMeleeWeaponAnimBP_Base_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation = CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;
	Parms.CallFunc_IsUsingShield_ReturnValue = CallFunc_IsUsingShield_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_2 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_3 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetBlockingShieldOffsets_ReturnValue != nullptr)
		*CallFunc_GetBlockingShieldOffsets_ReturnValue = Parms.CallFunc_GetBlockingShieldOffsets_ReturnValue;

	if (CallFunc_IsBlockingWithShield_ReturnValue != nullptr)
		*CallFunc_IsBlockingWithShield_ReturnValue = Parms.CallFunc_IsBlockingWithShield_ReturnValue;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (K2Node_Event_DeltaTimeX != nullptr)
		*K2Node_Event_DeltaTimeX = Parms.K2Node_Event_DeltaTimeX;

	return Parms.ReturnValue;

}

}


