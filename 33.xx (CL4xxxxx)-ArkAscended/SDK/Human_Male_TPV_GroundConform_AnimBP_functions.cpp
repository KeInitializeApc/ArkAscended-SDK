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
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (Edit, BlueprintVisible, Net, Parm, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsBeingDragged          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsSwimming              (BlueprintVisible, ExportObject, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsFalling               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once(Edit, ConstParm, BlueprintVisible, Net, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Interpolate             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

float UHuman_Male_TPV_GroundConform_AnimBP_C::ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_UpdateGroundConformingVariables_IsBeingDragged, bool* CallFunc_UpdateGroundConformingVariables_IsSwimming, bool CallFunc_UpdateGroundConformingVariables_IsFalling, bool* CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once, bool CallFunc_UpdateGroundConformingVariables_Interpolate, bool CallFunc_Greater_DoubleDouble_ReturnValue, float* K2Node_StructMemberSet_Alpha_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningComponent_ReturnValue = CallFunc_GetOwningComponent_ReturnValue;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_UpdateGroundConformingVariables_IsBeingDragged = CallFunc_UpdateGroundConformingVariables_IsBeingDragged;
	Parms.CallFunc_UpdateGroundConformingVariables_IsFalling = CallFunc_UpdateGroundConformingVariables_IsFalling;
	Parms.CallFunc_UpdateGroundConformingVariables_Interpolate = CallFunc_UpdateGroundConformingVariables_Interpolate;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_UpdateGroundConformingVariables_IsSwimming != nullptr)
		*CallFunc_UpdateGroundConformingVariables_IsSwimming = Parms.CallFunc_UpdateGroundConformingVariables_IsSwimming;

	if (CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once != nullptr)
		*CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once = Parms.CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once;

	if (K2Node_StructMemberSet_Alpha_ImplicitCast != nullptr)
		*K2Node_StructMemberSet_Alpha_ImplicitCast = Parms.K2Node_StructMemberSet_Alpha_ImplicitCast;

	return Parms.ReturnValue;

}

}


