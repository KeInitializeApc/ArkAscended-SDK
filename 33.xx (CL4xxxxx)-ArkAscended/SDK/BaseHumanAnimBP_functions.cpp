#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BaseHumanAnimBP.BaseHumanAnimBP_C
// (None)

class UClass* UBaseHumanAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseHumanAnimBP_C");

	return Clss;
}


// BaseHumanAnimBP_C BaseHumanAnimBP.Default__BaseHumanAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseHumanAnimBP_C* UBaseHumanAnimBP_C::GetDefaultObj()
{
	static class UBaseHumanAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseHumanAnimBP_C*>(UBaseHumanAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UBaseHumanAnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "AnimGraph");

	Params::UBaseHumanAnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue          (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetBoneModifierValue_ReturnValue                        (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_1                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_2                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_3                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_4                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_5                      (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (Edit, BlueprintVisible, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ObjectIsA_ReturnValue_1                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

float UBaseHumanAnimBP_C::Update_Character_Creator_Values(float* CallFunc_GetBoneModifierValue_ReturnValue, float* CallFunc_GetBoneModifierValue_ReturnValue_1, float* CallFunc_GetBoneModifierValue_ReturnValue_2, float* CallFunc_GetBoneModifierValue_ReturnValue_3, float* CallFunc_GetBoneModifierValue_ReturnValue_4, float* CallFunc_GetBoneModifierValue_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Character Creator Values");

	Params::UBaseHumanAnimBP_C_Update_Character_Creator_Values_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetBoneModifierValue_ReturnValue != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue = Parms.CallFunc_GetBoneModifierValue_ReturnValue;

	if (CallFunc_GetBoneModifierValue_ReturnValue_1 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_1 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_1;

	if (CallFunc_GetBoneModifierValue_ReturnValue_2 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_2 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_2;

	if (CallFunc_GetBoneModifierValue_ReturnValue_3 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_3 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_3;

	if (CallFunc_GetBoneModifierValue_ReturnValue_4 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_4 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_4;

	if (CallFunc_GetBoneModifierValue_ReturnValue_5 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_5 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_5;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Debug Leaning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::Debug_Leaning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Debug Leaning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.InterpLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             InterpSpeed                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             Time                                                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Speed                                                            (ConstParm, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_6                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_7                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_8                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_9                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_10                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_11                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_12                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_13                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_14                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_15                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_16                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_17                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_18                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_19                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_20                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_21                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_22                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_23                                (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_3                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_4                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_5                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_6                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_7                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_8                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_9                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_10                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_11                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast              (Edit, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast          (ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHead_ImplicitCast               (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast              (Edit, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast           (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast            (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideSpine_ImplicitCast              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast   (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::InterpLayeringValues(float* K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast, float* K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast, float K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideHead_ImplicitCast, float K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast, float K2Node_VariableSet_InterpOverrideSpine_ImplicitCast, float K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "InterpLayeringValues");

	Params::UBaseHumanAnimBP_C_InterpLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideSpine_ImplicitCast = K2Node_VariableSet_InterpOverrideSpine_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideHead_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideHead_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideHead_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Out                                                              (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Map_Find_Value                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, SubobjectReference)

float UBaseHumanAnimBP_C::Get_IKWorld_Interp_Speed(double Out, double* CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Get IKWorld Interp Speed");

	Params::UBaseHumanAnimBP_C_Get_IKWorld_Interp_Speed_Params Parms{};

	Parms.Out = Out;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs                                 (Edit, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_1                               (Edit, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_2                               (Edit, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue                       (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue_1                             (BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue_1                    (ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             K2Node_VariableSet_TraceDistanceFactorBelow_ImplicitCast         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

double UBaseHumanAnimBP_C::GroundIK(double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, struct FVector* CallFunc_GetFPVShadowMeshOffset_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_2, bool* CallFunc_IsFirstPerson_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_BPIsConscious_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_BPIsConscious_ReturnValue_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue, struct FVector* CallFunc_GetFPVShadowMeshOffset_ReturnValue_1, bool* CallFunc_NotEqual_BoolBool_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GroundIK");

	Params::UBaseHumanAnimBP_C_GroundIK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (CallFunc_GetFPVShadowMeshOffset_ReturnValue != nullptr)
		*CallFunc_GetFPVShadowMeshOffset_ReturnValue = std::move(Parms.CallFunc_GetFPVShadowMeshOffset_ReturnValue);

	if (CallFunc_MapRangeClamped_ReturnValue_2 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_2 = Parms.CallFunc_MapRangeClamped_ReturnValue_2;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BPIsConscious_ReturnValue != nullptr)
		*CallFunc_BPIsConscious_ReturnValue = Parms.CallFunc_BPIsConscious_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_BPIsConscious_ReturnValue_1 != nullptr)
		*CallFunc_BPIsConscious_ReturnValue_1 = Parms.CallFunc_BPIsConscious_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_GetFPVShadowMeshOffset_ReturnValue_1 != nullptr)
		*CallFunc_GetFPVShadowMeshOffset_ReturnValue_1 = std::move(Parms.CallFunc_GetFPVShadowMeshOffset_ReturnValue_1);

	if (CallFunc_NotEqual_BoolBool_ReturnValue != nullptr)
		*CallFunc_NotEqual_BoolBool_ReturnValue = Parms.CallFunc_NotEqual_BoolBool_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_5                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_6                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_7                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_8                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_9                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_10                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_11                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_12                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_13                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_14                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_15                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_16                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_17                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_18                            (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_4                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_5                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_6                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_7                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_8                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_9                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_10                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_11                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_12                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_13                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_14                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)

double UBaseHumanAnimBP_C::UpdatePoseLayering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdatePoseLayering");

	Params::UBaseHumanAnimBP_C_UpdatePoseLayering_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue                       (ExportObject, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (BlueprintVisible, ExportObject, ReturnParm, Transient, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue_1                     (ExportObject, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

double UBaseHumanAnimBP_C::GetLeanAmount(struct FVector2D* Output, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue, double* CallFunc_FClamp01_ReturnValue, struct FVector* CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue_1, double* CallFunc_Abs_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetLeanAmount");

	Params::UBaseHumanAnimBP_C_GetLeanAmount_Params Parms{};

	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue = CallFunc_Conv_DoubleToVector2D_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue_1 = CallFunc_Conv_DoubleToVector2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	if (CallFunc_FClamp01_ReturnValue != nullptr)
		*CallFunc_FClamp01_ReturnValue = Parms.CallFunc_FClamp01_ReturnValue;

	if (CallFunc_LessLess_VectorRotator_ReturnValue != nullptr)
		*CallFunc_LessLess_VectorRotator_ReturnValue = std::move(Parms.CallFunc_LessLess_VectorRotator_ReturnValue);

	if (CallFunc_Abs_ReturnValue != nullptr)
		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.IsPoseLayeringSlotActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::IsPoseLayeringSlotActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "IsPoseLayeringSlotActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim_Layering
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateMoveAnim_Layering(struct FAnimUpdateContext* Context, const struct FAnimNodeReference& Node, enum class E_CardinalDirection4* Temp_byte_Variable, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, enum class E_CardinalDirection4* Temp_byte_Variable_1, class UAnimSequence** K2Node_Select_Default, class UAnimSequence** K2Node_Select_Default_1, class UAnimSequence** K2Node_Select_Default_2, class UAnimSequence** K2Node_Select_Default_3, struct FSequenceEvaluatorReference* CallFunc_SetSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim_Layering");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params Parms{};

	Parms.Node = Node;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	if (CallFunc_SetSequence_ReturnValue != nullptr)
		*CallFunc_SetSequence_ReturnValue = std::move(Parms.CallFunc_SetSequence_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (Edit, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (Edit, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (ConstParm, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UBaseHumanAnimBP_C::UpdateLayeringValues(double K2Node_VariableSet_Layering_L_Hand_ImplicitCast, double K2Node_VariableSet_Layering_Spine_ImplicitCast, double K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_C_UpdateLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_Layering_L_Hand_ImplicitCast = K2Node_VariableSet_Layering_L_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast = K2Node_VariableSet_Layering_Spine_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast = K2Node_VariableSet_Layering_L_Arm_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast = K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1                    (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2                    (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3                    (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4                    (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::UpdateWeaponIKNonThreadSafe(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIKNonThreadSafe");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_VariableSet_RightHandIKAlpha_ImplicitCast                 (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateWeaponIK(double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIK");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_PredictGroundMovementStopLocation_ReturnValue           (Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXY_ReturnValue                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

double UBaseHumanAnimBP_C::GetPredictedStopDistance(double ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetPredictedStopDistance");

	Params::UBaseHumanAnimBP_C_GetPredictedStopDistance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBaseHumanAnimBP_C::ShouldDistanceMatchStop(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ShouldDistanceMatchStop");

	Params::UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// double                             DistanceToMatch                                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPredictedStopDistance_ReturnValue                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast     (Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBaseHumanAnimBP_C::UpdateStopAnim(struct FAnimUpdateContext* Context, const struct FAnimNodeReference& Node, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_AdvanceTime_ReturnValue, double* CallFunc_GetPredictedStopDistance_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, float* CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateStopAnim");

	Params::UBaseHumanAnimBP_C_UpdateStopAnim_Params Parms{};

	Parms.Node = Node;
	Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue = CallFunc_ShouldDistanceMatchStop_ReturnValue;
	Parms.CallFunc_DistanceMatchToTarget_ReturnValue = CallFunc_DistanceMatchToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_AdvanceTime_ReturnValue != nullptr)
		*CallFunc_AdvanceTime_ReturnValue = std::move(Parms.CallFunc_AdvanceTime_ReturnValue);

	if (CallFunc_GetPredictedStopDistance_ReturnValue != nullptr)
		*CallFunc_GetPredictedStopDistance_ReturnValue = Parms.CallFunc_GetPredictedStopDistance_ReturnValue;

	if (CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast != nullptr)
		*CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast = Parms.CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UBaseHumanAnimBP_C::SetUpStopAnim(struct FAnimUpdateContext* Context, const struct FAnimNodeReference& Node, enum class E_CardinalDirection4* Temp_byte_Variable, bool CallFunc_ShouldDistanceMatchStop_ReturnValue, const struct FSequenceEvaluatorReference& CallFunc_DistanceMatchToTarget_ReturnValue, class UAnimSequence** K2Node_Select_Default, struct FSequenceEvaluatorReference* CallFunc_SetSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SetUpStopAnim");

	Params::UBaseHumanAnimBP_C_SetUpStopAnim_Params Parms{};

	Parms.Node = Node;
	Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue = CallFunc_ShouldDistanceMatchStop_ReturnValue;
	Parms.CallFunc_DistanceMatchToTarget_ReturnValue = CallFunc_DistanceMatchToTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_SetSequence_ReturnValue != nullptr)
		*CallFunc_SetSequence_ReturnValue = std::move(Parms.CallFunc_SetSequence_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (BlueprintVisible, Parm, ReturnParm, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// struct FVector2D                   CallFunc_GetLeanAmount_Output                                    (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Vector2DInterpTo_Constant_ReturnValue                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetLeanAmount_DeltaTime_ImplicitCast                    (Edit, Net, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Vector2DInterpTo_Constant_DeltaTime_ImplicitCast        (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateAccelerationData(double CallFunc_FMax_ReturnValue, const struct FVector2D& CallFunc_GetLeanAmount_Output, struct FVector2D* CallFunc_Vector2DInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, double CallFunc_VSizeXYSquared_ReturnValue, struct FVector* CallFunc_LessLess_VectorRotator_ReturnValue, float* CallFunc_GetLeanAmount_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateAccelerationData");

	Params::UBaseHumanAnimBP_C_UpdateAccelerationData_Params Parms{};

	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_GetLeanAmount_Output = CallFunc_GetLeanAmount_Output;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_VSizeXYSquared_ReturnValue = CallFunc_VSizeXYSquared_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Vector2DInterpTo_Constant_ReturnValue != nullptr)
		*CallFunc_Vector2DInterpTo_Constant_ReturnValue = std::move(Parms.CallFunc_Vector2DInterpTo_Constant_ReturnValue);

	if (CallFunc_LessLess_VectorRotator_ReturnValue != nullptr)
		*CallFunc_LessLess_VectorRotator_ReturnValue = std::move(Parms.CallFunc_LessLess_VectorRotator_ReturnValue);

	if (CallFunc_GetLeanAmount_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_GetLeanAmount_DeltaTime_ImplicitCast = Parms.CallFunc_GetLeanAmount_DeltaTime_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, EditConst)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// class UAnimSequence*               K2Node_Select_Default_4                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateMoveAnim(struct FAnimUpdateContext* Context, const struct FAnimNodeReference& Node, const struct FSequencePlayerReference& CallFunc_ConvertToSequencePlayerPure_SequencePlayer, enum class E_CardinalDirection4* Temp_byte_Variable, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, enum class E_CardinalDirection4* Temp_byte_Variable_1, enum class E_CardinalDirection4* Temp_byte_Variable_2, double* K2Node_Select_Default, class UAnimSequence** K2Node_Select_Default_1, class UAnimSequence** K2Node_Select_Default_2, class UAnimSequence** K2Node_Select_Default_3, class UAnimSequence** K2Node_Select_Default_4, const struct FSequencePlayerReference& CallFunc_SetPlayRate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Params Parms{};

	Parms.Node = Node;
	Parms.CallFunc_ConvertToSequencePlayerPure_SequencePlayer = CallFunc_ConvertToSequencePlayerPure_SequencePlayer;
	Parms.CallFunc_SetPlayRate_ReturnValue = CallFunc_SetPlayRate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	if (K2Node_Select_Default_4 != nullptr)
		*K2Node_Select_Default_4 = Parms.K2Node_Select_Default_4;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               AllowUpdateDirectionJumpAngle                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// double                             K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (BlueprintVisible, Net, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_2                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_3                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue_1                        (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_4                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_5                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_6                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_7                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_8                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_9                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// enum class E_CardinalDirection4    CallFunc_SelectCardinalDirectionFromAngle_Direction              (BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_Current_ImplicitCast                 (ConstParm, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             K2Node_Select_NewEnumerator2_ImplicitCast                        (ConstParm, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngle_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateVelocityData(double CallFunc_VSizeXYSquared_ReturnValue, enum class E_CardinalDirection4* Temp_byte_Variable, enum class E_CardinalDirection4* Temp_byte_Variable_1, double Temp_real_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, double* K2Node_Select_Default, double* CallFunc_Lerp_ReturnValue, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue, struct FVector* CallFunc_LessLess_VectorRotator_ReturnValue, double* K2Node_Select_Default_1, enum class E_CardinalDirection4 CallFunc_SelectCardinalDirectionFromAngle_Direction, double CallFunc_SelectFloat_B_ImplicitCast, double* CallFunc_FInterpTo_Constant_Current_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast, double K2Node_Select_NewEnumerator2_ImplicitCast, double* CallFunc_Add_DoubleFloat_A_ImplicitCast, float* K2Node_VariableSet_DirectionJumpAngle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateVelocityData");

	Params::UBaseHumanAnimBP_C_UpdateVelocityData_Params Parms{};

	Parms.CallFunc_VSizeXYSquared_ReturnValue = CallFunc_VSizeXYSquared_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_real_Variable_2 = Temp_real_Variable_2;
	Parms.Temp_real_Variable_3 = Temp_real_Variable_3;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_SelectCardinalDirectionFromAngle_Direction = CallFunc_SelectCardinalDirectionFromAngle_Direction;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.K2Node_Select_NewEnumerator2_ImplicitCast = K2Node_Select_NewEnumerator2_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_LessLess_VectorRotator_ReturnValue != nullptr)
		*CallFunc_LessLess_VectorRotator_ReturnValue = std::move(Parms.CallFunc_LessLess_VectorRotator_ReturnValue);

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_FInterpTo_Constant_Current_ImplicitCast != nullptr)
		*CallFunc_FInterpTo_Constant_Current_ImplicitCast = Parms.CallFunc_FInterpTo_Constant_Current_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast = Parms.CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_A_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast;

	if (K2Node_VariableSet_DirectionJumpAngle_ImplicitCast != nullptr)
		*K2Node_VariableSet_DirectionJumpAngle_ImplicitCast = Parms.K2Node_VariableSet_DirectionJumpAngle_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast           (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::BlueprintThreadSafeUpdateAnimation(double CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UBaseHumanAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast = CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Edit, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)
// double                             DeadZone                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class E_CardinalDirection4    CurrentDirection                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               UseCurrentDirection                                              (Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class E_CardinalDirection4    Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             BwdDeadZone                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             FwdDeadZone                                                      (ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             AbsAngle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::SelectCardinalDirectionFromAngle(double Angle, enum class E_CardinalDirection4* CurrentDirection, bool UseCurrentDirection, double* BwdDeadZone, double* CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SelectCardinalDirectionFromAngle");

	Params::UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.UseCurrentDirection = UseCurrentDirection;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentDirection != nullptr)
		*CurrentDirection = Parms.CurrentDirection;

	if (BwdDeadZone != nullptr)
		*BwdDeadZone = Parms.BwdDeadZone;

	if (CallFunc_Abs_ReturnValue != nullptr)
		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast_1                                    (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcBlendspaceAxes(const struct FVector& CallFunc_GetVelocity_ReturnValue, struct FRotator* CallFunc_NormalizedDeltaRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_GetWorldDeltaSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcBlendspaceAxes");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params Parms{};

	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_NormalizedDeltaRotator_ReturnValue != nullptr)
		*CallFunc_NormalizedDeltaRotator_ReturnValue = std::move(Parms.CallFunc_NormalizedDeltaRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Abs_ReturnValue != nullptr)
		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;

	if (CallFunc_Abs_ReturnValue_1 != nullptr)
		*CallFunc_Abs_ReturnValue_1 = Parms.CallFunc_Abs_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)

class AShooterCharacter* UBaseHumanAnimBP_C::UpdateGliderSuitVars()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateGliderSuitVars");

	Params::UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

struct FRotator UBaseHumanAnimBP_C::GliderSuit_CalcAimOffsets(struct FVector* CallFunc_GetForwardVector_ReturnValue, struct FRotator* CallFunc_NormalizedDeltaRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcAimOffsets");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params Parms{};

	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

	if (CallFunc_NormalizedDeltaRotator_ReturnValue != nullptr)
		*CallFunc_NormalizedDeltaRotator_ReturnValue = std::move(Parms.CallFunc_NormalizedDeltaRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Divide_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMovementComponent*          MovementComponent                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FVector                     Vector                                                           (Edit, BlueprintVisible, Net, OutParm)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ConstParm, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UBaseHumanAnimBP_C::MapVelocityToBlendSpace(class UMovementComponent* MovementComponent, struct FVector* Vector, double ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "MapVelocityToBlendSpace");

	Params::UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params Parms{};

	Parms.MovementComponent = MovementComponent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	if (CallFunc_Dot_VectorVector_ReturnValue != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue = Parms.CallFunc_Dot_VectorVector_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               AnimSeqIn                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               AnimSeqOut                                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimSequence*               CallFunc_GetOverridenAnimSequence_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)

bool UBaseHumanAnimBP_C::GetCharSequenceNew(class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class UAnimSequence* CallFunc_GetOverridenAnimSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharSequenceNew");

	Params::UBaseHumanAnimBP_C_GetCharSequenceNew_Params Parms{};

	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetOverridenAnimSequence_ReturnValue = CallFunc_GetOverridenAnimSequence_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageIn                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimMontage*                MontageOut                                                       (Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (ConstParm, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UAnimMontage* UBaseHumanAnimBP_C::GetCharMontageNew(class UAnimMontage* MontageIn, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharMontageNew");

	Params::UBaseHumanAnimBP_C_GetCharMontageNew_Params Parms{};

	Parms.MontageIn = MontageIn;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimationMontage                                                 (EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               bPauseOnFinish                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              StartPosition                                                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              PlayedAnimLength                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class UAnimMontage*                CallFunc_GetCharMontageNew_MontageOut                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::BlueprintPlayAnimationEvent(float* PlayRate, class UAnimMontage** CallFunc_GetCharMontageNew_MontageOut, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float* CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintPlayAnimationEvent");

	Params::UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

	if (CallFunc_GetCharMontageNew_MontageOut != nullptr)
		*CallFunc_GetCharMontageNew_MontageOut = Parms.CallFunc_GetCharMontageNew_MontageOut;

	if (CallFunc_Montage_Play_ReturnValue != nullptr)
		*CallFunc_Montage_Play_ReturnValue = Parms.CallFunc_Montage_Play_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_9938D1BF4EEC4D9043394EA7B8679FB7");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BB3D89D5450B7DEE6F12A4A61858BED2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA4928244AA38C74645005A09634874E");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_6D7A0BED4964804CBA91988BD03B3D60");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_75B5072D4E1970467933F5BB913B9B4B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A5CB0E6442D6561C90B91D99C6500B3B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_327B02BD463CD9814901179AFEC05B3B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_BA304BA947DB9B3D679CFD916D88EBCE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LayeredBoneBlend_615C9DE34EF09BA781FE40A4E94F22CE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_29305B4049CD45DD1B835BB8C796C45B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_5EAF21824F92A3D0D44AA08F511F7013");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_70F814824E1F2517DC3C5C9DBE08009C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E50B10714CE2586D6FB68BA8D0EF2121");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F8C7F65041A2DBAE95E451BD53A2B640");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_F17C7EF747B351756943CF8954E814CA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TwoWayBlend_02394B554084D0B34B6E7DA7519B758C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E8E34A70472901D5B260E281AE4C4708");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_2BAEBBB448F03B994C18C1B5A4C7E914");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_LinkedAnimGraph_7EA4D54440723237DAFC2E8D1560D608");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_873E9F10471227AE7DC010A9C3268AAD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_24D6F0A045D17884EC333A93C92118D3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_626584B448D31E19750278A0D43665CE");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_RotationOffsetBlendSpace_F37F6E364733EA96DE10549DB5DA7970");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_E6B944074706C39D2C5988B0F2E15851");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_7B60D41A4B1D3D8C1B5E7E8163B6F01F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_FB8A227148C9C2643271CCA82DC4A28B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_842E80474F26231326E786B60EFC8268");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PawnOwner                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// double                             DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     RootLocationOffset                                               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::Update_Bot_Animation(class APawn** PawnOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Bot Animation");

	Params::UBaseHumanAnimBP_C_Update_Bot_Animation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PawnOwner != nullptr)
		*PawnOwner = Parms.PawnOwner;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UBaseHumanAnimBP_C::BlueprintUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintUpdateAnimation");

	Params::UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_9DFE83F24F2F7B3151FD95B364D7A094");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_63CBC28444204464758893AE9DF5705A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AA33CDCC49044C52C2F7048F468ED36C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_5EAFE44C41B5D6C1666AA792FC557459");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A4199B444E6BF466F8E9EA9573D4293F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_SequencePlayer_45C7CCB04033D1FCA7A7268935C09DCC");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_B30C339C4722A19678123C938D56B5F4");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_A99BF2C74DEF6AA48F2A12809106DFD2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_AF6FE91045EF076E8F723E94E3EE2C66");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_EEBC4A6A463B5DB7CC0554B4237279BA");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_906A4CF645BC965973E3E8941995C726");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintInitializeAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_800BD7D244A0F9CDB5377FA5291BFEF5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_190007EE4755BF9F8603878BA60CBE3D");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_TransitionResult_E42788514DF362C1FC3B71915BAA4B08");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     PrevLocation                                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::OnCharacterStepped(struct FVector* NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "OnCharacterStepped");

	Params::UBaseHumanAnimBP_C_OnCharacterStepped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewLocation != nullptr)
		*NewLocation = std::move(Parms.NewLocation);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_00E1374640FCA35E735FAAB2A6F5F011");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ModifyBone_657048094FA510B3E568948D273BF06C");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               Temp_bool_Variable_3                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APawn*                       K2Node_CustomEvent_PawnOwner                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_DeltaTime                                     (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_RootLocationOffset                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp)
// class APrimalBotCharacter*         K2Node_DynamicCast_AsPrimal_Bot_Character                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue                  (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ConstParm, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue                      (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              K2Node_Event_DeltaTimeX                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVisualVelocity_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (BlueprintVisible, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAimOffsets_RootRotOffset                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAimOffsets_TheRootYawSpeed                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetAimOffsets_RootLocOffset                             (BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (Edit, Net, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsOnSeatingStructure_ReturnValue                        (BlueprintVisible, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetRole                CallFunc_GetRole_ReturnValue                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue_1                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class ENetRole                CallFunc_GetRole_ReturnValue_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1              (Edit, Net, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendInTime                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendOutTime                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAdditiveStandingAnim_ReturnValue                     (Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendInTime                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendOutTime                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAlternateStandingAnim_ReturnValue                    (ConstParm, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAdditiveStandingAnim_ReturnValue                     (ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_UseAlternateStandingAnim_ReturnValue                    (Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAltAimOffsetAnim_ReturnValue                         (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class AWeapClimbPick_C*            K2Node_DynamicCast_AsWeap_Climb_Pick                             (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue                     (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, NonTransactional)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1                (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue_1                    (ExportObject, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_3                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsSitting_ReturnValue                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue            (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ForceTPVTargetingAnimation_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AnimUseAimOffset_ReturnValue                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_AllowMountedWeaponry_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, Net, Parm, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_2                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_GetMoveAnimRate_ReturnValue                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetTPVHorizontalCameraOffset_ReturnValue                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// struct FPrimalCameraParams         CallFunc_GetPrimalCameraParams_OutCameraParams                   (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_4                                    (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ConstParm, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// struct FVector                     K2Node_Event_PrevLocation                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_NewLocation                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_5                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_BreakVector_X_6                                         (ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_15                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (Edit, ConstParm, BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_16                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference, EditorOnly)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// float                              K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_17                     (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimMontage*                K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// float                              CallFunc_Montage_Play_ReturnValue                                (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_QInterpTo_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_ShouldASACameraSwitchToOld_ReturnValue                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue                          (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue_1                        (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UPrimitiveComponent*         CallFunc_GetBasedMovementComponent_ReturnValue                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional, NoDestructor)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (Edit, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// bool                               CallFunc_IsBaseUnresolved_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (Edit, ZeroConstructor, ReturnParm, SubobjectReference)
// double                             K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast(DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_1                           (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Array_Set_Item_ImplicitCast_2                           (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_3                           (ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast             (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GroundIK_DeltaTime_ImplicitCast                         (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast             (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast         (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast        (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_MinSprintSpeed_ImplicitCast                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_BallistaYaw_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast             (ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Option_0_ImplicitCast                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (BlueprintReadOnly, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_156_ImplicitCast          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_StructMemberSet___FloatProperty_160_ImplicitCast          (Edit, ConstParm, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Select_Option_0_ImplicitCast_1                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Select_Option_0_ImplicitCast_2                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_QInterpTo_InterpSpeed_ImplicitCast                      (BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_17_ImplicitCast           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::ExecuteUbergraph_BaseHumanAnimBP(uint8* CallFunc_GetValidValue_ReturnValue, bool* Temp_bool_Variable, bool* Temp_bool_Variable_1, bool* Temp_bool_Variable_2, bool CallFunc_NotEqual_ObjectObject_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, bool* Temp_bool_Variable_3, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, const struct FVector& K2Node_CustomEvent_RootLocationOffset, double* CallFunc_FClamp_ReturnValue, class APrimalBotCharacter* K2Node_DynamicCast_AsPrimal_Bot_Character, struct FRotator* CallFunc_MakeRotator_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, const struct FVector& CallFunc_GetVisualVelocity_ReturnValue, struct FVector2D* CallFunc_Conv_VectorToVector2D_ReturnValue, double* CallFunc_VSize2D_ReturnValue, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, struct FRotator* CallFunc_NegateRotator_ReturnValue, struct FVector* CallFunc_LessLess_VectorRotator_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, struct FRotator* CallFunc_GetAimOffsets_RootRotOffset, double* CallFunc_Add_DoubleDouble_ReturnValue_1, double* CallFunc_Abs_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, struct FVector* CallFunc_GetInterpolatedLocation_ReturnValue, struct FVector* CallFunc_GetInterpolatedLocation_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue, float CallFunc_GetAdditiveStandingAnim_OutBlendInTime, float CallFunc_GetAdditiveStandingAnim_OutBlendOutTime, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut, float* CallFunc_GetAlternateStandingAnim_OutBlendInTime, class UAnimSequence** CallFunc_GetAlternateStandingAnim_ReturnValue, bool* CallFunc_UseAdditiveStandingAnim_ReturnValue, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_1, bool CallFunc_UseAlternateStandingAnim_ReturnValue, bool* CallFunc_UseAltAimOffsetAnim_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3, float* CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue, float* CallFunc_GetDefaultMovementSpeed_ReturnValue, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_2, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_3, bool* CallFunc_IsTargeting_ReturnValue, bool* CallFunc_AllowMountedWeaponry_ReturnValue, bool* CallFunc_IsValid_ReturnValue_4, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double* CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double* CallFunc_Lerp_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_2, double CallFunc_GetWorldDeltaSeconds_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double* CallFunc_Add_DoubleDouble_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, double CallFunc_GetWorldDeltaSeconds_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue_4, struct FPrimalCameraParams* CallFunc_GetPrimalCameraParams_OutCameraParams, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double* CallFunc_FClamp_ReturnValue_4, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, struct FVector* K2Node_Event_PrevLocation, double* CallFunc_Subtract_DoubleFloat_ReturnValue_2, double* CallFunc_Abs_ReturnValue_1, struct FRotator* CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, double* CallFunc_MapRangeClamped_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_1, float* K2Node_Select_Default, double* K2Node_Select_Default_1, float* K2Node_Select_Default_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double* CallFunc_Add_DoubleDouble_ReturnValue_5, class UAnimMontage** K2Node_Select_Default_3, float* CallFunc_Montage_Play_ReturnValue, double* CallFunc_MapRangeClamped_ReturnValue_2, double* CallFunc_FClamp01_ReturnValue, const struct FRotator& CallFunc_QInterpTo_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double* CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, bool* CallFunc_IsValid_ReturnValue_5, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, double CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast, double* CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast, double* CallFunc_Add_DoubleFloat_A_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast, double* CallFunc_Divide_DoubleDouble_A_ImplicitCast, double* K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast, double K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast, double* K2Node_VariableSet_BallistaYaw_ImplicitCast, double K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1, float* CallFunc_QInterpTo_InterpSpeed_ImplicitCast, float CallFunc_RLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ExecuteUbergraph_BaseHumanAnimBP");

	Params::UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params Parms{};

	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_RootLocationOffset = K2Node_CustomEvent_RootLocationOffset;
	Parms.K2Node_DynamicCast_AsPrimal_Bot_Character = K2Node_DynamicCast_AsPrimal_Bot_Character;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_GetVisualVelocity_ReturnValue = CallFunc_GetVisualVelocity_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue_1 = CallFunc_GetVelocity_ReturnValue_1;
	Parms.CallFunc_GetAdditiveStandingAnim_OutBlendInTime = CallFunc_GetAdditiveStandingAnim_OutBlendInTime;
	Parms.CallFunc_GetAdditiveStandingAnim_OutBlendOutTime = CallFunc_GetAdditiveStandingAnim_OutBlendOutTime;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut = CallFunc_GetCharSequenceNew_AnimSeqOut;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_1 = CallFunc_GetCharSequenceNew_AnimSeqOut_1;
	Parms.CallFunc_UseAlternateStandingAnim_ReturnValue = CallFunc_UseAlternateStandingAnim_ReturnValue;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_2 = CallFunc_GetCharSequenceNew_AnimSeqOut_2;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_3 = CallFunc_GetCharSequenceNew_AnimSeqOut_3;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_1 = CallFunc_GetWorldDeltaSeconds_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_2 = CallFunc_GetWorldDeltaSeconds_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_3 = CallFunc_GetWorldDeltaSeconds_ReturnValue_3;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue_4 = CallFunc_GetWorldDeltaSeconds_ReturnValue_4;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_QInterpTo_ReturnValue = CallFunc_QInterpTo_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue = CallFunc_ShouldUseASACamera_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue_1 = CallFunc_ShouldUseASACamera_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast = K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast = CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast = CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_Direction_ImplicitCast = K2Node_VariableSet_Direction_ImplicitCast;
	Parms.K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast = K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast;
	Parms.K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast = K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_RLerp_Alpha_ImplicitCast = CallFunc_RLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetValidValue_ReturnValue != nullptr)
		*CallFunc_GetValidValue_ReturnValue = Parms.CallFunc_GetValidValue_ReturnValue;

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (Temp_bool_Variable_3 != nullptr)
		*Temp_bool_Variable_3 = Parms.Temp_bool_Variable_3;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_Conv_VectorToVector2D_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToVector2D_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToVector2D_ReturnValue);

	if (CallFunc_VSize2D_ReturnValue != nullptr)
		*CallFunc_VSize2D_ReturnValue = Parms.CallFunc_VSize2D_ReturnValue;

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (CallFunc_NegateRotator_ReturnValue != nullptr)
		*CallFunc_NegateRotator_ReturnValue = std::move(Parms.CallFunc_NegateRotator_ReturnValue);

	if (CallFunc_LessLess_VectorRotator_ReturnValue != nullptr)
		*CallFunc_LessLess_VectorRotator_ReturnValue = std::move(Parms.CallFunc_LessLess_VectorRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_GetAimOffsets_RootRotOffset != nullptr)
		*CallFunc_GetAimOffsets_RootRotOffset = std::move(Parms.CallFunc_GetAimOffsets_RootRotOffset);

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Abs_ReturnValue != nullptr)
		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;

	if (CallFunc_GetInterpolatedLocation_ReturnValue != nullptr)
		*CallFunc_GetInterpolatedLocation_ReturnValue = std::move(Parms.CallFunc_GetInterpolatedLocation_ReturnValue);

	if (CallFunc_GetInterpolatedLocation_ReturnValue_1 != nullptr)
		*CallFunc_GetInterpolatedLocation_ReturnValue_1 = std::move(Parms.CallFunc_GetInterpolatedLocation_ReturnValue_1);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue != nullptr)
		*CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue = Parms.CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue;

	if (CallFunc_GetAlternateStandingAnim_OutBlendInTime != nullptr)
		*CallFunc_GetAlternateStandingAnim_OutBlendInTime = Parms.CallFunc_GetAlternateStandingAnim_OutBlendInTime;

	if (CallFunc_GetAlternateStandingAnim_ReturnValue != nullptr)
		*CallFunc_GetAlternateStandingAnim_ReturnValue = Parms.CallFunc_GetAlternateStandingAnim_ReturnValue;

	if (CallFunc_UseAdditiveStandingAnim_ReturnValue != nullptr)
		*CallFunc_UseAdditiveStandingAnim_ReturnValue = Parms.CallFunc_UseAdditiveStandingAnim_ReturnValue;

	if (CallFunc_UseAltAimOffsetAnim_ReturnValue != nullptr)
		*CallFunc_UseAltAimOffsetAnim_ReturnValue = Parms.CallFunc_UseAltAimOffsetAnim_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue != nullptr)
		*CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue = Parms.CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue;

	if (CallFunc_GetDefaultMovementSpeed_ReturnValue != nullptr)
		*CallFunc_GetDefaultMovementSpeed_ReturnValue = Parms.CallFunc_GetDefaultMovementSpeed_ReturnValue;

	if (CallFunc_IsTargeting_ReturnValue != nullptr)
		*CallFunc_IsTargeting_ReturnValue = Parms.CallFunc_IsTargeting_ReturnValue;

	if (CallFunc_AllowMountedWeaponry_ReturnValue != nullptr)
		*CallFunc_AllowMountedWeaponry_ReturnValue = Parms.CallFunc_AllowMountedWeaponry_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_4 != nullptr)
		*CallFunc_IsValid_ReturnValue_4 = Parms.CallFunc_IsValid_ReturnValue_4;

	if (CallFunc_Add_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_2;

	if (CallFunc_Lerp_ReturnValue != nullptr)
		*CallFunc_Lerp_ReturnValue = Parms.CallFunc_Lerp_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_3;

	if (CallFunc_FClamp_ReturnValue_2 != nullptr)
		*CallFunc_FClamp_ReturnValue_2 = Parms.CallFunc_FClamp_ReturnValue_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_4 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_4 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_4;

	if (CallFunc_FClamp_ReturnValue_3 != nullptr)
		*CallFunc_FClamp_ReturnValue_3 = Parms.CallFunc_FClamp_ReturnValue_3;

	if (CallFunc_GetPrimalCameraParams_OutCameraParams != nullptr)
		*CallFunc_GetPrimalCameraParams_OutCameraParams = std::move(Parms.CallFunc_GetPrimalCameraParams_OutCameraParams);

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_FClamp_ReturnValue_4 != nullptr)
		*CallFunc_FClamp_ReturnValue_4 = Parms.CallFunc_FClamp_ReturnValue_4;

	if (K2Node_Event_PrevLocation != nullptr)
		*K2Node_Event_PrevLocation = std::move(Parms.K2Node_Event_PrevLocation);

	if (CallFunc_Subtract_DoubleFloat_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue_2 = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue_2;

	if (CallFunc_Abs_ReturnValue_1 != nullptr)
		*CallFunc_Abs_ReturnValue_1 = Parms.CallFunc_Abs_ReturnValue_1;

	if (CallFunc_NormalizedDeltaRotator_ReturnValue != nullptr)
		*CallFunc_NormalizedDeltaRotator_ReturnValue = std::move(Parms.CallFunc_NormalizedDeltaRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_MapRangeClamped_ReturnValue != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue = Parms.CallFunc_MapRangeClamped_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_1 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_1 = Parms.CallFunc_MapRangeClamped_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = Parms.K2Node_Select_Default_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_5 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_5 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_5;

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = Parms.K2Node_Select_Default_3;

	if (CallFunc_Montage_Play_ReturnValue != nullptr)
		*CallFunc_Montage_Play_ReturnValue = Parms.CallFunc_Montage_Play_ReturnValue;

	if (CallFunc_MapRangeClamped_ReturnValue_2 != nullptr)
		*CallFunc_MapRangeClamped_ReturnValue_2 = Parms.CallFunc_MapRangeClamped_ReturnValue_2;

	if (CallFunc_FClamp01_ReturnValue != nullptr)
		*CallFunc_FClamp01_ReturnValue = Parms.CallFunc_FClamp01_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_6 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_6 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_6;

	if (CallFunc_IsValid_ReturnValue_5 != nullptr)
		*CallFunc_IsValid_ReturnValue_5 = Parms.CallFunc_IsValid_ReturnValue_5;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast = Parms.CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_A_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_A_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast;

	if (CallFunc_Divide_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	if (K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast != nullptr)
		*K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast = Parms.K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast;

	if (K2Node_VariableSet_BallistaYaw_ImplicitCast != nullptr)
		*K2Node_VariableSet_BallistaYaw_ImplicitCast = Parms.K2Node_VariableSet_BallistaYaw_ImplicitCast;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_QInterpTo_InterpSpeed_ImplicitCast != nullptr)
		*CallFunc_QInterpTo_InterpSpeed_ImplicitCast = Parms.CallFunc_QInterpTo_InterpSpeed_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.NewEventDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::NewEventDispatcher__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "NewEventDispatcher__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


