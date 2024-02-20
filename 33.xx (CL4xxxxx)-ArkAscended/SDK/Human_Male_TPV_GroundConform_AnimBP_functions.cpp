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
// struct FPoseLink                   InPose                                                           (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FPoseLink                   AnimGraph                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

struct FPoseLink UHuman_Male_TPV_GroundConform_AnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "AnimGraph");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

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
// float                              DeltaTimeX                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UHuman_Male_TPV_GroundConform_AnimBP_C::BlueprintUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class USkeletalMeshComponent*      CallFunc_GetOwningComponent_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsBeingDragged          (ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsSwimming              (Edit, Net, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_IsFalling               (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Should_Mark_Has_Hit_Ground_once(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_UpdateGroundConformingVariables_Interpolate             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UHuman_Male_TPV_GroundConform_AnimBP_C::ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP(float K2Node_Event_DeltaTimeX, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_GroundConform_AnimBP_C", "ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP");

	Params::UHuman_Male_TPV_GroundConform_AnimBP_C_ExecuteUbergraph_Human_Male_TPV_GroundConform_AnimBP_Params Parms{};

	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


