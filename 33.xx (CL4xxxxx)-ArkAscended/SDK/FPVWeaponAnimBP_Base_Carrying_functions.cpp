#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C
// (None)

class UClass* UFPVWeaponAnimBP_Base_Carrying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVWeaponAnimBP_Base_Carrying_C");

	return Clss;
}


// FPVWeaponAnimBP_Base_Carrying_C FPVWeaponAnimBP_Base_Carrying.Default__FPVWeaponAnimBP_Base_Carrying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVWeaponAnimBP_Base_Carrying_C* UFPVWeaponAnimBP_Base_Carrying_C::GetDefaultObj()
{
	static class UFPVWeaponAnimBP_Base_Carrying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVWeaponAnimBP_Base_Carrying_C*>(UFPVWeaponAnimBP_Base_Carrying_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)

struct FPoseLink UFPVWeaponAnimBP_Base_Carrying_C::AnimGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "AnimGraph");

	Params::UFPVWeaponAnimBP_Base_Carrying_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_80BFA98C4CD37EBCF07EEC857A2229F5
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_80BFA98C4CD37EBCF07EEC857A2229F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_80BFA98C4CD37EBCF07EEC857A2229F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_62FC01B340CC6EB1F23009A48B4FD947
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_62FC01B340CC6EB1F23009A48B4FD947()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_62FC01B340CC6EB1F23009A48B4FD947");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_70A04D6E48386E0DFEA18CA4F032C0F0
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_70A04D6E48386E0DFEA18CA4F032C0F0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_70A04D6E48386E0DFEA18CA4F032C0F0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_9EA20B4E41810D6AE8627299ED89781A
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_9EA20B4E41810D6AE8627299ED89781A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_9EA20B4E41810D6AE8627299ED89781A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_8750F37449831C164C5B298D622C2A40
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_8750F37449831C164C5B298D622C2A40()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_8750F37449831C164C5B298D622C2A40");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_LayeredBoneBlend_62FFCB444B560C23A67C988C6EE3C053
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_LayeredBoneBlend_62FFCB444B560C23A67C988C6EE3C053()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_LayeredBoneBlend_62FFCB444B560C23A67C988C6EE3C053");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_1F40B06340BA65D36776A0B5CDC6532B
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_1F40B06340BA65D36776A0B5CDC6532B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_1F40B06340BA65D36776A0B5CDC6532B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_1477BF7841EF279D1003388FBB329ECC
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_1477BF7841EF279D1003388FBB329ECC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_1477BF7841EF279D1003388FBB329ECC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_2A2A338C4CE4B62D546F0FA3DDA360AC
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_2A2A338C4CE4B62D546F0FA3DDA360AC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_2A2A338C4CE4B62D546F0FA3DDA360AC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_21BF806641A634D5BB7F368E7FA38196
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_21BF806641A634D5BB7F368E7FA38196()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_21BF806641A634D5BB7F368E7FA38196");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_B4D5259D4046E3EFE9C84AB22BFE3BE1
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_B4D5259D4046E3EFE9C84AB22BFE3BE1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_B4D5259D4046E3EFE9C84AB22BFE3BE1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_A9BC0A3B4ACD86AAFD12629794C19556
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_A9BC0A3B4ACD86AAFD12629794C19556()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_A9BC0A3B4ACD86AAFD12629794C19556");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UFPVWeaponAnimBP_Base_Carrying_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "BlueprintUpdateAnimation");

	Params::UFPVWeaponAnimBP_Base_Carrying_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_46D3843C4621199ADE23558F65ACE18F
// (BlueprintEvent)
// Parameters:

void UFPVWeaponAnimBP_Base_Carrying_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_46D3843C4621199ADE23558F65ACE18F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_46D3843C4621199ADE23558F65ACE18F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C.ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Montage_IsActive_ReturnValue                            (Edit, ConstParm, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterWeapon*              K2Node_DynamicCast_AsShooter_Weapon                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GetBlockingShieldOffsets_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBlockingWithShield_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsNearTopOfLadder_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue                     (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSwimmingOnWaterSurface_ReturnValue                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UBaseHumanAnimBP_C*          K2Node_DynamicCast_AsBase_Human_Anim_BP                          (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue_1                   (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetCurrentAcceleration_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_VSize2D_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue                                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_19                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_24                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_25                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_20                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_5                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_26                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp01_ReturnValue_1                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (ConstParm, Net, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast_1                      (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast_1             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast_1                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_B_ImplicitCast                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DefaultTransformAlpha_ImplicitCast            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UFPVWeaponAnimBP_Base_Carrying_C::ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying(int32 EntryPoint, bool* CallFunc_Montage_IsActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, struct FVector* CallFunc_SelectVector_ReturnValue, class AShooterWeapon** K2Node_DynamicCast_AsShooter_Weapon, class AShooterCharacter** CallFunc_GetPawnOwner_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, struct FRotator* CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation, bool* CallFunc_GetBlockingShieldOffsets_ReturnValue, bool CallFunc_IsBlockingWithShield_ReturnValue, float* CallFunc_GetDefaultMovementSpeed_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool* CallFunc_IsSwimmingOnWaterSurface_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_2, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, float* CallFunc_GetDefaultMovementSpeed_ReturnValue_1, struct FVector* CallFunc_Conv_RotatorToVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, struct FVector* CallFunc_GetCurrentAcceleration_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, double* CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_4, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_FMin_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_13, double CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_14, double CallFunc_FClamp01_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_3, double* CallFunc_SelectFloat_ReturnValue_4, double CallFunc_FInterpTo_Constant_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_19, bool CallFunc_BooleanAND_ReturnValue_20, bool CallFunc_BooleanAND_ReturnValue_21, bool CallFunc_BooleanAND_ReturnValue_22, bool* CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_23, bool CallFunc_BooleanAND_ReturnValue_24, bool CallFunc_BooleanAND_ReturnValue_25, double* CallFunc_SelectFloat_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_26, double CallFunc_Add_DoubleFloat_ReturnValue, double CallFunc_FClamp01_ReturnValue_1, float CallFunc_Array_Set_Item_ImplicitCast, float* K2Node_StructMemberSet_Alpha_ImplicitCast, float* K2Node_StructMemberSet_Alpha_ImplicitCast_1, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, float CallFunc_Add_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVWeaponAnimBP_Base_Carrying_C", "ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying");

	Params::UFPVWeaponAnimBP_Base_Carrying_C_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsBlockingWithShield_ReturnValue = CallFunc_IsBlockingWithShield_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_5 = CallFunc_Greater_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FMin_ReturnValue = CallFunc_FMin_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_14 = CallFunc_BooleanAND_ReturnValue_14;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_15 = CallFunc_BooleanAND_ReturnValue_15;
	Parms.CallFunc_BooleanAND_ReturnValue_16 = CallFunc_BooleanAND_ReturnValue_16;
	Parms.CallFunc_BooleanAND_ReturnValue_17 = CallFunc_BooleanAND_ReturnValue_17;
	Parms.CallFunc_BooleanAND_ReturnValue_18 = CallFunc_BooleanAND_ReturnValue_18;
	Parms.CallFunc_BooleanAND_ReturnValue_19 = CallFunc_BooleanAND_ReturnValue_19;
	Parms.CallFunc_BooleanAND_ReturnValue_20 = CallFunc_BooleanAND_ReturnValue_20;
	Parms.CallFunc_BooleanAND_ReturnValue_21 = CallFunc_BooleanAND_ReturnValue_21;
	Parms.CallFunc_BooleanAND_ReturnValue_22 = CallFunc_BooleanAND_ReturnValue_22;
	Parms.CallFunc_BooleanAND_ReturnValue_23 = CallFunc_BooleanAND_ReturnValue_23;
	Parms.CallFunc_BooleanAND_ReturnValue_24 = CallFunc_BooleanAND_ReturnValue_24;
	Parms.CallFunc_BooleanAND_ReturnValue_25 = CallFunc_BooleanAND_ReturnValue_25;
	Parms.CallFunc_BooleanAND_ReturnValue_26 = CallFunc_BooleanAND_ReturnValue_26;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_FClamp01_ReturnValue_1 = CallFunc_FClamp01_ReturnValue_1;
	Parms.CallFunc_Array_Set_Item_ImplicitCast = CallFunc_Array_Set_Item_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Montage_IsActive_ReturnValue != nullptr)
		*CallFunc_Montage_IsActive_ReturnValue = Parms.CallFunc_Montage_IsActive_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectVector_ReturnValue != nullptr)
		*CallFunc_SelectVector_ReturnValue = std::move(Parms.CallFunc_SelectVector_ReturnValue);

	if (K2Node_DynamicCast_AsShooter_Weapon != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon = Parms.K2Node_DynamicCast_AsShooter_Weapon;

	if (CallFunc_GetPawnOwner_ReturnValue != nullptr)
		*CallFunc_GetPawnOwner_ReturnValue = Parms.CallFunc_GetPawnOwner_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation != nullptr)
		*CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation = std::move(Parms.CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation);

	if (CallFunc_GetBlockingShieldOffsets_ReturnValue != nullptr)
		*CallFunc_GetBlockingShieldOffsets_ReturnValue = Parms.CallFunc_GetBlockingShieldOffsets_ReturnValue;

	if (CallFunc_GetDefaultMovementSpeed_ReturnValue != nullptr)
		*CallFunc_GetDefaultMovementSpeed_ReturnValue = Parms.CallFunc_GetDefaultMovementSpeed_ReturnValue;

	if (CallFunc_IsSwimmingOnWaterSurface_ReturnValue != nullptr)
		*CallFunc_IsSwimmingOnWaterSurface_ReturnValue = Parms.CallFunc_IsSwimmingOnWaterSurface_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_2 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_2 = Parms.CallFunc_SelectFloat_ReturnValue_2;

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (CallFunc_GetDefaultMovementSpeed_ReturnValue_1 != nullptr)
		*CallFunc_GetDefaultMovementSpeed_ReturnValue_1 = Parms.CallFunc_GetDefaultMovementSpeed_ReturnValue_1;

	if (CallFunc_Conv_RotatorToVector_ReturnValue != nullptr)
		*CallFunc_Conv_RotatorToVector_ReturnValue = std::move(Parms.CallFunc_Conv_RotatorToVector_ReturnValue);

	if (CallFunc_GetCurrentAcceleration_ReturnValue != nullptr)
		*CallFunc_GetCurrentAcceleration_ReturnValue = std::move(Parms.CallFunc_GetCurrentAcceleration_ReturnValue);

	if (CallFunc_Dot_VectorVector_ReturnValue != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue = Parms.CallFunc_Dot_VectorVector_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_3 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_3 = Parms.CallFunc_SelectFloat_ReturnValue_3;

	if (CallFunc_SelectFloat_ReturnValue_4 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_4 = Parms.CallFunc_SelectFloat_ReturnValue_4;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_SelectFloat_ReturnValue_5 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_5 = Parms.CallFunc_SelectFloat_ReturnValue_5;

	if (K2Node_StructMemberSet_Alpha_ImplicitCast != nullptr)
		*K2Node_StructMemberSet_Alpha_ImplicitCast = Parms.K2Node_StructMemberSet_Alpha_ImplicitCast;

	if (K2Node_StructMemberSet_Alpha_ImplicitCast_1 != nullptr)
		*K2Node_StructMemberSet_Alpha_ImplicitCast_1 = Parms.K2Node_StructMemberSet_Alpha_ImplicitCast_1;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast_1 != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast_1 = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


