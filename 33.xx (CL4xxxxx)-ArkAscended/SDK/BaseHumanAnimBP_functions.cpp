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
// struct FPoseLink                   AnimGraph                                                        (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)

struct FPoseLink UBaseHumanAnimBP_C::AnimGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "AnimGraph");

	Params::UBaseHumanAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue          (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange        (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetBoneModifierValue_ReturnValue                        (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1        (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2(ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2        (Edit, ConstParm, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1      (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_1                      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2      (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_2                      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3      (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_3                      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4      (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_4                      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5      (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_5                      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ObjectIsA_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::Update_Character_Creator_Values(const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange, const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1, const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_ObjectIsA_ReturnValue, bool CallFunc_ObjectIsA_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Character Creator Values");

	Params::UBaseHumanAnimBP_C_Update_Character_Creator_Values_Params Parms{};

	Parms.CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange = CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange;
	Parms.CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1 = CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1;
	Parms.CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2 = CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2;
	Parms.CallFunc_ObjectIsA_ReturnValue = CallFunc_ObjectIsA_ReturnValue;
	Parms.CallFunc_ObjectIsA_ReturnValue_1 = CallFunc_ObjectIsA_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange);

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1 = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1;

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2 != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2 = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1);

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2);

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3);

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4);

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5);

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

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
// double                             DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             InterpSpeed                                                      (Edit, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
// double                             Time                                                             (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             Speed                                                            (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_6                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_7                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_8                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_9                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_10                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_11                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_12                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_13                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_14                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_15                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_16                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_17                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_18                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_19                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_20                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_21                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_22                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_23                                (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_3                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_4                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_5                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_6                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_7                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_8                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_9                        (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_10                       (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_11                       (BlueprintVisible, ExportObject, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast             (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast          (Edit, BlueprintVisible, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast             (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHead_ImplicitCast               (Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast            (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideSpine_ImplicitCast              (BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast   (ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::InterpLayeringValues(double* InterpSpeed, double* Speed, double CallFunc_FInterpTo_Current_ImplicitCast, double CallFunc_FInterpTo_Current_ImplicitCast_1, double CallFunc_FInterpTo_Current_ImplicitCast_2, double CallFunc_FInterpTo_Current_ImplicitCast_3, double CallFunc_FInterpTo_Current_ImplicitCast_4, double CallFunc_FInterpTo_Current_ImplicitCast_5, double CallFunc_FInterpTo_Current_ImplicitCast_6, double CallFunc_FInterpTo_Current_ImplicitCast_7, double CallFunc_FInterpTo_Current_ImplicitCast_8, double CallFunc_FInterpTo_Current_ImplicitCast_9, double CallFunc_FInterpTo_Current_ImplicitCast_10, double CallFunc_FInterpTo_Current_ImplicitCast_11, float K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideSpine_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "InterpLayeringValues");

	Params::UBaseHumanAnimBP_C_InterpLayeringValues_Params Parms{};

	Parms.CallFunc_FInterpTo_Current_ImplicitCast = CallFunc_FInterpTo_Current_ImplicitCast;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_1 = CallFunc_FInterpTo_Current_ImplicitCast_1;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_2 = CallFunc_FInterpTo_Current_ImplicitCast_2;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_3 = CallFunc_FInterpTo_Current_ImplicitCast_3;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_4 = CallFunc_FInterpTo_Current_ImplicitCast_4;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_5 = CallFunc_FInterpTo_Current_ImplicitCast_5;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_6 = CallFunc_FInterpTo_Current_ImplicitCast_6;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_7 = CallFunc_FInterpTo_Current_ImplicitCast_7;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_8 = CallFunc_FInterpTo_Current_ImplicitCast_8;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_9 = CallFunc_FInterpTo_Current_ImplicitCast_9;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_10 = CallFunc_FInterpTo_Current_ImplicitCast_10;
	Parms.CallFunc_FInterpTo_Current_ImplicitCast_11 = CallFunc_FInterpTo_Current_ImplicitCast_11;
	Parms.K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast = K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpSpeed != nullptr)
		*InterpSpeed = Parms.InterpSpeed;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

	if (K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideSpine_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideSpine_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideSpine_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Out                                                              (ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Map_Find_Value                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::Get_IKWorld_Interp_Speed(double* Out, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool* CallFunc_Map_Find_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Get IKWorld Interp Speed");

	Params::UBaseHumanAnimBP_C_Get_IKWorld_Interp_Speed_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

	if (CallFunc_Map_Find_ReturnValue != nullptr)
		*CallFunc_Map_Find_ReturnValue = Parms.CallFunc_Map_Find_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_2                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (BlueprintVisible, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue_1                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue_1                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue_1                    (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             K2Node_VariableSet_TraceDistanceFactorBelow_ImplicitCast         (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::GroundIK(struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs_1, double* CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue, struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs_2, bool* CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_IsAlive_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GroundIK");

	Params::UBaseHumanAnimBP_C_GroundIK_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue = CallFunc_ShouldEnableIKBasedOn_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue_1 = CallFunc_ShouldEnableIKBasedOn_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_AlphaBlendArgs != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs);

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (K2Node_MakeStruct_AlphaBlendArgs_1 != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs_1 = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs_1);

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue_2 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_2 = Parms.CallFunc_SelectFloat_ReturnValue_2;

	if (K2Node_MakeStruct_AlphaBlendArgs_2 != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs_2 = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs_2);

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_IsAlive_ReturnValue != nullptr)
		*CallFunc_IsAlive_ReturnValue = Parms.CallFunc_IsAlive_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_BooleanOR_ReturnValue_3 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_3 = Parms.CallFunc_BooleanOR_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_5                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_6                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_7                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_8                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_9                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_10                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_11                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_12                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_13                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_14                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_15                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_16                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_17                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_18                            (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_4                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_5                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_6                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_7                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_8                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_9                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_10                  (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_11                  (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_12                  (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_13                  (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_14                  (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)

float UBaseHumanAnimBP_C::UpdatePoseLayering(bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, bool CallFunc_Greater_DoubleDouble_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_13, bool CallFunc_Greater_DoubleDouble_ReturnValue_14, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue_5, bool* CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_7, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_3, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_4, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_5, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_6, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_7, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_8, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_9, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_10, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_11, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_12, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_13, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_14)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdatePoseLayering");

	Params::UBaseHumanAnimBP_C_UpdatePoseLayering_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_5 = CallFunc_Greater_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_6 = CallFunc_Greater_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_7 = CallFunc_Greater_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_8 = CallFunc_Greater_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_9 = CallFunc_Greater_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_10 = CallFunc_Greater_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_11 = CallFunc_Greater_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_12 = CallFunc_Greater_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_13 = CallFunc_Greater_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_14 = CallFunc_Greater_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_2 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_2;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_3 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_3;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_4 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_4;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_5 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_5;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_6 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_6;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_7 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_7;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_8 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_8;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_9 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_9;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_10 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_10;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_11 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_11;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_12 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_12;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_13 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_13;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_14 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_14;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_BooleanOR_ReturnValue_3 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_3 = Parms.CallFunc_BooleanOR_ReturnValue_3;

	if (CallFunc_BooleanOR_ReturnValue_4 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_4 = Parms.CallFunc_BooleanOR_ReturnValue_4;

	if (CallFunc_BooleanOR_ReturnValue_5 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_5 = Parms.CallFunc_BooleanOR_ReturnValue_5;

	if (CallFunc_BooleanOR_ReturnValue_6 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_6 = Parms.CallFunc_BooleanOR_ReturnValue_6;

	if (CallFunc_BooleanOR_ReturnValue_7 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_7 = Parms.CallFunc_BooleanOR_ReturnValue_7;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, ConstParm, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

double UBaseHumanAnimBP_C::GetLeanAmount(struct FVector2D* Output, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, struct FVector2D* CallFunc_Conv_DoubleToVector2D_ReturnValue, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, double CallFunc_FClamp01_ReturnValue, struct FVector2D* CallFunc_Conv_DoubleToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, struct FRotator* CallFunc_RInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetLeanAmount");

	Params::UBaseHumanAnimBP_C_GetLeanAmount_Params Parms{};

	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_EqualEqual_VectorVector_ReturnValue = CallFunc_EqualEqual_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	if (CallFunc_Conv_DoubleToVector2D_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToVector2D_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue);

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_VInterpTo_ReturnValue != nullptr)
		*CallFunc_VInterpTo_ReturnValue = std::move(Parms.CallFunc_VInterpTo_ReturnValue);

	if (CallFunc_Conv_DoubleToVector2D_ReturnValue_1 != nullptr)
		*CallFunc_Conv_DoubleToVector2D_ReturnValue_1 = std::move(Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue_1);

	if (CallFunc_RInterpTo_ReturnValue != nullptr)
		*CallFunc_RInterpTo_ReturnValue = std::move(Parms.CallFunc_RInterpTo_ReturnValue);

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
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (ConstParm, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateMoveAnim_Layering(struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim_Layering");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params Parms{};

	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (Edit, ConstParm, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateLayeringValues(double* K2Node_VariableSet_Layering_Spine_ImplicitCast, double* K2Node_VariableSet_Layering_L_Arm_ImplicitCast, double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_C_UpdateLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_Layering_Spine_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_Spine_ImplicitCast = Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast;

	if (K2Node_VariableSet_Layering_L_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_L_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_L_Arm_ImplicitCast;

	if (K2Node_VariableSet_Layering_R_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::UpdateWeaponIKNonThreadSafe(bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIKNonThreadSafe");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params Parms{};

	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_RightHandIKAlpha_ImplicitCast                 (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateWeaponIK(double* CallFunc_SelectFloat_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIK");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIK_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_PredictGroundMovementStopLocation_ReturnValue           (ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::GetPredictedStopDistance(double ReturnValue, double CallFunc_VSizeXY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetPredictedStopDistance");

	Params::UBaseHumanAnimBP_C_GetPredictedStopDistance_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// double                             DistanceToMatch                                                  (Edit, BlueprintVisible, ExportObject, Net, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPredictedStopDistance_ReturnValue                    (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

struct FAnimNodeReference UBaseHumanAnimBP_C::UpdateStopAnim(double DistanceToMatch, bool* CallFunc_ShouldDistanceMatchStop_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_AdvanceTime_ReturnValue, double* CallFunc_GetPredictedStopDistance_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_DistanceMatchToTarget_ReturnValue, float CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateStopAnim");

	Params::UBaseHumanAnimBP_C_UpdateStopAnim_Params Parms{};

	Parms.DistanceToMatch = DistanceToMatch;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result_1 = CallFunc_ConvertToSequenceEvaluatorPure_Result_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast = CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ShouldDistanceMatchStop_ReturnValue != nullptr)
		*CallFunc_ShouldDistanceMatchStop_ReturnValue = Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue;

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1);

	if (CallFunc_AdvanceTime_ReturnValue != nullptr)
		*CallFunc_AdvanceTime_ReturnValue = std::move(Parms.CallFunc_AdvanceTime_ReturnValue);

	if (CallFunc_GetPredictedStopDistance_ReturnValue != nullptr)
		*CallFunc_GetPredictedStopDistance_ReturnValue = Parms.CallFunc_GetPredictedStopDistance_ReturnValue;

	if (CallFunc_DistanceMatchToTarget_ReturnValue != nullptr)
		*CallFunc_DistanceMatchToTarget_ReturnValue = std::move(Parms.CallFunc_DistanceMatchToTarget_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (Edit, ConstParm, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::SetUpStopAnim(struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool* CallFunc_ShouldDistanceMatchStop_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_DistanceMatchToTarget_ReturnValue, class UAnimSequence* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SetUpStopAnim");

	Params::UBaseHumanAnimBP_C_SetUpStopAnim_Params Parms{};

	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	if (CallFunc_ShouldDistanceMatchStop_ReturnValue != nullptr)
		*CallFunc_ShouldDistanceMatchStop_ReturnValue = Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue;

	if (CallFunc_DistanceMatchToTarget_ReturnValue != nullptr)
		*CallFunc_DistanceMatchToTarget_ReturnValue = std::move(Parms.CallFunc_DistanceMatchToTarget_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetLeanAmount_Output                                    (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Vector2DInterpTo_Constant_ReturnValue                   (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetLeanAmount_DeltaTime_ImplicitCast                    (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Vector2DInterpTo_Constant_DeltaTime_ImplicitCast        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateAccelerationData(struct FRotator* CallFunc_ComposeRotators_ReturnValue, struct FVector2D* CallFunc_GetLeanAmount_Output, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateAccelerationData");

	Params::UBaseHumanAnimBP_C_UpdateAccelerationData_Params Parms{};

	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (CallFunc_GetLeanAmount_Output != nullptr)
		*CallFunc_GetLeanAmount_Output = std::move(Parms.CallFunc_GetLeanAmount_Output);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_2                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UAnimSequence*               K2Node_Select_Default_4                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (ConstParm, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

enum class E_CardinalDirection4 UBaseHumanAnimBP_C::UpdateMoveAnim(bool CallFunc_ConvertToSequencePlayerPure_Result, bool Temp_bool_Variable, bool Temp_bool_Variable_1, double K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, class UAnimSequence* K2Node_Select_Default_4, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue, struct FSequencePlayerReference* CallFunc_SetPlayRate_ReturnValue, float* CallFunc_SetPlayRate_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Params Parms{};

	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	if (CallFunc_SetPlayRate_ReturnValue != nullptr)
		*CallFunc_SetPlayRate_ReturnValue = std::move(Parms.CallFunc_SetPlayRate_ReturnValue);

	if (CallFunc_SetPlayRate_PlayRate_ImplicitCast != nullptr)
		*CallFunc_SetPlayRate_PlayRate_ImplicitCast = Parms.CallFunc_SetPlayRate_PlayRate_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               AllowUpdateDirectionJumpAngle                                    (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_2                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_3                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_4                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_5                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_6                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_7                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_8                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_9                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// enum class E_CardinalDirection4    CallFunc_SelectCardinalDirectionFromAngle_Direction              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_Current_ImplicitCast                 (ConstParm, ExportObject, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_NewEnumerator2_ImplicitCast                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngle_ImplicitCast               (BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateVelocityData(bool* AllowUpdateDirectionJumpAngle, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, struct FRotator* CallFunc_ComposeRotators_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue_3, struct FRotator* CallFunc_ComposeRotators_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, float* CallFunc_CalculateDirection_ReturnValue, float* CallFunc_CalculateDirection_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_4, double* CallFunc_FClamp_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_5, double CallFunc_FInterpTo_Constant_ReturnValue_6, double* CallFunc_FClamp_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_7, double CallFunc_FInterpTo_Constant_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, double K2Node_Select_Default_1, bool* CallFunc_BooleanOR_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_9, float CallFunc_Add_DoubleFloat_B_ImplicitCast, double* CallFunc_SelectFloat_A_ImplicitCast, float* K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast, double* CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateVelocityData");

	Params::UBaseHumanAnimBP_C_UpdateVelocityData_Params Parms{};

	Parms.CallFunc_Vector_Normal2D_ReturnValue = CallFunc_Vector_Normal2D_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_2 = CallFunc_FInterpTo_Constant_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_3 = CallFunc_FInterpTo_Constant_ReturnValue_3;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_4 = CallFunc_FInterpTo_Constant_ReturnValue_4;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_5 = CallFunc_FInterpTo_Constant_ReturnValue_5;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_6 = CallFunc_FInterpTo_Constant_ReturnValue_6;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_7 = CallFunc_FInterpTo_Constant_ReturnValue_7;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_8 = CallFunc_FInterpTo_Constant_ReturnValue_8;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_9 = CallFunc_FInterpTo_Constant_ReturnValue_9;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (AllowUpdateDirectionJumpAngle != nullptr)
		*AllowUpdateDirectionJumpAngle = Parms.AllowUpdateDirectionJumpAngle;

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_ComposeRotators_ReturnValue_1 != nullptr)
		*CallFunc_ComposeRotators_ReturnValue_1 = std::move(Parms.CallFunc_ComposeRotators_ReturnValue_1);

	if (CallFunc_CalculateDirection_ReturnValue != nullptr)
		*CallFunc_CalculateDirection_ReturnValue = Parms.CallFunc_CalculateDirection_ReturnValue;

	if (CallFunc_CalculateDirection_ReturnValue_1 != nullptr)
		*CallFunc_CalculateDirection_ReturnValue_1 = Parms.CallFunc_CalculateDirection_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_A_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_A_ImplicitCast = Parms.CallFunc_SelectFloat_A_ImplicitCast;

	if (K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast != nullptr)
		*K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast = Parms.K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast;

	if (CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast != nullptr)
		*CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast = Parms.CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast               (BlueprintVisible, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::BlueprintThreadSafeUpdateAnimation(double CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintThreadSafeUpdateAnimation");

	Params::UBaseHumanAnimBP_C_BlueprintThreadSafeUpdateAnimation_Params Parms{};

	Parms.CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast = CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SelectCardinalDirectionFromAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             DeadZone                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class E_CardinalDirection4    CurrentDirection                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               UseCurrentDirection                                              (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             BwdDeadZone                                                      (ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             FwdDeadZone                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             AbsAngle                                                         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class E_CardinalDirection4* CurrentDirection, double* FwdDeadZone, double AbsAngle, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SelectCardinalDirectionFromAngle");

	Params::UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.DeadZone = DeadZone;
	Parms.AbsAngle = AbsAngle;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentDirection != nullptr)
		*CurrentDirection = Parms.CurrentDirection;

	if (FwdDeadZone != nullptr)
		*FwdDeadZone = Parms.FwdDeadZone;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast_1                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcBlendspaceAxes(bool CallFunc_IsLocallyControlled_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double* CallFunc_SelectFloat_ReturnValue_3, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcBlendspaceAxes");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params Parms{};

	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast_1 = CallFunc_Abs_A_ImplicitCast_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue_2 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_2 = Parms.CallFunc_SelectFloat_ReturnValue_2;

	if (CallFunc_SelectFloat_ReturnValue_3 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_3 = Parms.CallFunc_SelectFloat_ReturnValue_3;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)

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
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcAimOffsets(const struct FRotator& CallFunc_GetControlRotation_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcAimOffsets");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params Parms{};

	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMovementComponent*          MovementComponent                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
// struct FVector                     Vector                                                           (Edit, BlueprintVisible, Net, OutParm)
// double                             ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::MapVelocityToBlendSpace(struct FVector* Vector, double ReturnValue, double* Result, bool CallFunc_Greater_DoubleDouble_ReturnValue, double* CallFunc_Dot_VectorVector_ReturnValue, double* CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "MapVelocityToBlendSpace");

	Params::UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	if (Result != nullptr)
		*Result = Parms.Result;

	if (CallFunc_Dot_VectorVector_ReturnValue != nullptr)
		*CallFunc_Dot_VectorVector_ReturnValue = Parms.CallFunc_Dot_VectorVector_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_Divide_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Divide_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               AnimSeqIn                                                        (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               AnimSeqOut                                                       (ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimSequence*               CallFunc_GetOverridenAnimSequence_ReturnValue                    (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool UBaseHumanAnimBP_C::GetCharSequenceNew(class UAnimSequence* AnimSeqIn, class UAnimSequence** AnimSeqOut, class UAnimSequence* CallFunc_GetOverridenAnimSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharSequenceNew");

	Params::UBaseHumanAnimBP_C_GetCharSequenceNew_Params Parms{};

	Parms.AnimSeqIn = AnimSeqIn;
	Parms.CallFunc_GetOverridenAnimSequence_ReturnValue = CallFunc_GetOverridenAnimSequence_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimSeqOut != nullptr)
		*AnimSeqOut = Parms.AnimSeqOut;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageIn                                                        (Edit, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAnimMontage*                MontageOut                                                       (Edit, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

class UAnimMontage* UBaseHumanAnimBP_C::GetCharMontageNew(class UAnimMontage* MontageIn, class UAnimMontage* MontageOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharMontageNew");

	Params::UBaseHumanAnimBP_C_GetCharMontageNew_Params Parms{};

	Parms.MontageIn = MontageIn;
	Parms.MontageOut = MontageOut;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimationMontage                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               bPauseOnFinish                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              PlayedAnimLength                                                 (Edit, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimMontage*                CallFunc_GetCharMontageNew_MontageOut                            (Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, float PlayedAnimLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintPlayAnimationEvent");

	Params::UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params Parms{};

	Parms.AnimationMontage = AnimationMontage;
	Parms.PlayedAnimLength = PlayedAnimLength;

	UObject::ProcessEvent(Func, &Parms);

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
// class APawn*                       PawnOwner                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// double                             DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RootLocationOffset                                               (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::Update_Bot_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Bot Animation");

	Params::UBaseHumanAnimBP_C_Update_Bot_Animation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseHumanAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintUpdateAnimation");

	Params::UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

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
// struct FVector                     PrevLocation                                                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, Transient, EditConst, SubobjectReference)

void UBaseHumanAnimBP_C::OnCharacterStepped(struct FVector* PrevLocation, const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "OnCharacterStepped");

	Params::UBaseHumanAnimBP_C_OnCharacterStepped_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (PrevLocation != nullptr)
		*PrevLocation = std::move(Parms.PrevLocation);

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_3                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (ConstParm, ExportObject, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       K2Node_CustomEvent_PawnOwner                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_DeltaTime                                     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_RootLocationOffset                            (Edit, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBotCharacter*         K2Node_DynamicCast_AsPrimal_Bot_Character                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue                      (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVisualVelocity_ReturnValue                           (Edit, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAimOffsets_RootRotOffset                             (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAimOffsets_TheRootYawSpeed                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetAimOffsets_RootLocOffset                             (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsOnSeatingStructure_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// enum class ENetRole                CallFunc_GetRole_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_2                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ENetRole                CallFunc_GetRole_ReturnValue_1                                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_3                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue          (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendInTime                  (Edit, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendOutTime                 (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAdditiveStandingAnim_ReturnValue                     (OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendInTime                 (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendOutTime                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAlternateStandingAnim_ReturnValue                    (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAdditiveStandingAnim_ReturnValue                     (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_1                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_UseAlternateStandingAnim_ReturnValue                    (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAltAimOffsetAnim_ReturnValue                         (BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class AWeapClimbPick_C*            K2Node_DynamicCast_AsWeap_Climb_Pick                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue                     (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_2                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue_1                    (BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_3                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsSitting_ReturnValue                                   (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ForceTPVTargetingAnimation_ReturnValue                  (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AnimUseAimOffset_ReturnValue                            (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_AllowMountedWeaponry_ReturnValue                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (ConstParm, Net, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_2                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_GetMoveAnimRate_ReturnValue                             (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetTPVHorizontalCameraOffset_ReturnValue                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FPrimalCameraParams         CallFunc_GetPrimalCameraParams_OutCameraParams                   (Edit, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_4                                    (Edit, ConstParm, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// struct FVector                     K2Node_Event_PrevLocation                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_NewLocation                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_5                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_BreakVector_X_6                                         (BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_2                      (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_15                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_16                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll_1                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             K2Node_Select_Default_1                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Select_Default_2                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_17                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimMontage*                K2Node_Select_Default_3                                          (EditFixedSize, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (Edit, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_QInterpTo_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (Edit, ConstParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_ShouldASACameraSwitchToOld_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue                          (Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue_1                        (Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UPrimitiveComponent*         CallFunc_GetBasedMovementComponent_ReturnValue                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBaseUnresolved_ReturnValue                            (BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast(BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (ConstParm, Net, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_1                           (ConstParm, Net, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Array_Set_Item_ImplicitCast_2                           (ConstParm, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_3                           (ConstParm, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast             (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GroundIK_DeltaTime_ImplicitCast                         (BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast             (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast          (ConstParm, BlueprintReadOnly, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast         (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast        (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_MinSprintSpeed_ImplicitCast                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_BallistaYaw_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast             (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Option_0_ImplicitCast                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, BlueprintVisible, Net, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_156_ImplicitCast          (Edit, Net, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (Edit, BlueprintVisible, ExportObject, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_StructMemberSet___FloatProperty_160_ImplicitCast          (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Select_Option_0_ImplicitCast_1                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Select_Option_0_ImplicitCast_2                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_QInterpTo_InterpSpeed_ImplicitCast                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_17_ImplicitCast           (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::ExecuteUbergraph_BaseHumanAnimBP(int32 EntryPoint, uint8* CallFunc_GetValidValue_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, bool Temp_bool_Variable_1, double* CallFunc_SelectFloat_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, double CallFunc_Conv_BoolToDouble_ReturnValue, class APawn* K2Node_CustomEvent_PawnOwner, double K2Node_CustomEvent_DeltaTime, double* CallFunc_FClamp_ReturnValue, class UAnimSequence** CallFunc_GetDinoRidingMoveAnimation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, struct FRotator* CallFunc_K2_GetActorRotation_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, struct FRotator* CallFunc_ComposeRotators_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float* CallFunc_GetAimOffsets_TheRootYawSpeed, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, double CallFunc_Add_DoubleFloat_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_2, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool* CallFunc_IsOnSeatingStructure_ReturnValue, enum class ENetRole CallFunc_GetRole_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_1, enum class ENetRole CallFunc_GetRole_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Less_DoubleDouble_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_2, float* CallFunc_GetAdditiveStandingAnim_OutBlendInTime, float CallFunc_GetAdditiveStandingAnim_OutBlendOutTime, float* CallFunc_GetAlternateStandingAnim_OutBlendInTime, class UAnimSequence* CallFunc_GetAlternateStandingAnim_ReturnValue, bool CallFunc_UseAdditiveStandingAnim_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, float* CallFunc_GetDefaultMovementSpeed_ReturnValue, class UAnimSequence** CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1, bool CallFunc_IsSitting_ReturnValue, bool CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue, bool* CallFunc_ForceTPVTargetingAnimation_ReturnValue, bool* CallFunc_AnimUseAimOffset_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_2, double* CallFunc_Subtract_DoubleDouble_ReturnValue_3, bool CallFunc_Greater_DoubleDouble_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_Greater_DoubleDouble_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool CallFunc_EqualEqual_ByteByte_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_12, bool CallFunc_Greater_DoubleDouble_ReturnValue_6, double* CallFunc_Subtract_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_DoubleToFloat_ReturnValue, double* CallFunc_Subtract_DoubleDouble_ReturnValue_5, bool CallFunc_Greater_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double* CallFunc_FClamp_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double* CallFunc_FClamp_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_14, bool CallFunc_EqualEqual_ByteByte_ReturnValue_15, bool CallFunc_EqualEqual_ByteByte_ReturnValue_16, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_17, float* CallFunc_GetMoveAnimRate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_18, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_19, bool CallFunc_EqualEqual_ByteByte_ReturnValue_20, bool CallFunc_EqualEqual_ByteByte_ReturnValue_21, bool CallFunc_Greater_DoubleDouble_ReturnValue_10, double CallFunc_Add_DoubleFloat_ReturnValue_1, double* CallFunc_Subtract_DoubleDouble_ReturnValue_6, double* CallFunc_Subtract_DoubleDouble_ReturnValue_7, bool CallFunc_Greater_DoubleDouble_ReturnValue_11, bool CallFunc_Less_DoubleDouble_ReturnValue_3, double* CallFunc_FClamp_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_22, bool CallFunc_EqualEqual_ByteByte_ReturnValue_23, bool CallFunc_EqualEqual_ByteByte_ReturnValue_24, bool CallFunc_EqualEqual_ByteByte_ReturnValue_25, bool CallFunc_Greater_DoubleDouble_ReturnValue_12, double CallFunc_FInterpTo_Constant_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_26, bool CallFunc_Greater_DoubleDouble_ReturnValue_13, bool CallFunc_Greater_DoubleDouble_ReturnValue_14, bool CallFunc_Greater_DoubleDouble_ReturnValue_15, bool CallFunc_BooleanAND_ReturnValue_10, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, struct FRotator* CallFunc_ComposeRotators_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_16, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool CallFunc_Montage_IsPlaying_ReturnValue, float K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_27, double K2Node_Select_Default_1, float K2Node_Select_Default_2, bool CallFunc_Greater_DoubleDouble_ReturnValue_17, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_13, double* CallFunc_Subtract_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, bool CallFunc_Montage_IsPlaying_ReturnValue_1, class UAnimMontage* K2Node_Select_Default_3, bool CallFunc_BooleanAND_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_15, bool* CallFunc_BooleanOR_ReturnValue_1, double CallFunc_FClamp01_ReturnValue, const TArray<struct FRotator>& K2Node_MakeArray_Array, const TArray<struct FRotator>& K2Node_MakeArray_Array_1, bool CallFunc_ShouldASACameraSwitchToOld_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_16, bool* CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_17, bool CallFunc_BooleanAND_ReturnValue_18, double* CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_SelectFloat_ReturnValue_2, double* CallFunc_SelectFloat_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double* CallFunc_SelectFloat_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, double* CallFunc_Subtract_DoubleDouble_ReturnValue_9, bool* CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_19, bool* CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool* CallFunc_IsBaseUnresolved_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_20, bool* CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_21, bool CallFunc_BooleanAND_ReturnValue_22, bool* CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_23, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, bool* CallFunc_BooleanOR_ReturnValue_6, double* K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast_1, float CallFunc_Array_Set_Item_ImplicitCast_2, float CallFunc_Array_Set_Item_ImplicitCast_3, double* CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast, double* CallFunc_GroundIK_DeltaTime_ImplicitCast, double* CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast, double K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast, double K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast, double K2Node_VariableSet_MinSprintSpeed_ImplicitCast, double* K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_Add_DoubleFloat_B_ImplicitCast_1, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float K2Node_StructMemberSet___FloatProperty_156_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast_2, float* K2Node_StructMemberSet___FloatProperty_17_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ExecuteUbergraph_BaseHumanAnimBP");

	Params::UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.K2Node_CustomEvent_PawnOwner = K2Node_CustomEvent_PawnOwner;
	Parms.K2Node_CustomEvent_DeltaTime = K2Node_CustomEvent_DeltaTime;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetAimOffsets_ReturnValue = CallFunc_GetAimOffsets_ReturnValue;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue = CallFunc_Add_DoubleFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_2 = CallFunc_Greater_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_GetRole_ReturnValue = CallFunc_GetRole_ReturnValue;
	Parms.CallFunc_GetRole_ReturnValue_1 = CallFunc_GetRole_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_3 = CallFunc_Greater_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue_1 = CallFunc_GetMovementComponent_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetAdditiveStandingAnim_OutBlendOutTime = CallFunc_GetAdditiveStandingAnim_OutBlendOutTime;
	Parms.CallFunc_GetAlternateStandingAnim_ReturnValue = CallFunc_GetAlternateStandingAnim_ReturnValue;
	Parms.CallFunc_UseAdditiveStandingAnim_ReturnValue = CallFunc_UseAdditiveStandingAnim_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_IsSitting_ReturnValue = CallFunc_IsSitting_ReturnValue;
	Parms.CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue = CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_4 = CallFunc_Greater_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_5 = CallFunc_Greater_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_11 = CallFunc_EqualEqual_ByteByte_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_12 = CallFunc_EqualEqual_ByteByte_ReturnValue_12;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_6 = CallFunc_Greater_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_DoubleToFloat_ReturnValue = CallFunc_DoubleToFloat_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_7 = CallFunc_Greater_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_8 = CallFunc_Greater_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_9 = CallFunc_Greater_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_13 = CallFunc_EqualEqual_ByteByte_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_14 = CallFunc_EqualEqual_ByteByte_ReturnValue_14;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_15 = CallFunc_EqualEqual_ByteByte_ReturnValue_15;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_16 = CallFunc_EqualEqual_ByteByte_ReturnValue_16;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_17 = CallFunc_EqualEqual_ByteByte_ReturnValue_17;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_18 = CallFunc_EqualEqual_ByteByte_ReturnValue_18;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_19 = CallFunc_EqualEqual_ByteByte_ReturnValue_19;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_20 = CallFunc_EqualEqual_ByteByte_ReturnValue_20;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_21 = CallFunc_EqualEqual_ByteByte_ReturnValue_21;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_10 = CallFunc_Greater_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Add_DoubleFloat_ReturnValue_1 = CallFunc_Add_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_11 = CallFunc_Greater_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_22 = CallFunc_EqualEqual_ByteByte_ReturnValue_22;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_23 = CallFunc_EqualEqual_ByteByte_ReturnValue_23;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_24 = CallFunc_EqualEqual_ByteByte_ReturnValue_24;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_25 = CallFunc_EqualEqual_ByteByte_ReturnValue_25;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_12 = CallFunc_Greater_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_26 = CallFunc_EqualEqual_ByteByte_ReturnValue_26;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_13 = CallFunc_Greater_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_14 = CallFunc_Greater_DoubleDouble_ReturnValue_14;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_15 = CallFunc_Greater_DoubleDouble_ReturnValue_15;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_16 = CallFunc_Greater_DoubleDouble_ReturnValue_16;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue = CallFunc_Montage_IsPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_27 = CallFunc_EqualEqual_ByteByte_ReturnValue_27;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_17 = CallFunc_Greater_DoubleDouble_ReturnValue_17;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Montage_IsPlaying_ReturnValue_1 = CallFunc_Montage_IsPlaying_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_BooleanAND_ReturnValue_14 = CallFunc_BooleanAND_ReturnValue_14;
	Parms.CallFunc_BooleanAND_ReturnValue_15 = CallFunc_BooleanAND_ReturnValue_15;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_ShouldASACameraSwitchToOld_ReturnValue = CallFunc_ShouldASACameraSwitchToOld_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue = CallFunc_ShouldUseASACamera_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue_1 = CallFunc_ShouldUseASACamera_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_16 = CallFunc_BooleanAND_ReturnValue_16;
	Parms.CallFunc_BooleanAND_ReturnValue_17 = CallFunc_BooleanAND_ReturnValue_17;
	Parms.CallFunc_BooleanAND_ReturnValue_18 = CallFunc_BooleanAND_ReturnValue_18;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_19 = CallFunc_BooleanAND_ReturnValue_19;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_20 = CallFunc_BooleanAND_ReturnValue_20;
	Parms.CallFunc_BooleanAND_ReturnValue_21 = CallFunc_BooleanAND_ReturnValue_21;
	Parms.CallFunc_BooleanAND_ReturnValue_22 = CallFunc_BooleanAND_ReturnValue_22;
	Parms.CallFunc_BooleanAND_ReturnValue_23 = CallFunc_BooleanAND_ReturnValue_23;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Array_Set_Item_ImplicitCast = CallFunc_Array_Set_Item_ImplicitCast;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_1 = CallFunc_Array_Set_Item_ImplicitCast_1;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_2 = CallFunc_Array_Set_Item_ImplicitCast_2;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_3 = CallFunc_Array_Set_Item_ImplicitCast_3;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast = CallFunc_Add_DoubleFloat_B_ImplicitCast;
	Parms.K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast = K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast;
	Parms.K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast = K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast;
	Parms.K2Node_VariableSet_MinSprintSpeed_ImplicitCast = K2Node_VariableSet_MinSprintSpeed_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast_1 = CallFunc_Add_DoubleFloat_B_ImplicitCast_1;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_StructMemberSet___FloatProperty_156_ImplicitCast = K2Node_StructMemberSet___FloatProperty_156_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.K2Node_Select_Option_0_ImplicitCast_1 = K2Node_Select_Option_0_ImplicitCast_1;
	Parms.K2Node_Select_Option_0_ImplicitCast_2 = K2Node_Select_Option_0_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetValidValue_ReturnValue != nullptr)
		*CallFunc_GetValidValue_ReturnValue = Parms.CallFunc_GetValidValue_ReturnValue;

	if (CallFunc_SelectFloat_ReturnValue != nullptr)
		*CallFunc_SelectFloat_ReturnValue = Parms.CallFunc_SelectFloat_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_GetDinoRidingMoveAnimation_ReturnValue != nullptr)
		*CallFunc_GetDinoRidingMoveAnimation_ReturnValue = Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_K2_GetActorRotation_ReturnValue != nullptr)
		*CallFunc_K2_GetActorRotation_ReturnValue = std::move(Parms.CallFunc_K2_GetActorRotation_ReturnValue);

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_Conv_VectorToRotator_ReturnValue != nullptr)
		*CallFunc_Conv_VectorToRotator_ReturnValue = std::move(Parms.CallFunc_Conv_VectorToRotator_ReturnValue);

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue;

	if (CallFunc_GetAimOffsets_TheRootYawSpeed != nullptr)
		*CallFunc_GetAimOffsets_TheRootYawSpeed = Parms.CallFunc_GetAimOffsets_TheRootYawSpeed;

	if (CallFunc_IsOnSeatingStructure_ReturnValue != nullptr)
		*CallFunc_IsOnSeatingStructure_ReturnValue = Parms.CallFunc_IsOnSeatingStructure_ReturnValue;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_1;

	if (CallFunc_GetVelocity_ReturnValue_1 != nullptr)
		*CallFunc_GetVelocity_ReturnValue_1 = std::move(Parms.CallFunc_GetVelocity_ReturnValue_1);

	if (CallFunc_GetAdditiveStandingAnim_OutBlendInTime != nullptr)
		*CallFunc_GetAdditiveStandingAnim_OutBlendInTime = Parms.CallFunc_GetAdditiveStandingAnim_OutBlendInTime;

	if (CallFunc_GetAlternateStandingAnim_OutBlendInTime != nullptr)
		*CallFunc_GetAlternateStandingAnim_OutBlendInTime = Parms.CallFunc_GetAlternateStandingAnim_OutBlendInTime;

	if (CallFunc_GetDefaultMovementSpeed_ReturnValue != nullptr)
		*CallFunc_GetDefaultMovementSpeed_ReturnValue = Parms.CallFunc_GetDefaultMovementSpeed_ReturnValue;

	if (CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1 != nullptr)
		*CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1 = Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1;

	if (CallFunc_ForceTPVTargetingAnimation_ReturnValue != nullptr)
		*CallFunc_ForceTPVTargetingAnimation_ReturnValue = Parms.CallFunc_ForceTPVTargetingAnimation_ReturnValue;

	if (CallFunc_AnimUseAimOffset_ReturnValue != nullptr)
		*CallFunc_AnimUseAimOffset_ReturnValue = Parms.CallFunc_AnimUseAimOffset_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_2;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_3;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_4 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_4 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_4;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_5 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_5 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_5;

	if (CallFunc_FClamp_ReturnValue_2 != nullptr)
		*CallFunc_FClamp_ReturnValue_2 = Parms.CallFunc_FClamp_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue_3 != nullptr)
		*CallFunc_FClamp_ReturnValue_3 = Parms.CallFunc_FClamp_ReturnValue_3;

	if (CallFunc_GetMoveAnimRate_ReturnValue != nullptr)
		*CallFunc_GetMoveAnimRate_ReturnValue = Parms.CallFunc_GetMoveAnimRate_ReturnValue;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_6 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_6 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_6;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_7 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_7 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_7;

	if (CallFunc_FClamp_ReturnValue_4 != nullptr)
		*CallFunc_FClamp_ReturnValue_4 = Parms.CallFunc_FClamp_ReturnValue_4;

	if (CallFunc_ComposeRotators_ReturnValue_1 != nullptr)
		*CallFunc_ComposeRotators_ReturnValue_1 = std::move(Parms.CallFunc_ComposeRotators_ReturnValue_1);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_8 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_8 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_8;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_SelectFloat_ReturnValue_1 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_1 = Parms.CallFunc_SelectFloat_ReturnValue_1;

	if (CallFunc_SelectFloat_ReturnValue_2 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_2 = Parms.CallFunc_SelectFloat_ReturnValue_2;

	if (CallFunc_SelectFloat_ReturnValue_3 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_3 = Parms.CallFunc_SelectFloat_ReturnValue_3;

	if (CallFunc_SelectFloat_ReturnValue_4 != nullptr)
		*CallFunc_SelectFloat_ReturnValue_4 = Parms.CallFunc_SelectFloat_ReturnValue_4;

	if (CallFunc_Subtract_DoubleDouble_ReturnValue_9 != nullptr)
		*CallFunc_Subtract_DoubleDouble_ReturnValue_9 = Parms.CallFunc_Subtract_DoubleDouble_ReturnValue_9;

	if (CallFunc_BooleanOR_ReturnValue_3 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_3 = Parms.CallFunc_BooleanOR_ReturnValue_3;

	if (CallFunc_EqualEqual_ObjectObject_ReturnValue != nullptr)
		*CallFunc_EqualEqual_ObjectObject_ReturnValue = Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue;

	if (CallFunc_IsBaseUnresolved_ReturnValue != nullptr)
		*CallFunc_IsBaseUnresolved_ReturnValue = Parms.CallFunc_IsBaseUnresolved_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_4 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_4 = Parms.CallFunc_BooleanOR_ReturnValue_4;

	if (CallFunc_BooleanOR_ReturnValue_5 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_5 = Parms.CallFunc_BooleanOR_ReturnValue_5;

	if (CallFunc_BooleanOR_ReturnValue_6 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_6 = Parms.CallFunc_BooleanOR_ReturnValue_6;

	if (K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast != nullptr)
		*K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast = Parms.K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast;

	if (CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast = Parms.CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast;

	if (CallFunc_GroundIK_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_GroundIK_DeltaTime_ImplicitCast = Parms.CallFunc_GroundIK_DeltaTime_ImplicitCast;

	if (CallFunc_Subtract_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast;

	if (K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast != nullptr)
		*K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast = Parms.K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast;

	if (K2Node_StructMemberSet___FloatProperty_17_ImplicitCast != nullptr)
		*K2Node_StructMemberSet___FloatProperty_17_ImplicitCast = Parms.K2Node_StructMemberSet___FloatProperty_17_ImplicitCast;

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


