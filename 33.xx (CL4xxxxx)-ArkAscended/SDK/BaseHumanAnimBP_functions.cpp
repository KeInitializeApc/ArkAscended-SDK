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
// class AShooterCharacter*           ShooterCharacter                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue          (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange        (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetBoneModifierValue_ReturnValue                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, Interp)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1      (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_1                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2      (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_2                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3      (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_3                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4      (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_4                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5      (ConstParm, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_5                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp, NonTransactional)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ObjectIsA_ReturnValue_1                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UBaseHumanAnimBP_C::Update_Character_Creator_Values(const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange, const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1, const struct FPlayerDynamicMaterialFloat& CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5, bool CallFunc_ObjectIsA_ReturnValue, bool CallFunc_ObjectIsA_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
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
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

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

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

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
// double                             DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             InterpSpeed                                                      (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// double                             Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Speed                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_6                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_7                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_8                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_9                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_10                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_11                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_12                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_13                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_14                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_15                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_16                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_17                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_18                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_19                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_20                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_21                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_22                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_23                                (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_3                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_4                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_5                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_6                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_7                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_8                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_9                        (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_10                       (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_11                       (BlueprintVisible, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast              (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast             (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast          (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast          (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHead_ImplicitCast               (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast              (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast           (Edit, BlueprintReadOnly, Parm, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast            (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideSpine_ImplicitCast              (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast   (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::InterpLayeringValues(double* InterpSpeed, double* Speed, double* CallFunc_FInterpTo_Current_ImplicitCast, double* CallFunc_FInterpTo_Current_ImplicitCast_1, double* CallFunc_FInterpTo_Current_ImplicitCast_2, double* CallFunc_FInterpTo_Current_ImplicitCast_3, double* CallFunc_FInterpTo_Current_ImplicitCast_4, double* CallFunc_FInterpTo_Current_ImplicitCast_5, double* CallFunc_FInterpTo_Current_ImplicitCast_6, double* CallFunc_FInterpTo_Current_ImplicitCast_7, double* CallFunc_FInterpTo_Current_ImplicitCast_8, double* CallFunc_FInterpTo_Current_ImplicitCast_9, double* CallFunc_FInterpTo_Current_ImplicitCast_10, double* CallFunc_FInterpTo_Current_ImplicitCast_11, float K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast, float K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideSpine_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "InterpLayeringValues");

	Params::UBaseHumanAnimBP_C_InterpLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpSpeed != nullptr)
		*InterpSpeed = Parms.InterpSpeed;

	if (Speed != nullptr)
		*Speed = Parms.Speed;

	if (CallFunc_FInterpTo_Current_ImplicitCast != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast = Parms.CallFunc_FInterpTo_Current_ImplicitCast;

	if (CallFunc_FInterpTo_Current_ImplicitCast_1 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_1 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_1;

	if (CallFunc_FInterpTo_Current_ImplicitCast_2 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_2 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_2;

	if (CallFunc_FInterpTo_Current_ImplicitCast_3 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_3 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_3;

	if (CallFunc_FInterpTo_Current_ImplicitCast_4 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_4 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_4;

	if (CallFunc_FInterpTo_Current_ImplicitCast_5 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_5 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_5;

	if (CallFunc_FInterpTo_Current_ImplicitCast_6 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_6 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_6;

	if (CallFunc_FInterpTo_Current_ImplicitCast_7 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_7 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_7;

	if (CallFunc_FInterpTo_Current_ImplicitCast_8 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_8 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_8;

	if (CallFunc_FInterpTo_Current_ImplicitCast_9 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_9 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_9;

	if (CallFunc_FInterpTo_Current_ImplicitCast_10 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_10 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_10;

	if (CallFunc_FInterpTo_Current_ImplicitCast_11 != nullptr)
		*CallFunc_FInterpTo_Current_ImplicitCast_11 = Parms.CallFunc_FInterpTo_Current_ImplicitCast_11;

	if (K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideSpine_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideSpine_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideSpine_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Out                                                              (ConstParm, ExportObject, Net, Parm, OutParm, Transient, Config)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Map_Find_Value                                          (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

double UBaseHumanAnimBP_C::Get_IKWorld_Interp_Speed(double* Out, bool* CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Get IKWorld Interp Speed");

	Params::UBaseHumanAnimBP_C_Get_IKWorld_Interp_Speed_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast = CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

	if (CallFunc_Map_Find_ReturnValue != nullptr)
		*CallFunc_Map_Find_ReturnValue = Parms.CallFunc_Map_Find_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue                      (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAlphaBlendArgs             K2Node_MakeStruct_AlphaBlendArgs_2                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue_1                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue_1                             (Edit, ExportObject, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue_1                    (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             K2Node_VariableSet_TraceDistanceFactorBelow_ImplicitCast         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::GroundIK(struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue, struct FAlphaBlendArgs* K2Node_MakeStruct_AlphaBlendArgs_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class APrimalDinoCharacter* CallFunc_GetBasedOnDino_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsAlive_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanAND_ReturnValue_4, int32* CallFunc_Add_IntInt_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_6, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GroundIK");

	Params::UBaseHumanAnimBP_C_GroundIK_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_IsFirstPerson_ReturnValue = CallFunc_IsFirstPerson_ReturnValue;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue = CallFunc_ShouldEnableIKBasedOn_ReturnValue;
	Parms.CallFunc_GetBasedOnDino_ReturnValue = CallFunc_GetBasedOnDino_ReturnValue;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue_1 = CallFunc_ShouldEnableIKBasedOn_ReturnValue_1;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeStruct_AlphaBlendArgs != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs);

	if (K2Node_MakeStruct_AlphaBlendArgs_1 != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs_1 = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs_1);

	if (K2Node_MakeStruct_AlphaBlendArgs_2 != nullptr)
		*K2Node_MakeStruct_AlphaBlendArgs_2 = std::move(Parms.K2Node_MakeStruct_AlphaBlendArgs_2);

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue_2 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_2 = Parms.CallFunc_BooleanAND_ReturnValue_2;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_BooleanOR_ReturnValue_3 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_3 = Parms.CallFunc_BooleanOR_ReturnValue_3;

	if (CallFunc_BooleanAND_ReturnValue_3 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_3 = Parms.CallFunc_BooleanAND_ReturnValue_3;

	if (CallFunc_BooleanAND_ReturnValue_4 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_4 = Parms.CallFunc_BooleanAND_ReturnValue_4;

	if (CallFunc_Add_IntInt_ReturnValue != nullptr)
		*CallFunc_Add_IntInt_ReturnValue = Parms.CallFunc_Add_IntInt_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;

	if (CallFunc_BooleanAND_ReturnValue_5 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_5 = Parms.CallFunc_BooleanAND_ReturnValue_5;

	if (CallFunc_BooleanAND_ReturnValue_6 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_6 = Parms.CallFunc_BooleanAND_ReturnValue_6;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_6                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_7                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_8                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_9                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_10                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_11                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_12                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_13                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_14                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_15                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_16                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_17                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_18                            (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_4                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_5                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_6                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_7                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_8                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_9                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_10                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_11                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_12                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_13                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_14                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)

double UBaseHumanAnimBP_C::UpdatePoseLayering(float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue_4, float CallFunc_GetCurveValue_ReturnValue_5, float CallFunc_GetCurveValue_ReturnValue_6, float CallFunc_GetCurveValue_ReturnValue_7, float CallFunc_GetCurveValue_ReturnValue_8, float CallFunc_GetCurveValue_ReturnValue_9, float CallFunc_GetCurveValue_ReturnValue_10, float CallFunc_GetCurveValue_ReturnValue_11, float CallFunc_GetCurveValue_ReturnValue_12, float CallFunc_GetCurveValue_ReturnValue_13, float CallFunc_GetCurveValue_ReturnValue_14, float CallFunc_GetCurveValue_ReturnValue_15, bool* CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_16, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue_17, float CallFunc_GetCurveValue_ReturnValue_18, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue_5, bool* CallFunc_BooleanOR_ReturnValue_6, bool* CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_BooleanOR_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdatePoseLayering");

	Params::UBaseHumanAnimBP_C_UpdatePoseLayering_Params Parms{};

	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue_2 = CallFunc_GetCurveValue_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue_3 = CallFunc_GetCurveValue_ReturnValue_3;
	Parms.CallFunc_GetCurveValue_ReturnValue_4 = CallFunc_GetCurveValue_ReturnValue_4;
	Parms.CallFunc_GetCurveValue_ReturnValue_5 = CallFunc_GetCurveValue_ReturnValue_5;
	Parms.CallFunc_GetCurveValue_ReturnValue_6 = CallFunc_GetCurveValue_ReturnValue_6;
	Parms.CallFunc_GetCurveValue_ReturnValue_7 = CallFunc_GetCurveValue_ReturnValue_7;
	Parms.CallFunc_GetCurveValue_ReturnValue_8 = CallFunc_GetCurveValue_ReturnValue_8;
	Parms.CallFunc_GetCurveValue_ReturnValue_9 = CallFunc_GetCurveValue_ReturnValue_9;
	Parms.CallFunc_GetCurveValue_ReturnValue_10 = CallFunc_GetCurveValue_ReturnValue_10;
	Parms.CallFunc_GetCurveValue_ReturnValue_11 = CallFunc_GetCurveValue_ReturnValue_11;
	Parms.CallFunc_GetCurveValue_ReturnValue_12 = CallFunc_GetCurveValue_ReturnValue_12;
	Parms.CallFunc_GetCurveValue_ReturnValue_13 = CallFunc_GetCurveValue_ReturnValue_13;
	Parms.CallFunc_GetCurveValue_ReturnValue_14 = CallFunc_GetCurveValue_ReturnValue_14;
	Parms.CallFunc_GetCurveValue_ReturnValue_15 = CallFunc_GetCurveValue_ReturnValue_15;
	Parms.CallFunc_GetCurveValue_ReturnValue_16 = CallFunc_GetCurveValue_ReturnValue_16;
	Parms.CallFunc_GetCurveValue_ReturnValue_17 = CallFunc_GetCurveValue_ReturnValue_17;
	Parms.CallFunc_GetCurveValue_ReturnValue_18 = CallFunc_GetCurveValue_ReturnValue_18;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

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

	if (CallFunc_BooleanAND_ReturnValue_2 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_2 = Parms.CallFunc_BooleanAND_ReturnValue_2;

	if (CallFunc_BooleanAND_ReturnValue_3 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_3 = Parms.CallFunc_BooleanAND_ReturnValue_3;

	if (CallFunc_BooleanOR_ReturnValue_7 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_7 = Parms.CallFunc_BooleanOR_ReturnValue_7;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ConstParm, BlueprintReadOnly, Net, OutParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue                       (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ConstParm, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (Edit, ConstParm, OutParm, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue_1                     (BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (BlueprintVisible, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ConstParm, ExportObject, Parm, ReturnParm, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)

double UBaseHumanAnimBP_C::GetLeanAmount(struct FVector2D* Output, const struct FVector& CallFunc_MakeVector_ReturnValue, bool* CallFunc_EqualEqual_RotatorRotator_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, struct FVector* CallFunc_Add_VectorVector_ReturnValue, double* CallFunc_FClamp01_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue_1, double CallFunc_BreakVector_Z_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool* CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, struct FVector2D* CallFunc_Multiply_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetLeanAmount");

	Params::UBaseHumanAnimBP_C_GetLeanAmount_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue = CallFunc_Conv_DoubleToVector2D_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue_1 = CallFunc_Conv_DoubleToVector2D_ReturnValue_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	if (CallFunc_EqualEqual_RotatorRotator_ReturnValue != nullptr)
		*CallFunc_EqualEqual_RotatorRotator_ReturnValue = Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (CallFunc_Add_VectorVector_ReturnValue != nullptr)
		*CallFunc_Add_VectorVector_ReturnValue = std::move(Parms.CallFunc_Add_VectorVector_ReturnValue);

	if (CallFunc_FClamp01_ReturnValue != nullptr)
		*CallFunc_FClamp01_ReturnValue = Parms.CallFunc_FClamp01_ReturnValue;

	if (CallFunc_EqualEqual_VectorVector_ReturnValue != nullptr)
		*CallFunc_EqualEqual_VectorVector_ReturnValue = Parms.CallFunc_EqualEqual_VectorVector_ReturnValue;

	if (CallFunc_Multiply_Vector2DVector2D_ReturnValue != nullptr)
		*CallFunc_Multiply_Vector2DVector2D_ReturnValue = std::move(Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue);

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
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateMoveAnim_Layering(const struct FAnimUpdateContext& Context, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, const struct FSequenceEvaluatorReference& CallFunc_SetExplicitTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim_Layering");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_SetExplicitTime_ReturnValue = CallFunc_SetExplicitTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (Edit, ConstParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateLayeringValues(double* K2Node_VariableSet_Layering_Spine_ImplicitCast, double* K2Node_VariableSet_Layering_R_Hand_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_C_UpdateLayeringValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_Layering_Spine_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_Spine_ImplicitCast = Parms.K2Node_VariableSet_Layering_Spine_ImplicitCast;

	if (K2Node_VariableSet_Layering_R_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Hand_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1                    (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2                    (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3                    (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4                    (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::UpdateWeaponIKNonThreadSafe(const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIKNonThreadSafe");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params Parms{};

	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue;

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1 != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1 = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1;

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2 != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2 = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2;

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3 != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3 = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3;

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4 != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4 = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// float                              K2Node_VariableSet_RightHandIKAlpha_ImplicitCast                 (EditFixedSize, Parm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateWeaponIK(float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double* CallFunc_FClamp_ReturnValue, double* CallFunc_FClamp_ReturnValue_1, float K2Node_VariableSet_RightHandIKAlpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIK");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIK_Params Parms{};

	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_VariableSet_RightHandIKAlpha_ImplicitCast = K2Node_VariableSet_RightHandIKAlpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_PredictGroundMovementStopLocation_ReturnValue           (ConstParm, BlueprintReadOnly, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_VSizeXY_ReturnValue                                     (ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, Config, EditConst, SubobjectReference)

void UBaseHumanAnimBP_C::GetPredictedStopDistance(double* ReturnValue, const struct FVector& CallFunc_PredictGroundMovementStopLocation_ReturnValue, double* CallFunc_VSizeXY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetPredictedStopDistance");

	Params::UBaseHumanAnimBP_C_GetPredictedStopDistance_Params Parms{};

	Parms.CallFunc_PredictGroundMovementStopLocation_ReturnValue = CallFunc_PredictGroundMovementStopLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

	if (CallFunc_VSizeXY_ReturnValue != nullptr)
		*CallFunc_VSizeXY_ReturnValue = Parms.CallFunc_VSizeXY_ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UBaseHumanAnimBP_C::ShouldDistanceMatchStop(bool* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ShouldDistanceMatchStop");

	Params::UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// double                             DistanceToMatch                                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_GetPredictedStopDistance_ReturnValue                    (Edit, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateStopAnim(const struct FAnimUpdateContext& Context, double DistanceToMatch, bool* CallFunc_ShouldDistanceMatchStop_ReturnValue, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, bool CallFunc_ConvertToSequenceEvaluatorPure_Result_1, float* CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateStopAnim");

	Params::UBaseHumanAnimBP_C_UpdateStopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.DistanceToMatch = DistanceToMatch;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result_1 = CallFunc_ConvertToSequenceEvaluatorPure_Result_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ShouldDistanceMatchStop_ReturnValue != nullptr)
		*CallFunc_ShouldDistanceMatchStop_ReturnValue = Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue;

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1 = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1);

	if (CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast != nullptr)
		*CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast = Parms.CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.SetUpStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::SetUpStopAnim(const struct FAnimUpdateContext& Context, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, bool CallFunc_ConvertToSequenceEvaluatorPure_Result, bool* CallFunc_ShouldDistanceMatchStop_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SetUpStopAnim");

	Params::UBaseHumanAnimBP_C_SetUpStopAnim_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_ConvertToSequenceEvaluatorPure_Result = CallFunc_ConvertToSequenceEvaluatorPure_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	if (CallFunc_ShouldDistanceMatchStop_ReturnValue != nullptr)
		*CallFunc_ShouldDistanceMatchStop_ReturnValue = Parms.CallFunc_ShouldDistanceMatchStop_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_GetLeanAmount_Output                                    (ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_Vector2DInterpTo_Constant_ReturnValue                   (Edit, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ConstParm, Net, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetLeanAmount_DeltaTime_ImplicitCast                    (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_Vector2DInterpTo_Constant_DeltaTime_ImplicitCast        (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateAccelerationData(struct FRotator* CallFunc_ComposeRotators_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Divide_VectorVector_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateAccelerationData");

	Params::UBaseHumanAnimBP_C_UpdateAccelerationData_Params Parms{};

	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (CallFunc_Conv_DoubleToVector_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToVector_ReturnValue = std::move(Parms.CallFunc_Conv_DoubleToVector_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Divide_VectorVector_ReturnValue != nullptr)
		*CallFunc_Divide_VectorVector_ReturnValue = std::move(Parms.CallFunc_Divide_VectorVector_ReturnValue);

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (Edit, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_2                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UAnimSequence*               K2Node_Select_Default_4                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, EditConst, SubobjectReference)

class UAnimSequence* UBaseHumanAnimBP_C::UpdateMoveAnim(const struct FAnimUpdateContext& Context, bool* CallFunc_ConvertToSequencePlayerPure_Result, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue, struct FSequencePlayerReference* CallFunc_SetPlayRate_ReturnValue, float* CallFunc_SetPlayRate_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Params Parms{};

	Parms.Context = Context;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_ConvertToSequencePlayerPure_Result != nullptr)
		*CallFunc_ConvertToSequencePlayerPure_Result = Parms.CallFunc_ConvertToSequencePlayerPure_Result;

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
// double                             DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               AllowUpdateDirectionJumpAngle                                    (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// double                             Temp_real_Variable_1                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (Edit, ConstParm, Net, EditFixedSize, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_2                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_3                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue_1                        (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_4                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_5                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_6                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_7                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, EditorOnly)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_8                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_9                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp, EditorOnly)
// enum class E_CardinalDirection4    CallFunc_SelectCardinalDirectionFromAngle_Direction              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_Current_ImplicitCast                 (ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_NewEnumerator2_ImplicitCast                        (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast           (Edit, ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngle_ImplicitCast               (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateVelocityData(bool AllowUpdateDirectionJumpAngle, struct FVector* CallFunc_Vector_Normal2D_ReturnValue, struct FRotator* CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool* K2Node_SwitchEnum_CmpSuccess, double CallFunc_SafeDivide_ReturnValue, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_Vector_IsNearlyZero_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue_3, struct FRotator* CallFunc_ComposeRotators_ReturnValue_1, struct FVector* CallFunc_VInterpTo_Constant_ReturnValue, float* CallFunc_CalculateDirection_ReturnValue, float* CallFunc_CalculateDirection_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_4, double* CallFunc_FClamp_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_6, double* CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_FInterpTo_Constant_ReturnValue_7, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, double CallFunc_FInterpTo_Constant_ReturnValue_8, bool* CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, double* CallFunc_Add_DoubleFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_Constant_ReturnValue_9, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, double CallFunc_SelectFloat_A_ImplicitCast, double* CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast, double CallFunc_Add_DoubleFloat_A_ImplicitCast, double* CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateVelocityData");

	Params::UBaseHumanAnimBP_C_UpdateVelocityData_Params Parms{};

	Parms.AllowUpdateDirectionJumpAngle = AllowUpdateDirectionJumpAngle;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Vector_IsNearlyZero_ReturnValue = CallFunc_Vector_IsNearlyZero_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_2 = CallFunc_FInterpTo_Constant_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_3 = CallFunc_FInterpTo_Constant_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_4 = CallFunc_FInterpTo_Constant_ReturnValue_4;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_5 = CallFunc_FInterpTo_Constant_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_6 = CallFunc_FInterpTo_Constant_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_7 = CallFunc_FInterpTo_Constant_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_8 = CallFunc_FInterpTo_Constant_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_9 = CallFunc_FInterpTo_Constant_ReturnValue_9;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast = CallFunc_Add_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Vector_Normal2D_ReturnValue != nullptr)
		*CallFunc_Vector_Normal2D_ReturnValue = std::move(Parms.CallFunc_Vector_Normal2D_ReturnValue);

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_ComposeRotators_ReturnValue_1 != nullptr)
		*CallFunc_ComposeRotators_ReturnValue_1 = std::move(Parms.CallFunc_ComposeRotators_ReturnValue_1);

	if (CallFunc_VInterpTo_Constant_ReturnValue != nullptr)
		*CallFunc_VInterpTo_Constant_ReturnValue = std::move(Parms.CallFunc_VInterpTo_Constant_ReturnValue);

	if (CallFunc_CalculateDirection_ReturnValue != nullptr)
		*CallFunc_CalculateDirection_ReturnValue = Parms.CallFunc_CalculateDirection_ReturnValue;

	if (CallFunc_CalculateDirection_ReturnValue_1 != nullptr)
		*CallFunc_CalculateDirection_ReturnValue_1 = Parms.CallFunc_CalculateDirection_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast;

	if (CallFunc_SelectFloat_B_ImplicitCast != nullptr)
		*CallFunc_SelectFloat_B_ImplicitCast = Parms.CallFunc_SelectFloat_B_ImplicitCast;

	if (K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast != nullptr)
		*K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast = Parms.K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast;

	if (CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast != nullptr)
		*CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast = Parms.CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast           (ConstParm, BlueprintReadOnly, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)

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
// double                             Angle                                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             DeadZone                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class E_CardinalDirection4    CurrentDirection                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               UseCurrentDirection                                              (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class E_CardinalDirection4    Direction                                                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             BwdDeadZone                                                      (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             FwdDeadZone                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             AbsAngle                                                         (BlueprintVisible, ExportObject, Parm, EditConst, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)

double UBaseHumanAnimBP_C::SelectCardinalDirectionFromAngle(double Angle, double DeadZone, enum class E_CardinalDirection4* CurrentDirection, double* FwdDeadZone, double AbsAngle, bool* K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SelectCardinalDirectionFromAngle");

	Params::UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.DeadZone = DeadZone;
	Parms.AbsAngle = AbsAngle;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentDirection != nullptr)
		*CurrentDirection = Parms.CurrentDirection;

	if (FwdDeadZone != nullptr)
		*FwdDeadZone = Parms.FwdDeadZone;

	if (K2Node_SwitchEnum_CmpSuccess != nullptr)
		*K2Node_SwitchEnum_CmpSuccess = Parms.K2Node_SwitchEnum_CmpSuccess;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast_1                                    (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcBlendspaceAxes(class AShooterCharacter** Character, struct FVector* CallFunc_GetVelocity_ReturnValue, struct FRotator* CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, bool* CallFunc_BooleanAND_ReturnValue, double CallFunc_SelectFloat_ReturnValue_3, double* CallFunc_Abs_A_ImplicitCast, double* CallFunc_Abs_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcBlendspaceAxes");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params Parms{};

	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_GetControlRotation_ReturnValue != nullptr)
		*CallFunc_GetControlRotation_ReturnValue = std::move(Parms.CallFunc_GetControlRotation_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Abs_A_ImplicitCast != nullptr)
		*CallFunc_Abs_A_ImplicitCast = Parms.CallFunc_Abs_A_ImplicitCast;

	if (CallFunc_Abs_A_ImplicitCast_1 != nullptr)
		*CallFunc_Abs_A_ImplicitCast_1 = Parms.CallFunc_Abs_A_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig)

void UBaseHumanAnimBP_C::UpdateGliderSuitVars(class AShooterCharacter** Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateGliderSuitVars");

	Params::UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, GlobalConfig)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcAimOffsets(class AShooterCharacter** Character, struct FRotator* CallFunc_GetControlRotation_ReturnValue, struct FVector* CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcAimOffsets");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params Parms{};

	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

	if (CallFunc_GetControlRotation_ReturnValue != nullptr)
		*CallFunc_GetControlRotation_ReturnValue = std::move(Parms.CallFunc_GetControlRotation_ReturnValue);

	if (CallFunc_GetForwardVector_ReturnValue != nullptr)
		*CallFunc_GetForwardVector_ReturnValue = std::move(Parms.CallFunc_GetForwardVector_ReturnValue);

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
// class UMovementComponent*          MovementComponent                                                (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// struct FVector                     Vector                                                           (Edit, BlueprintVisible, Net, OutParm)
// double                             ReturnValue                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// double                             Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::MapVelocityToBlendSpace(struct FVector* Vector, double* ReturnValue, double* Result, double* CallFunc_Dot_VectorVector_ReturnValue, double* CallFunc_FClamp_ReturnValue, double* CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "MapVelocityToBlendSpace");

	Params::UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	if (ReturnValue != nullptr)
		*ReturnValue = Parms.ReturnValue;

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
// class UAnimSequence*               AnimSeqIn                                                        (ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UAnimSequence*               AnimSeqOut                                                       (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimSequence*               CallFunc_GetOverridenAnimSequence_ReturnValue                    (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)

bool UBaseHumanAnimBP_C::GetCharSequenceNew(class UAnimSequence* AnimSeqIn, class UAnimSequence** AnimSeqOut, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, class UAnimSequence** CallFunc_GetOverridenAnimSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharSequenceNew");

	Params::UBaseHumanAnimBP_C_GetCharSequenceNew_Params Parms{};

	Parms.AnimSeqIn = AnimSeqIn;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimSeqOut != nullptr)
		*AnimSeqOut = Parms.AnimSeqOut;

	if (CallFunc_GetOverridenAnimSequence_ReturnValue != nullptr)
		*CallFunc_GetOverridenAnimSequence_ReturnValue = Parms.CallFunc_GetOverridenAnimSequence_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageIn                                                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UAnimMontage*                MontageOut                                                       (ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UAnimMontage* UBaseHumanAnimBP_C::GetCharMontageNew(class UAnimMontage** MontageIn, class UAnimMontage* MontageOut, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharMontageNew");

	Params::UBaseHumanAnimBP_C_GetCharMontageNew_Params Parms{};

	Parms.MontageOut = MontageOut;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;

	UObject::ProcessEvent(Func, &Parms);

	if (MontageIn != nullptr)
		*MontageIn = Parms.MontageIn;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimationMontage                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bPauseOnFinish                                                   (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// float                              PlayedAnimLength                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, EditConst, InstancedReference, SubobjectReference)
// class UAnimMontage*                CallFunc_GetCharMontageNew_MontageOut                            (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage* AnimationMontage, bool* bPauseOnFinish, float PlayedAnimLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintPlayAnimationEvent");

	Params::UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params Parms{};

	Parms.AnimationMontage = AnimationMontage;
	Parms.PlayedAnimLength = PlayedAnimLength;

	UObject::ProcessEvent(Func, &Parms);

	if (bPauseOnFinish != nullptr)
		*bPauseOnFinish = Parms.bPauseOnFinish;

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
// class APawn*                       PawnOwner                                                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// double                             DeltaTime                                                        (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     RootLocationOffset                                               (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              DeltaTimeX                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector                     PrevLocation                                                     (ConstParm, BlueprintReadOnly, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (ConstParm, BlueprintVisible, Net, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

void UBaseHumanAnimBP_C::OnCharacterStepped(struct FVector* PrevLocation, struct FVector* NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "OnCharacterStepped");

	Params::UBaseHumanAnimBP_C_OnCharacterStepped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PrevLocation != nullptr)
		*PrevLocation = std::move(Parms.PrevLocation);

	if (NewLocation != nullptr)
		*NewLocation = std::move(Parms.NewLocation);

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
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (Edit, ConstParm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable_3                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class APawn*                       K2Node_CustomEvent_PawnOwner                                     (Edit, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_CustomEvent_DeltaTime                                     (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_RootLocationOffset                            (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class APrimalBotCharacter*         K2Node_DynamicCast_AsPrimal_Bot_Character                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue                      (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_1                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, Interp)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVisualVelocity_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (Edit, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (Edit, ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAimOffsets_RootRotOffset                             (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetAimOffsets_TheRootYawSpeed                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetAimOffsets_RootLocOffset                             (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (Edit, ConstParm, BlueprintVisible, Net, Parm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsRunning_ReturnValue                                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsOnSeatingStructure_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// enum class ENetRole                CallFunc_GetRole_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue                     (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ENetRole                CallFunc_GetRole_ReturnValue_1                                   (BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue          (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendInTime                  (ConstParm, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendOutTime                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAdditiveStandingAnim_ReturnValue                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendInTime                 (Edit, BlueprintVisible, Net, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendOutTime                (Edit, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAlternateStandingAnim_ReturnValue                    (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_UseAdditiveStandingAnim_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_UseAlternateStandingAnim_ReturnValue                    (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_UseAltAimOffsetAnim_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AWeapClimbPick_C*            K2Node_DynamicCast_AsWeap_Climb_Pick                             (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue                     (Edit, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue_1                    (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_3                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsSitting_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue            (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ForceTPVTargetingAnimation_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_AnimUseAimOffset_ReturnValue                            (Edit, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AllowMountedWeaponry_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_2                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_GetMoveAnimRate_ReturnValue                             (BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetTPVHorizontalCameraOffset_ReturnValue                (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FPrimalCameraParams         CallFunc_GetPrimalCameraParams_OutCameraParams                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_4                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// struct FVector                     K2Node_Event_PrevLocation                                        (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector                     K2Node_Event_NewLocation                                         (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X_5                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_BreakVector_X_6                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_2                      (Edit, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_15                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (Edit, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_16                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// float                              K2Node_Select_Default                                            (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             K2Node_Select_Default_1                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Select_Default_2                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, EditConst, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_17                     (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, Config, EditConst, SubobjectReference, Interp)
// class UAnimMontage*                K2Node_Select_Default_3                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NoDestructor)
// float                              CallFunc_Montage_Play_ReturnValue                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_QInterpTo_ReturnValue                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array                                           (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array_1                                         (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (Edit, EditFixedSize, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (Edit, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_ShouldASACameraSwitchToOld_ReturnValue                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue_1                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UPrimitiveComponent*         CallFunc_GetBasedMovementComponent_ReturnValue                   (ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, NoDestructor)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (ConstParm, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (Edit, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsBaseUnresolved_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_1                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, Interp)
// float                              CallFunc_Array_Set_Item_ImplicitCast_2                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_3                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference, NonTransactional)
// double                             CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_GroundIK_DeltaTime_ImplicitCast                         (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast                                      (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast          (Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast         (BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_MinSprintSpeed_ImplicitCast                   (Edit, BlueprintVisible, ExportObject, Net, Parm, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_BallistaYaw_ImplicitCast                      (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast             (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_156_ImplicitCast          (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              K2Node_StructMemberSet___FloatProperty_160_ImplicitCast          (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditConst, SubobjectReference)
// float                              K2Node_Select_Option_0_ImplicitCast_1                            (ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              K2Node_Select_Option_0_ImplicitCast_2                            (ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_QInterpTo_InterpSpeed_ImplicitCast                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst, SubobjectReference)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_17_ImplicitCast           (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

float UBaseHumanAnimBP_C::ExecuteUbergraph_BaseHumanAnimBP(int32 EntryPoint, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue, double CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, class APawn* K2Node_CustomEvent_PawnOwner, double* K2Node_CustomEvent_DeltaTime, double* CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, class UAnimSequence* CallFunc_GetDinoRidingMoveAnimation_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, struct FRotator* CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double* CallFunc_FClamp_ReturnValue_1, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, struct FVector* CallFunc_GetVelocity_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, double CallFunc_BreakVector_Z, struct FRotator* CallFunc_ComposeRotators_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, float* CallFunc_GetAimOffsets_TheRootYawSpeed, const struct FRotator& CallFunc_GetAimOffsets_ReturnValue, double CallFunc_BreakVector_Z_1, double* CallFunc_Add_DoubleFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_3, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1, bool* CallFunc_IsOnSeatingStructure_ReturnValue, enum class ENetRole CallFunc_GetRole_ReturnValue, double CallFunc_BreakVector_Z_2, enum class ENetRole CallFunc_GetRole_ReturnValue_1, struct FVector* CallFunc_GetVelocity_ReturnValue_1, double CallFunc_BreakVector_Z_3, bool* CallFunc_Not_PreBool_ReturnValue_4, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_2, float CallFunc_GetAdditiveStandingAnim_OutBlendInTime, float* CallFunc_GetAdditiveStandingAnim_OutBlendOutTime, float CallFunc_GetAlternateStandingAnim_OutBlendOutTime, class UAnimSequence** CallFunc_GetAlternateStandingAnim_ReturnValue, bool* CallFunc_UseAdditiveStandingAnim_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_3, bool* CallFunc_ObjectIsChildOfSoftRef_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_4, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, class UAnimSequence* CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1, bool CallFunc_IsSitting_ReturnValue, bool CallFunc_IsUsingShield_ReturnValue, bool CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue, bool* CallFunc_ForceTPVTargetingAnimation_ReturnValue, bool* CallFunc_AnimUseAimOffset_ReturnValue, bool* CallFunc_BooleanOR_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_5, float* CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_6, double* CallFunc_DoubleToFloat_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_6, double* CallFunc_FClamp_ReturnValue_2, double* CallFunc_FClamp_ReturnValue_3, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_Z_4, bool* CallFunc_Not_PreBool_ReturnValue_7, bool* CallFunc_BooleanAND_ReturnValue_7, bool* CallFunc_BooleanAND_ReturnValue_8, float* CallFunc_GetMoveAnimRate_ReturnValue, double* CallFunc_Add_DoubleFloat_ReturnValue_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_FClamp_ReturnValue_4, double CallFunc_Multiply_DoubleFloat_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_6, float CallFunc_GetCurveValue_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_8, bool* CallFunc_Not_PreBool_ReturnValue_9, bool* CallFunc_Not_PreBool_ReturnValue_10, bool* CallFunc_BooleanAND_ReturnValue_9, double CallFunc_BreakVector_Z_5, double CallFunc_BreakVector_Z_6, double CallFunc_FInterpTo_Constant_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_11, bool* CallFunc_BooleanAND_ReturnValue_10, float* CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, struct FRotator* CallFunc_ComposeRotators_ReturnValue_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_7, bool* CallFunc_Montage_IsPlaying_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_12, bool* CallFunc_Not_PreBool_ReturnValue_13, bool* CallFunc_BooleanAND_ReturnValue_11, bool* CallFunc_BooleanAND_ReturnValue_12, bool* CallFunc_BooleanAND_ReturnValue_13, bool* CallFunc_Not_PreBool_ReturnValue_14, bool* CallFunc_Montage_IsPlaying_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_15, bool* CallFunc_BooleanAND_ReturnValue_14, bool* CallFunc_BooleanAND_ReturnValue_15, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_Not_PreBool_ReturnValue_16, double* CallFunc_FClamp01_ReturnValue, TArray<struct FRotator>* K2Node_MakeArray_Array, TArray<struct FRotator>* K2Node_MakeArray_Array_1, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool CallFunc_ShouldASACameraSwitchToOld_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_ShouldUseASACamera_ReturnValue_1, bool* CallFunc_BooleanAND_ReturnValue_16, bool* CallFunc_BooleanOR_ReturnValue_2, bool* CallFunc_Not_PreBool_ReturnValue_18, bool* CallFunc_BooleanAND_ReturnValue_17, bool* CallFunc_BooleanAND_ReturnValue_18, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_4, bool* CallFunc_BooleanOR_ReturnValue_3, class UPrimitiveComponent* CallFunc_GetBasedMovementComponent_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_19, class APrimalDinoCharacter* CallFunc_GetBasedOnDino_ReturnValue, bool CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_IsBaseUnresolved_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_20, bool* CallFunc_BooleanOR_ReturnValue_4, bool* CallFunc_BooleanAND_ReturnValue_21, bool* CallFunc_BooleanAND_ReturnValue_22, bool* CallFunc_BooleanOR_ReturnValue_5, bool* CallFunc_BooleanAND_ReturnValue_23, bool* CallFunc_BooleanOR_ReturnValue_6, double CallFunc_Percent_FloatFloat_ReturnValue, double K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast, float CallFunc_Array_Set_Item_ImplicitCast_1, float CallFunc_Array_Set_Item_ImplicitCast_2, float CallFunc_Array_Set_Item_ImplicitCast_3, double* CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast, double CallFunc_GroundIK_DeltaTime_ImplicitCast, double CallFunc_Add_DoubleFloat_A_ImplicitCast, double* CallFunc_Abs_A_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast, double* K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast, double K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast, double K2Node_VariableSet_MinSprintSpeed_ImplicitCast, double* K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Add_DoubleFloat_B_ImplicitCast_1, float* K2Node_StructMemberSet___FloatProperty_156_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float K2Node_StructMemberSet___FloatProperty_160_ImplicitCast, float K2Node_Select_Option_0_ImplicitCast_1, float K2Node_Select_Option_0_ImplicitCast_2, float K2Node_StructMemberSet___FloatProperty_17_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ExecuteUbergraph_BaseHumanAnimBP");

	Params::UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Conv_BoolToDouble_ReturnValue = CallFunc_Conv_BoolToDouble_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_CustomEvent_PawnOwner = K2Node_CustomEvent_PawnOwner;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue = CallFunc_GetDinoRidingMoveAnimation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue = CallFunc_TryGetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_DynamicCast_AsPrimal_Character = K2Node_DynamicCast_AsPrimal_Character;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_GetAimOffsets_ReturnValue = CallFunc_GetAimOffsets_ReturnValue;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_GetRole_ReturnValue = CallFunc_GetRole_ReturnValue;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_GetRole_ReturnValue_1 = CallFunc_GetRole_ReturnValue_1;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_GetMovementComponent_ReturnValue_1 = CallFunc_GetMovementComponent_ReturnValue_1;
	Parms.CallFunc_GetAdditiveStandingAnim_OutBlendInTime = CallFunc_GetAdditiveStandingAnim_OutBlendInTime;
	Parms.CallFunc_GetAlternateStandingAnim_OutBlendOutTime = CallFunc_GetAlternateStandingAnim_OutBlendOutTime;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1 = CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1;
	Parms.CallFunc_IsSitting_ReturnValue = CallFunc_IsSitting_ReturnValue;
	Parms.CallFunc_IsUsingShield_ReturnValue = CallFunc_IsUsingShield_ReturnValue;
	Parms.CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue = CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_5 = CallFunc_Multiply_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_6 = CallFunc_Multiply_DoubleFloat_ReturnValue_6;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_BreakVector_Z_6 = CallFunc_BreakVector_Z_6;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_SelectRotator_ReturnValue = CallFunc_SelectRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_7 = CallFunc_Multiply_DoubleFloat_ReturnValue_7;
	Parms.CallFunc_TryGetPawnOwner_ReturnValue_1 = CallFunc_TryGetPawnOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.CallFunc_ShouldASACameraSwitchToOld_ReturnValue = CallFunc_ShouldASACameraSwitchToOld_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue = CallFunc_ShouldUseASACamera_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue_1 = CallFunc_ShouldUseASACamera_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_GetBasedMovementComponent_ReturnValue = CallFunc_GetBasedMovementComponent_ReturnValue;
	Parms.CallFunc_GetBasedOnDino_ReturnValue = CallFunc_GetBasedOnDino_ReturnValue;
	Parms.CallFunc_HasDynamicBase_ReturnValue = CallFunc_HasDynamicBase_ReturnValue;
	Parms.CallFunc_IsBaseUnresolved_ReturnValue = CallFunc_IsBaseUnresolved_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast = K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast;
	Parms.CallFunc_Array_Set_Item_ImplicitCast = CallFunc_Array_Set_Item_ImplicitCast;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_1 = CallFunc_Array_Set_Item_ImplicitCast_1;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_2 = CallFunc_Array_Set_Item_ImplicitCast_2;
	Parms.CallFunc_Array_Set_Item_ImplicitCast_3 = CallFunc_Array_Set_Item_ImplicitCast_3;
	Parms.CallFunc_GroundIK_DeltaTime_ImplicitCast = CallFunc_GroundIK_DeltaTime_ImplicitCast;
	Parms.CallFunc_Add_DoubleFloat_A_ImplicitCast = CallFunc_Add_DoubleFloat_A_ImplicitCast;
	Parms.K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast = K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast;
	Parms.K2Node_VariableSet_MinSprintSpeed_ImplicitCast = K2Node_VariableSet_MinSprintSpeed_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast = K2Node_Select_Option_0_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.K2Node_StructMemberSet___FloatProperty_160_ImplicitCast = K2Node_StructMemberSet___FloatProperty_160_ImplicitCast;
	Parms.K2Node_Select_Option_0_ImplicitCast_1 = K2Node_Select_Option_0_ImplicitCast_1;
	Parms.K2Node_Select_Option_0_ImplicitCast_2 = K2Node_Select_Option_0_ImplicitCast_2;
	Parms.K2Node_StructMemberSet___FloatProperty_17_ImplicitCast = K2Node_StructMemberSet___FloatProperty_17_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Not_PreBool_ReturnValue != nullptr)
		*CallFunc_Not_PreBool_ReturnValue = Parms.CallFunc_Not_PreBool_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_1 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_1 = Parms.CallFunc_Not_PreBool_ReturnValue_1;

	if (CallFunc_Not_PreBool_ReturnValue_2 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_2 = Parms.CallFunc_Not_PreBool_ReturnValue_2;

	if (K2Node_CustomEvent_DeltaTime != nullptr)
		*K2Node_CustomEvent_DeltaTime = Parms.K2Node_CustomEvent_DeltaTime;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	if (CallFunc_MakeRotator_ReturnValue != nullptr)
		*CallFunc_MakeRotator_ReturnValue = std::move(Parms.CallFunc_MakeRotator_ReturnValue);

	if (CallFunc_FClamp_ReturnValue_1 != nullptr)
		*CallFunc_FClamp_ReturnValue_1 = Parms.CallFunc_FClamp_ReturnValue_1;

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_Normal_ReturnValue != nullptr)
		*CallFunc_Normal_ReturnValue = std::move(Parms.CallFunc_Normal_ReturnValue);

	if (CallFunc_ComposeRotators_ReturnValue != nullptr)
		*CallFunc_ComposeRotators_ReturnValue = std::move(Parms.CallFunc_ComposeRotators_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_GetAimOffsets_TheRootYawSpeed != nullptr)
		*CallFunc_GetAimOffsets_TheRootYawSpeed = Parms.CallFunc_GetAimOffsets_TheRootYawSpeed;

	if (CallFunc_Add_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue = Parms.CallFunc_Add_DoubleFloat_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_3 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_3 = Parms.CallFunc_Not_PreBool_ReturnValue_3;

	if (CallFunc_BooleanAND_ReturnValue_1 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_1 = Parms.CallFunc_BooleanAND_ReturnValue_1;

	if (CallFunc_IsOnSeatingStructure_ReturnValue != nullptr)
		*CallFunc_IsOnSeatingStructure_ReturnValue = Parms.CallFunc_IsOnSeatingStructure_ReturnValue;

	if (CallFunc_GetVelocity_ReturnValue_1 != nullptr)
		*CallFunc_GetVelocity_ReturnValue_1 = std::move(Parms.CallFunc_GetVelocity_ReturnValue_1);

	if (CallFunc_Not_PreBool_ReturnValue_4 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_4 = Parms.CallFunc_Not_PreBool_ReturnValue_4;

	if (CallFunc_Not_PreBool_ReturnValue_5 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_5 = Parms.CallFunc_Not_PreBool_ReturnValue_5;

	if (CallFunc_BooleanAND_ReturnValue_2 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_2 = Parms.CallFunc_BooleanAND_ReturnValue_2;

	if (CallFunc_GetAdditiveStandingAnim_OutBlendOutTime != nullptr)
		*CallFunc_GetAdditiveStandingAnim_OutBlendOutTime = Parms.CallFunc_GetAdditiveStandingAnim_OutBlendOutTime;

	if (CallFunc_GetAlternateStandingAnim_ReturnValue != nullptr)
		*CallFunc_GetAlternateStandingAnim_ReturnValue = Parms.CallFunc_GetAlternateStandingAnim_ReturnValue;

	if (CallFunc_UseAdditiveStandingAnim_ReturnValue != nullptr)
		*CallFunc_UseAdditiveStandingAnim_ReturnValue = Parms.CallFunc_UseAdditiveStandingAnim_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_3 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_3 = Parms.CallFunc_BooleanAND_ReturnValue_3;

	if (CallFunc_ObjectIsChildOfSoftRef_ReturnValue != nullptr)
		*CallFunc_ObjectIsChildOfSoftRef_ReturnValue = Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_4 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_4 = Parms.CallFunc_BooleanAND_ReturnValue_4;

	if (CallFunc_ForceTPVTargetingAnimation_ReturnValue != nullptr)
		*CallFunc_ForceTPVTargetingAnimation_ReturnValue = Parms.CallFunc_ForceTPVTargetingAnimation_ReturnValue;

	if (CallFunc_AnimUseAimOffset_ReturnValue != nullptr)
		*CallFunc_AnimUseAimOffset_ReturnValue = Parms.CallFunc_AnimUseAimOffset_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_5 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_5 = Parms.CallFunc_BooleanAND_ReturnValue_5;

	if (CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue != nullptr)
		*CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue = Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue;

	if (CallFunc_BooleanAND_ReturnValue_6 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_6 = Parms.CallFunc_BooleanAND_ReturnValue_6;

	if (CallFunc_DoubleToFloat_ReturnValue != nullptr)
		*CallFunc_DoubleToFloat_ReturnValue = Parms.CallFunc_DoubleToFloat_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_6 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_6 = Parms.CallFunc_Not_PreBool_ReturnValue_6;

	if (CallFunc_FClamp_ReturnValue_2 != nullptr)
		*CallFunc_FClamp_ReturnValue_2 = Parms.CallFunc_FClamp_ReturnValue_2;

	if (CallFunc_FClamp_ReturnValue_3 != nullptr)
		*CallFunc_FClamp_ReturnValue_3 = Parms.CallFunc_FClamp_ReturnValue_3;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_Not_PreBool_ReturnValue_7 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_7 = Parms.CallFunc_Not_PreBool_ReturnValue_7;

	if (CallFunc_BooleanAND_ReturnValue_7 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_7 = Parms.CallFunc_BooleanAND_ReturnValue_7;

	if (CallFunc_BooleanAND_ReturnValue_8 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_8 = Parms.CallFunc_BooleanAND_ReturnValue_8;

	if (CallFunc_GetMoveAnimRate_ReturnValue != nullptr)
		*CallFunc_GetMoveAnimRate_ReturnValue = Parms.CallFunc_GetMoveAnimRate_ReturnValue;

	if (CallFunc_Add_DoubleFloat_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleFloat_ReturnValue_1 = Parms.CallFunc_Add_DoubleFloat_ReturnValue_1;

	if (CallFunc_FClamp_ReturnValue_4 != nullptr)
		*CallFunc_FClamp_ReturnValue_4 = Parms.CallFunc_FClamp_ReturnValue_4;

	if (CallFunc_Not_PreBool_ReturnValue_8 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_8 = Parms.CallFunc_Not_PreBool_ReturnValue_8;

	if (CallFunc_Not_PreBool_ReturnValue_9 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_9 = Parms.CallFunc_Not_PreBool_ReturnValue_9;

	if (CallFunc_Not_PreBool_ReturnValue_10 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_10 = Parms.CallFunc_Not_PreBool_ReturnValue_10;

	if (CallFunc_BooleanAND_ReturnValue_9 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_9 = Parms.CallFunc_BooleanAND_ReturnValue_9;

	if (CallFunc_Not_PreBool_ReturnValue_11 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_11 = Parms.CallFunc_Not_PreBool_ReturnValue_11;

	if (CallFunc_BooleanAND_ReturnValue_10 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_10 = Parms.CallFunc_BooleanAND_ReturnValue_10;

	if (CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 != nullptr)
		*CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 = Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1;

	if (CallFunc_ComposeRotators_ReturnValue_1 != nullptr)
		*CallFunc_ComposeRotators_ReturnValue_1 = std::move(Parms.CallFunc_ComposeRotators_ReturnValue_1);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_Montage_IsPlaying_ReturnValue != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue = Parms.CallFunc_Montage_IsPlaying_ReturnValue;

	if (CallFunc_Not_PreBool_ReturnValue_12 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_12 = Parms.CallFunc_Not_PreBool_ReturnValue_12;

	if (CallFunc_Not_PreBool_ReturnValue_13 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_13 = Parms.CallFunc_Not_PreBool_ReturnValue_13;

	if (CallFunc_BooleanAND_ReturnValue_11 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_11 = Parms.CallFunc_BooleanAND_ReturnValue_11;

	if (CallFunc_BooleanAND_ReturnValue_12 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_12 = Parms.CallFunc_BooleanAND_ReturnValue_12;

	if (CallFunc_BooleanAND_ReturnValue_13 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_13 = Parms.CallFunc_BooleanAND_ReturnValue_13;

	if (CallFunc_Not_PreBool_ReturnValue_14 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_14 = Parms.CallFunc_Not_PreBool_ReturnValue_14;

	if (CallFunc_Montage_IsPlaying_ReturnValue_1 != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue_1 = Parms.CallFunc_Montage_IsPlaying_ReturnValue_1;

	if (CallFunc_Not_PreBool_ReturnValue_15 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_15 = Parms.CallFunc_Not_PreBool_ReturnValue_15;

	if (CallFunc_BooleanAND_ReturnValue_14 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_14 = Parms.CallFunc_BooleanAND_ReturnValue_14;

	if (CallFunc_BooleanAND_ReturnValue_15 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_15 = Parms.CallFunc_BooleanAND_ReturnValue_15;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_Not_PreBool_ReturnValue_16 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_16 = Parms.CallFunc_Not_PreBool_ReturnValue_16;

	if (CallFunc_FClamp01_ReturnValue != nullptr)
		*CallFunc_FClamp01_ReturnValue = Parms.CallFunc_FClamp01_ReturnValue;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (CallFunc_Not_PreBool_ReturnValue_17 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_17 = Parms.CallFunc_Not_PreBool_ReturnValue_17;

	if (CallFunc_BooleanAND_ReturnValue_16 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_16 = Parms.CallFunc_BooleanAND_ReturnValue_16;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	if (CallFunc_Not_PreBool_ReturnValue_18 != nullptr)
		*CallFunc_Not_PreBool_ReturnValue_18 = Parms.CallFunc_Not_PreBool_ReturnValue_18;

	if (CallFunc_BooleanAND_ReturnValue_17 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_17 = Parms.CallFunc_BooleanAND_ReturnValue_17;

	if (CallFunc_BooleanAND_ReturnValue_18 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_18 = Parms.CallFunc_BooleanAND_ReturnValue_18;

	if (CallFunc_BooleanOR_ReturnValue_3 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_3 = Parms.CallFunc_BooleanOR_ReturnValue_3;

	if (CallFunc_BooleanAND_ReturnValue_19 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_19 = Parms.CallFunc_BooleanAND_ReturnValue_19;

	if (CallFunc_BooleanAND_ReturnValue_20 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_20 = Parms.CallFunc_BooleanAND_ReturnValue_20;

	if (CallFunc_BooleanOR_ReturnValue_4 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_4 = Parms.CallFunc_BooleanOR_ReturnValue_4;

	if (CallFunc_BooleanAND_ReturnValue_21 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_21 = Parms.CallFunc_BooleanAND_ReturnValue_21;

	if (CallFunc_BooleanAND_ReturnValue_22 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_22 = Parms.CallFunc_BooleanAND_ReturnValue_22;

	if (CallFunc_BooleanOR_ReturnValue_5 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_5 = Parms.CallFunc_BooleanOR_ReturnValue_5;

	if (CallFunc_BooleanAND_ReturnValue_23 != nullptr)
		*CallFunc_BooleanAND_ReturnValue_23 = Parms.CallFunc_BooleanAND_ReturnValue_23;

	if (CallFunc_BooleanOR_ReturnValue_6 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_6 = Parms.CallFunc_BooleanOR_ReturnValue_6;

	if (CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast = Parms.CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast;

	if (CallFunc_Abs_A_ImplicitCast != nullptr)
		*CallFunc_Abs_A_ImplicitCast = Parms.CallFunc_Abs_A_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast;

	if (K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast != nullptr)
		*K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast = Parms.K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast;

	if (K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast != nullptr)
		*K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast = Parms.K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast;

	if (CallFunc_Add_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Add_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Add_DoubleFloat_B_ImplicitCast_1;

	if (K2Node_StructMemberSet___FloatProperty_156_ImplicitCast != nullptr)
		*K2Node_StructMemberSet___FloatProperty_156_ImplicitCast = Parms.K2Node_StructMemberSet___FloatProperty_156_ImplicitCast;

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


