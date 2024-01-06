#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C
// (None)

class UClass* UHuman_Male_TPV_GroundConform_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Human_Male_TPV_GroundConform_AnimBP_C");

	return Clss;
}


// Human_Male_TPV_GroundConform_AnimBP_C Human_Male_TPV_GroundConform_AnimBP.Default__Human_Male_TPV_GroundConform_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuman_Male_TPV_GroundConform_AnimBP_C* UHuman_Male_TPV_GroundConform_AnimBP_C::GetDefaultObj()
{
	static class UHuman_Male_TPV_GroundConform_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuman_Male_TPV_GroundConform_AnimBP_C*>(UHuman_Male_TPV_GroundConform_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)
// struct FPoseLink                   AnimGraph                                                        (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)

struct FPoseLink UHuman_Male_TPV_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& InPose)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "AnimGraph");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2
// (BlueprintEvent)
// Parameters:

void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ModifyBone_8E75287944EE2693422B10BE94404CD2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E
// (BlueprintEvent)
// Parameters:

void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_ControlRig_B4E411E4465178B3E5F3448ECAF8EF2E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A
// (BlueprintEvent)
// Parameters:

void UHuman_Male_TPV_GroundConform_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_AnimGraphNode_TwoWayBlend_1AD97A9B42CBF11674B9B9AA5EDD9F9A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (ConstParm, ExportObject, EditConst, InstancedReference, SubobjectReference)

void UHuman_Male_TPV_GroundConform_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UHuman_Male_TPV_GroundConform_AnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Human_Male_TPV_GroundConform_AnimBP.Human_Male_TPV_GroundConform_AnimBP_C.ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (ConstParm, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsBeingDragged          (BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsSwimming              (Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsFalling               (Edit, BlueprintVisible, ExportObject, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once(ConstParm, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Interpolate             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UHuman_Male_TPV_GroundConform_AnimBP_C::ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(int32* EntryPoint, float CallFunc_GetCurveValue_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, float K2Node_Event_DeltaTimeX, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_UpdateGroundConformingVariables_IsBeingDragged, bool CallFunc_UpdateGroundConformingVariables_IsSwimming, bool CallFunc_UpdateGroundConformingVariables_IsFalling, bool CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once, bool CallFunc_UpdateGroundConformingVariables_Interpolate, float CallFunc_GetCurveValue_ReturnValue_1, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params Parms{};

	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_UpdateGroundConformingVariables_IsBeingDragged = CallFunc_UpdateGroundConformingVariables_IsBeingDragged;
	Parms.CallFunc_UpdateGroundConformingVariables_IsSwimming = CallFunc_UpdateGroundConformingVariables_IsSwimming;
	Parms.CallFunc_UpdateGroundConformingVariables_IsFalling = CallFunc_UpdateGroundConformingVariables_IsFalling;
	Parms.CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once = CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once;
	Parms.CallFunc_UpdateGroundConformingVariables_Interpolate = CallFunc_UpdateGroundConformingVariables_Interpolate;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


