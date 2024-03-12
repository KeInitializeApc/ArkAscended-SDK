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
// struct FPoseLink                   AnimGraph                                                        (Edit, Net, Transient, EditConst)

void UBaseHumanAnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "AnimGraph");

	Params::UBaseHumanAnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Cardinal Anim Sequences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::Update_Cardinal_Anim_Sequences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Cardinal Anim Sequences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.On Become Relevant Move East
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequencePlayerReference UBaseHumanAnimBP_C::On_Become_Relevant_Move_East(struct FAnimUpdateContext* Context, bool Temp_bool_Variable, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "On Become Relevant Move East");

	Params::UBaseHumanAnimBP_C_On_Become_Relevant_Move_East_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.On Become Relevant Walk East
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequencePlayerReference UBaseHumanAnimBP_C::On_Become_Relevant_Walk_East(struct FAnimUpdateContext* Context, bool Temp_bool_Variable, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "On Become Relevant Walk East");

	Params::UBaseHumanAnimBP_C_On_Become_Relevant_Walk_East_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.On BecomeRelevant Move West
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequencePlayerReference UBaseHumanAnimBP_C::On_BecomeRelevant_Move_West(struct FAnimUpdateContext* Context, bool Temp_bool_Variable, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "On BecomeRelevant Move West");

	Params::UBaseHumanAnimBP_C_On_BecomeRelevant_Move_West_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.On BecomeRelevant Walk West
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequencePlayerReference UBaseHumanAnimBP_C::On_BecomeRelevant_Walk_West(struct FAnimUpdateContext* Context, bool Temp_bool_Variable, bool CallFunc_ConvertToSequencePlayerPure_Result, class UAnimSequence* K2Node_Select_Default, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "On BecomeRelevant Walk West");

	Params::UBaseHumanAnimBP_C_On_BecomeRelevant_Walk_West_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Character Creator Values
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           ShooterCharacter                                                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, GlobalConfig)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue          (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange        (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetBoneModifierValue_ReturnValue                        (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_1(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FPlayerDynamicMaterialFloat CallFunc_GetCharacterCreatorDynamicMatValue_AssociatedDynamicMatModifierRange_2(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_4                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FBoneModifierRangeArray     CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetBoneModifierValue_ReturnValue_5                      (ConstParm, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue                       (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalItem*                 CallFunc_GetEquippedItemOfType_ReturnValue_1                     (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsA_ReturnValue                                   (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ObjectIsA_ReturnValue_1                                 (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool UBaseHumanAnimBP_C::Update_Character_Creator_Values(float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange, float* CallFunc_GetBoneModifierValue_ReturnValue, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1, float* CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1, float* CallFunc_GetBoneModifierValue_ReturnValue_1, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2, float* CallFunc_GetBoneModifierValue_ReturnValue_2, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3, float* CallFunc_GetBoneModifierValue_ReturnValue_3, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4, float* CallFunc_GetBoneModifierValue_ReturnValue_4, struct FBoneModifierRangeArray* CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5, float* CallFunc_GetBoneModifierValue_ReturnValue_5, bool CallFunc_ObjectIsA_ReturnValue, bool CallFunc_ObjectIsA_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Character Creator Values");

	Params::UBaseHumanAnimBP_C_Update_Character_Creator_Values_Params Parms{};

	Parms.CallFunc_ObjectIsA_ReturnValue = CallFunc_ObjectIsA_ReturnValue;
	Parms.CallFunc_ObjectIsA_ReturnValue_1 = CallFunc_ObjectIsA_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange);

	if (CallFunc_GetBoneModifierValue_ReturnValue != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue = Parms.CallFunc_GetBoneModifierValue_ReturnValue;

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1 != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1 = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_1;

	if (CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2 != nullptr)
		*CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2 = Parms.CallFunc_GetCharacterCreatorDynamicMatValue_ReturnValue_2;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_1);

	if (CallFunc_GetBoneModifierValue_ReturnValue_1 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_1 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_1;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_2);

	if (CallFunc_GetBoneModifierValue_ReturnValue_2 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_2 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_2;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_3);

	if (CallFunc_GetBoneModifierValue_ReturnValue_3 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_3 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_3;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_4);

	if (CallFunc_GetBoneModifierValue_ReturnValue_4 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_4 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_4;

	if (CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5 != nullptr)
		*CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5 = std::move(Parms.CallFunc_GetBoneModifierValue_AssociatedBoneModifierRange_5);

	if (CallFunc_GetBoneModifierValue_ReturnValue_5 != nullptr)
		*CallFunc_GetBoneModifierValue_ReturnValue_5 = Parms.CallFunc_GetBoneModifierValue_ReturnValue_5;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

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
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             InterpSpeed                                                      (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             Time                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Speed                                                            (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_2                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_3                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_4                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_5                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_6                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_ReturnValue_7                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_8                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_9                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_10                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_11                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_12                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_13                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_14                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_ReturnValue_15                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_16                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_17                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_18                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_19                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_20                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_21                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_22                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// double                             CallFunc_FInterpTo_ReturnValue_23                                (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// double                             CallFunc_FInterpTo_Current_ImplicitCast                          (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_1                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_2                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_3                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_4                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_5                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_6                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_7                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_8                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_9                        (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_10                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_FInterpTo_Current_ImplicitCast_11                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              K2Node_VariableSet_InterpOverrideL_Arm_ImplicitCast              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_ArmAdd_ImplicitCast           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast          (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHead_ImplicitCast               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast              (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast           (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast            (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideSpine_ImplicitCast              (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_InterpOverrideLayeringSpineAdd_ImplicitCast   (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::InterpLayeringValues(double* InterpSpeed, double Speed, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_3, double CallFunc_FInterpTo_ReturnValue_4, double CallFunc_FInterpTo_ReturnValue_5, double CallFunc_FInterpTo_ReturnValue_6, double CallFunc_FInterpTo_ReturnValue_7, double CallFunc_FInterpTo_ReturnValue_8, double CallFunc_FInterpTo_ReturnValue_9, double CallFunc_FInterpTo_ReturnValue_10, double CallFunc_FInterpTo_ReturnValue_11, double CallFunc_FInterpTo_ReturnValue_12, double CallFunc_FInterpTo_ReturnValue_13, double CallFunc_FInterpTo_ReturnValue_14, double CallFunc_FInterpTo_ReturnValue_15, double CallFunc_FInterpTo_ReturnValue_16, double CallFunc_FInterpTo_ReturnValue_17, double CallFunc_FInterpTo_ReturnValue_18, double CallFunc_FInterpTo_ReturnValue_19, double CallFunc_FInterpTo_ReturnValue_20, double CallFunc_FInterpTo_ReturnValue_21, double CallFunc_FInterpTo_ReturnValue_22, double CallFunc_FInterpTo_ReturnValue_23, float K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast, float K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast, float* K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast, float K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast, float K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "InterpLayeringValues");

	Params::UBaseHumanAnimBP_C_InterpLayeringValues_Params Parms{};

	Parms.Speed = Speed;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue_2 = CallFunc_FInterpTo_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_3 = CallFunc_FInterpTo_ReturnValue_3;
	Parms.CallFunc_FInterpTo_ReturnValue_4 = CallFunc_FInterpTo_ReturnValue_4;
	Parms.CallFunc_FInterpTo_ReturnValue_5 = CallFunc_FInterpTo_ReturnValue_5;
	Parms.CallFunc_FInterpTo_ReturnValue_6 = CallFunc_FInterpTo_ReturnValue_6;
	Parms.CallFunc_FInterpTo_ReturnValue_7 = CallFunc_FInterpTo_ReturnValue_7;
	Parms.CallFunc_FInterpTo_ReturnValue_8 = CallFunc_FInterpTo_ReturnValue_8;
	Parms.CallFunc_FInterpTo_ReturnValue_9 = CallFunc_FInterpTo_ReturnValue_9;
	Parms.CallFunc_FInterpTo_ReturnValue_10 = CallFunc_FInterpTo_ReturnValue_10;
	Parms.CallFunc_FInterpTo_ReturnValue_11 = CallFunc_FInterpTo_ReturnValue_11;
	Parms.CallFunc_FInterpTo_ReturnValue_12 = CallFunc_FInterpTo_ReturnValue_12;
	Parms.CallFunc_FInterpTo_ReturnValue_13 = CallFunc_FInterpTo_ReturnValue_13;
	Parms.CallFunc_FInterpTo_ReturnValue_14 = CallFunc_FInterpTo_ReturnValue_14;
	Parms.CallFunc_FInterpTo_ReturnValue_15 = CallFunc_FInterpTo_ReturnValue_15;
	Parms.CallFunc_FInterpTo_ReturnValue_16 = CallFunc_FInterpTo_ReturnValue_16;
	Parms.CallFunc_FInterpTo_ReturnValue_17 = CallFunc_FInterpTo_ReturnValue_17;
	Parms.CallFunc_FInterpTo_ReturnValue_18 = CallFunc_FInterpTo_ReturnValue_18;
	Parms.CallFunc_FInterpTo_ReturnValue_19 = CallFunc_FInterpTo_ReturnValue_19;
	Parms.CallFunc_FInterpTo_ReturnValue_20 = CallFunc_FInterpTo_ReturnValue_20;
	Parms.CallFunc_FInterpTo_ReturnValue_21 = CallFunc_FInterpTo_ReturnValue_21;
	Parms.CallFunc_FInterpTo_ReturnValue_22 = CallFunc_FInterpTo_ReturnValue_22;
	Parms.CallFunc_FInterpTo_ReturnValue_23 = CallFunc_FInterpTo_ReturnValue_23;
	Parms.K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast = K2Node_VariableSet_InterpOverrideL_Hand_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideL_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_HandAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideR_ArmAdd_ImplicitCast;
	Parms.K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast = K2Node_VariableSet_InterpOverrideHeadAdd_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InterpSpeed != nullptr)
		*InterpSpeed = Parms.InterpSpeed;

	if (K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_Hand_ImplicitCast;

	if (K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast = Parms.K2Node_VariableSet_InterpOverrideR_Arm_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Get IKWorld Interp Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Out                                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, Config)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Map_Find_Value                                          (Edit, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool UBaseHumanAnimBP_C::Get_IKWorld_Interp_Speed(double* Out, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Get IKWorld Interp Speed");

	Params::UBaseHumanAnimBP_C_Get_IKWorld_Interp_Speed_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GroundIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsFirstPerson_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue                       (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (BlueprintVisible, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldEnableIKBasedOn_ReturnValue_1                     (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BPIsConscious_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsAlive_ReturnValue                                     (Edit, ExportObject, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue                      (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FVector                     CallFunc_GetFPVShadowMeshOffset_ReturnValue_1                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_TraceDistanceFactorBelow_ImplicitCast         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GroundIK(double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsFirstPerson_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue, bool* CallFunc_IsLocallyControlled_ReturnValue, class APrimalDinoCharacter* CallFunc_GetBasedOnDino_ReturnValue, bool* CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_ShouldEnableIKBasedOn_ReturnValue_1, bool* CallFunc_Greater_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double* CallFunc_Conv_BoolToDouble_ReturnValue, int32* Temp_int_Variable, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GroundIK");

	Params::UBaseHumanAnimBP_C_GroundIK_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue = CallFunc_ShouldEnableIKBasedOn_ReturnValue;
	Parms.CallFunc_GetBasedOnDino_ReturnValue = CallFunc_GetBasedOnDino_ReturnValue;
	Parms.CallFunc_ShouldEnableIKBasedOn_ReturnValue_1 = CallFunc_ShouldEnableIKBasedOn_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsFirstPerson_ReturnValue != nullptr)
		*CallFunc_IsFirstPerson_ReturnValue = Parms.CallFunc_IsFirstPerson_ReturnValue;

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	if (CallFunc_HasDynamicBase_ReturnValue != nullptr)
		*CallFunc_HasDynamicBase_ReturnValue = Parms.CallFunc_HasDynamicBase_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_Conv_BoolToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToDouble_ReturnValue = Parms.CallFunc_Conv_BoolToDouble_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdatePoseLayering
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp01_ReturnValue_1                                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp01_ReturnValue_2                                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_4                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_5                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_6                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_7                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_8                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_9                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_10                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_11                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_12                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue_13                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_14                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_15                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue_16                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_17                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue_18                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_19                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_GetCurveValue_ReturnValue_20                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue_21                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue_22                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              CallFunc_GetCurveValue_ReturnValue_23                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_24                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_FClamp01_ReturnValue_3                                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_FClamp01_Value_ImplicitCast                             (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp01_Value_ImplicitCast_1                           (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_Value_ImplicitCast_2                           (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              K2Node_VariableSet_FullBodyIdle_L_HandOverride_ImplicitCast      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_FullBodyIdle_R_HandOverride_ImplicitCast      (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_2                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_3                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_4                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_5                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_6                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_7                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_8                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_9                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_10                  (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_11                  (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_12                  (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             K2Node_VariableSet_DisableFemaleCorrectiveCurve_ImplicitCast     (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_13                  (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_14                  (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FClamp01_Value_ImplicitCast_3                           (Edit, ConstParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              K2Node_VariableSet_BreastAnimAlpha_ImplicitCast                  (ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::UpdatePoseLayering(double CallFunc_FClamp01_ReturnValue, double CallFunc_FClamp01_ReturnValue_1, double CallFunc_FClamp01_ReturnValue_2, float* CallFunc_GetCurveValue_ReturnValue, float* CallFunc_GetCurveValue_ReturnValue_1, float* CallFunc_GetCurveValue_ReturnValue_2, float* CallFunc_GetCurveValue_ReturnValue_3, float* CallFunc_GetCurveValue_ReturnValue_4, float* CallFunc_GetCurveValue_ReturnValue_5, float* CallFunc_GetCurveValue_ReturnValue_6, float* CallFunc_GetCurveValue_ReturnValue_7, float* CallFunc_GetCurveValue_ReturnValue_8, float* CallFunc_GetCurveValue_ReturnValue_9, float* CallFunc_GetCurveValue_ReturnValue_10, float* CallFunc_GetCurveValue_ReturnValue_11, float* CallFunc_GetCurveValue_ReturnValue_12, float* CallFunc_GetCurveValue_ReturnValue_13, float* CallFunc_GetCurveValue_ReturnValue_14, float* CallFunc_GetCurveValue_ReturnValue_15, float* CallFunc_GetCurveValue_ReturnValue_16, float* CallFunc_GetCurveValue_ReturnValue_17, float* CallFunc_GetCurveValue_ReturnValue_18, float* CallFunc_GetCurveValue_ReturnValue_19, float* CallFunc_GetCurveValue_ReturnValue_20, float* CallFunc_GetCurveValue_ReturnValue_21, float* CallFunc_GetCurveValue_ReturnValue_22, float* CallFunc_GetCurveValue_ReturnValue_23, float* CallFunc_GetCurveValue_ReturnValue_24, double CallFunc_FClamp01_ReturnValue_3, double CallFunc_FClamp01_Value_ImplicitCast, double CallFunc_FClamp01_Value_ImplicitCast_1, double CallFunc_FClamp01_Value_ImplicitCast_2, float* K2Node_VariableSet_FullBodyIdle_L_HandOverride_ImplicitCast, double CallFunc_FClamp01_Value_ImplicitCast_3, float* K2Node_VariableSet_BreastAnimAlpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdatePoseLayering");

	Params::UBaseHumanAnimBP_C_UpdatePoseLayering_Params Parms{};

	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_FClamp01_ReturnValue_1 = CallFunc_FClamp01_ReturnValue_1;
	Parms.CallFunc_FClamp01_ReturnValue_2 = CallFunc_FClamp01_ReturnValue_2;
	Parms.CallFunc_FClamp01_ReturnValue_3 = CallFunc_FClamp01_ReturnValue_3;
	Parms.CallFunc_FClamp01_Value_ImplicitCast = CallFunc_FClamp01_Value_ImplicitCast;
	Parms.CallFunc_FClamp01_Value_ImplicitCast_1 = CallFunc_FClamp01_Value_ImplicitCast_1;
	Parms.CallFunc_FClamp01_Value_ImplicitCast_2 = CallFunc_FClamp01_Value_ImplicitCast_2;
	Parms.CallFunc_FClamp01_Value_ImplicitCast_3 = CallFunc_FClamp01_Value_ImplicitCast_3;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCurveValue_ReturnValue != nullptr)
		*CallFunc_GetCurveValue_ReturnValue = Parms.CallFunc_GetCurveValue_ReturnValue;

	if (CallFunc_GetCurveValue_ReturnValue_1 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_1 = Parms.CallFunc_GetCurveValue_ReturnValue_1;

	if (CallFunc_GetCurveValue_ReturnValue_2 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_2 = Parms.CallFunc_GetCurveValue_ReturnValue_2;

	if (CallFunc_GetCurveValue_ReturnValue_3 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_3 = Parms.CallFunc_GetCurveValue_ReturnValue_3;

	if (CallFunc_GetCurveValue_ReturnValue_4 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_4 = Parms.CallFunc_GetCurveValue_ReturnValue_4;

	if (CallFunc_GetCurveValue_ReturnValue_5 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_5 = Parms.CallFunc_GetCurveValue_ReturnValue_5;

	if (CallFunc_GetCurveValue_ReturnValue_6 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_6 = Parms.CallFunc_GetCurveValue_ReturnValue_6;

	if (CallFunc_GetCurveValue_ReturnValue_7 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_7 = Parms.CallFunc_GetCurveValue_ReturnValue_7;

	if (CallFunc_GetCurveValue_ReturnValue_8 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_8 = Parms.CallFunc_GetCurveValue_ReturnValue_8;

	if (CallFunc_GetCurveValue_ReturnValue_9 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_9 = Parms.CallFunc_GetCurveValue_ReturnValue_9;

	if (CallFunc_GetCurveValue_ReturnValue_10 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_10 = Parms.CallFunc_GetCurveValue_ReturnValue_10;

	if (CallFunc_GetCurveValue_ReturnValue_11 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_11 = Parms.CallFunc_GetCurveValue_ReturnValue_11;

	if (CallFunc_GetCurveValue_ReturnValue_12 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_12 = Parms.CallFunc_GetCurveValue_ReturnValue_12;

	if (CallFunc_GetCurveValue_ReturnValue_13 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_13 = Parms.CallFunc_GetCurveValue_ReturnValue_13;

	if (CallFunc_GetCurveValue_ReturnValue_14 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_14 = Parms.CallFunc_GetCurveValue_ReturnValue_14;

	if (CallFunc_GetCurveValue_ReturnValue_15 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_15 = Parms.CallFunc_GetCurveValue_ReturnValue_15;

	if (CallFunc_GetCurveValue_ReturnValue_16 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_16 = Parms.CallFunc_GetCurveValue_ReturnValue_16;

	if (CallFunc_GetCurveValue_ReturnValue_17 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_17 = Parms.CallFunc_GetCurveValue_ReturnValue_17;

	if (CallFunc_GetCurveValue_ReturnValue_18 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_18 = Parms.CallFunc_GetCurveValue_ReturnValue_18;

	if (CallFunc_GetCurveValue_ReturnValue_19 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_19 = Parms.CallFunc_GetCurveValue_ReturnValue_19;

	if (CallFunc_GetCurveValue_ReturnValue_20 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_20 = Parms.CallFunc_GetCurveValue_ReturnValue_20;

	if (CallFunc_GetCurveValue_ReturnValue_21 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_21 = Parms.CallFunc_GetCurveValue_ReturnValue_21;

	if (CallFunc_GetCurveValue_ReturnValue_22 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_22 = Parms.CallFunc_GetCurveValue_ReturnValue_22;

	if (CallFunc_GetCurveValue_ReturnValue_23 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_23 = Parms.CallFunc_GetCurveValue_ReturnValue_23;

	if (CallFunc_GetCurveValue_ReturnValue_24 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_24 = Parms.CallFunc_GetCurveValue_ReturnValue_24;

	if (K2Node_VariableSet_FullBodyIdle_L_HandOverride_ImplicitCast != nullptr)
		*K2Node_VariableSet_FullBodyIdle_L_HandOverride_ImplicitCast = Parms.K2Node_VariableSet_FullBodyIdle_L_HandOverride_ImplicitCast;

	if (K2Node_VariableSet_BreastAnimAlpha_ImplicitCast != nullptr)
		*K2Node_VariableSet_BreastAnimAlpha_ImplicitCast = Parms.K2Node_VariableSet_BreastAnimAlpha_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetLeanAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector2D                   Output                                                           (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (BlueprintVisible, Net, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue                       (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ConstParm, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_DoubleToVector2D_ReturnValue_1                     (Edit, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_VectorVector_ReturnValue                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (Edit, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// struct FRotator                    CallFunc_RInterpTo_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast                        (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_DeltaTime_ImplicitCast_1                      (BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)

struct FRotator UBaseHumanAnimBP_C::GetLeanAmount(struct FVector2D* Output, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue, struct FVector* CallFunc_GreaterGreater_VectorRotator_ReturnValue, struct FVector* CallFunc_VInterpTo_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_FInterpTo_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_FClamp01_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector2D& CallFunc_Conv_DoubleToVector2D_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool* CallFunc_EqualEqual_VectorVector_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_FInterpTo_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_DeltaTime_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetLeanAmount");

	Params::UBaseHumanAnimBP_C_GetLeanAmount_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue = CallFunc_Conv_DoubleToVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector2D_ReturnValue_1 = CallFunc_Conv_DoubleToVector2D_ReturnValue_1;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast = CallFunc_FInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_DeltaTime_ImplicitCast_1 = CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_GreaterGreater_VectorRotator_ReturnValue != nullptr)
		*CallFunc_GreaterGreater_VectorRotator_ReturnValue = std::move(Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue);

	if (CallFunc_VInterpTo_ReturnValue != nullptr)
		*CallFunc_VInterpTo_ReturnValue = std::move(Parms.CallFunc_VInterpTo_ReturnValue);

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_EqualEqual_VectorVector_ReturnValue != nullptr)
		*CallFunc_EqualEqual_VectorVector_ReturnValue = Parms.CallFunc_EqualEqual_VectorVector_ReturnValue;

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
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (Edit, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetExplicitTime_ReturnValue                             (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateMoveAnim_Layering(struct FAnimUpdateContext* Context, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, enum class E_CardinalDirection4 Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class E_CardinalDirection4 Temp_byte_Variable_1, class UAnimSequence* K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim_Layering");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Layering_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateLayeringValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             K2Node_VariableSet_Layering_L_Hand_ImplicitCast                  (EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_Spine_ImplicitCast                   (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_L_Arm_ImplicitCast                   (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Hand_ImplicitCast                  (BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_Layering_R_Arm_ImplicitCast                   (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateLayeringValues(double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_R_Arm_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateLayeringValues");

	Params::UBaseHumanAnimBP_C_UpdateLayeringValues_Params Parms{};

	Parms.K2Node_VariableSet_Layering_R_Hand_ImplicitCast = K2Node_VariableSet_Layering_R_Hand_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_VariableSet_Layering_R_Arm_ImplicitCast != nullptr)
		*K2Node_VariableSet_Layering_R_Arm_ImplicitCast = Parms.K2Node_VariableSet_Layering_R_Arm_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIKNonThreadSafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_5                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_6                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_7                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_8                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue_9                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)

bool UBaseHumanAnimBP_C::UpdateWeaponIKNonThreadSafe(class APawn** CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_5, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_6, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_7, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_8, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIKNonThreadSafe");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIKNonThreadSafe_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_1;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_2;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_3;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_4;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_5 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_5;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_6 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_6;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_7 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_7;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_8 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_8;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue_9 = CallFunc_ObjectIsChildOfSoftRef_ReturnValue_9;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_TryGetPawnOwner_ReturnValue != nullptr)
		*CallFunc_TryGetPawnOwner_ReturnValue = Parms.CallFunc_TryGetPawnOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateWeaponIK
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_RightHandIKAlpha_ImplicitCast                 (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateWeaponIK(float* CallFunc_GetCurveValue_ReturnValue, float* CallFunc_GetCurveValue_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateWeaponIK");

	Params::UBaseHumanAnimBP_C_UpdateWeaponIK_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetCurveValue_ReturnValue != nullptr)
		*CallFunc_GetCurveValue_ReturnValue = Parms.CallFunc_GetCurveValue_ReturnValue;

	if (CallFunc_GetCurveValue_ReturnValue_1 != nullptr)
		*CallFunc_GetCurveValue_ReturnValue_1 = Parms.CallFunc_GetCurveValue_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetPredictedStopDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// double                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_PredictGroundMovementStopLocation_ReturnValue           (Edit, ConstParm, BlueprintVisible, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXY_ReturnValue                                     (Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GetPredictedStopDistance(const struct FVector& CallFunc_PredictGroundMovementStopLocation_ReturnValue, double CallFunc_VSizeXY_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetPredictedStopDistance");

	Params::UBaseHumanAnimBP_C_GetPredictedStopDistance_Params Parms{};

	Parms.CallFunc_PredictGroundMovementStopLocation_ReturnValue = CallFunc_PredictGroundMovementStopLocation_ReturnValue;
	Parms.CallFunc_VSizeXY_ReturnValue = CallFunc_VSizeXY_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ShouldDistanceMatchStop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UBaseHumanAnimBP_C::ShouldDistanceMatchStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ShouldDistanceMatchStop");

	Params::UBaseHumanAnimBP_C_ShouldDistanceMatchStop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateStopAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// double                             DistanceToMatch                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1      (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result_1                 (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_AdvanceTime_ReturnValue                                 (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GetPredictedStopDistance_ReturnValue                    (Edit, ConstParm, ExportObject, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast     (Edit, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::UpdateStopAnim(struct FAnimUpdateContext* Context, double DistanceToMatch, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator_1, float* CallFunc_DistanceMatchToTarget_DistanceToTarget_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateStopAnim");

	Params::UBaseHumanAnimBP_C_UpdateStopAnim_Params Parms{};

	Parms.DistanceToMatch = DistanceToMatch;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

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
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator        (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequenceEvaluatorPure_Result                   (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldDistanceMatchStop_ReturnValue                     (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_DistanceMatchToTarget_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSequenceEvaluatorReference CallFunc_SetSequence_ReturnValue                                 (Edit, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)

struct FSequenceEvaluatorReference UBaseHumanAnimBP_C::SetUpStopAnim(struct FAnimUpdateContext* Context, enum class E_CardinalDirection4 Temp_byte_Variable, struct FSequenceEvaluatorReference* CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator, class UAnimSequence* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SetUpStopAnim");

	Params::UBaseHumanAnimBP_C_SetUpStopAnim_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator != nullptr)
		*CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator = std::move(Parms.CallFunc_ConvertToSequenceEvaluatorPure_SequenceEvaluator);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateAccelerationData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (Edit, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetLeanAmount_Output                                    (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Vector2DInterpTo_Constant_ReturnValue                   (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Divide_VectorVector_ReturnValue                         (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetLeanAmount_DeltaTime_ImplicitCast                    (BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Vector2DInterpTo_Constant_DeltaTime_ImplicitCast        (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

float UBaseHumanAnimBP_C::UpdateAccelerationData(const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector2D* CallFunc_GetLeanAmount_Output, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, float* CallFunc_GetLeanAmount_DeltaTime_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateAccelerationData");

	Params::UBaseHumanAnimBP_C_UpdateAccelerationData_Params Parms{};

	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Divide_VectorVector_ReturnValue = CallFunc_Divide_VectorVector_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetLeanAmount_Output != nullptr)
		*CallFunc_GetLeanAmount_Output = std::move(Parms.CallFunc_GetLeanAmount_Output);

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	if (CallFunc_GetLeanAmount_DeltaTime_ImplicitCast != nullptr)
		*CallFunc_GetLeanAmount_DeltaTime_ImplicitCast = Parms.CallFunc_GetLeanAmount_DeltaTime_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateMoveAnim
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FAnimUpdateContext          Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FAnimNodeReference          Node                                                             (Edit, ConstParm, ExportObject, ZeroConstructor, ReturnParm, Transient, EditConst)
// struct FSequencePlayerReference    CallFunc_ConvertToSequencePlayerPure_SequencePlayer              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ConvertToSequencePlayerPure_Result                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_2                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAnimSequence*               K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UAnimSequence*               K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class UAnimSequence*               K2Node_Select_Default_4                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FSequencePlayerReference    CallFunc_SetSequenceWithInertialBlending_ReturnValue             (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSequencePlayerReference    CallFunc_SetPlayRate_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetPlayRate_PlayRate_ImplicitCast                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FSequencePlayerReference UBaseHumanAnimBP_C::UpdateMoveAnim(struct FAnimUpdateContext* Context, bool CallFunc_ConvertToSequencePlayerPure_Result, enum class E_CardinalDirection4 Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class E_CardinalDirection4 Temp_byte_Variable_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, enum class E_CardinalDirection4 Temp_byte_Variable_2, double K2Node_Select_Default, class UAnimSequence* K2Node_Select_Default_1, class UAnimSequence* K2Node_Select_Default_2, class UAnimSequence* K2Node_Select_Default_3, class UAnimSequence* K2Node_Select_Default_4, struct FSequencePlayerReference* CallFunc_SetSequenceWithInertialBlending_ReturnValue, float* CallFunc_SetPlayRate_PlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateMoveAnim");

	Params::UBaseHumanAnimBP_C_UpdateMoveAnim_Params Parms{};

	Parms.CallFunc_ConvertToSequencePlayerPure_Result = CallFunc_ConvertToSequencePlayerPure_Result;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_SetSequenceWithInertialBlending_ReturnValue != nullptr)
		*CallFunc_SetSequenceWithInertialBlending_ReturnValue = std::move(Parms.CallFunc_SetSequenceWithInertialBlending_ReturnValue);

	if (CallFunc_SetPlayRate_PlayRate_ImplicitCast != nullptr)
		*CallFunc_SetPlayRate_PlayRate_ImplicitCast = Parms.CallFunc_SetPlayRate_PlayRate_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateVelocityData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               AllowUpdateDirectionJumpAngle                                    (ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Vector_Normal2D_ReturnValue                             (BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSizeXYSquared_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// enum class E_CardinalDirection4    Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             Temp_real_Variable                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             Temp_real_Variable_1                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             Temp_real_Variable_2                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             Temp_real_Variable_3                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Vector_IsNearlyZero_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Multiply_RotatorFloat_ReturnValue                       (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_CalculateDirection_ReturnValue                          (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_CalculateDirection_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_1                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_2                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_3                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_4                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_5                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_6                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_7                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// double                             CallFunc_FClamp_ReturnValue_1                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_5                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_VInterpTo_Constant_ReturnValue                          (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_6                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_7                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_8                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_8                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_Constant_ReturnValue_9                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_9                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// enum class E_CardinalDirection4    CallFunc_SelectCardinalDirectionFromAngle_Direction              (ConstParm, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_Current_ImplicitCast                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_VInterpTo_Constant_DeltaTime_ImplicitCast               (Edit, ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_Hip_Twist_W_ImplicitCast                      (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_2                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_3                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_4                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_Hip_Twist_E_ImplicitCast                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_NewEnumerator2_ImplicitCast                        (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_VariableSet_DirectionJumpAngle_ImplicitCast               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_5                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// float                              K2Node_VariableSet_Hip_Twist_Straight_ImplicitCast               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast     (BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::UpdateVelocityData(struct FVector* CallFunc_Vector_Normal2D_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, enum class E_CardinalDirection4 Temp_byte_Variable, enum class E_CardinalDirection4 Temp_byte_Variable_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double K2Node_Select_Default, float* CallFunc_GetCurveValue_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, float CallFunc_CalculateDirection_ReturnValue, float CallFunc_CalculateDirection_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, double CallFunc_Multiply_DoubleFloat_ReturnValue_5, double CallFunc_SelectFloat_ReturnValue_1, const struct FVector& CallFunc_VInterpTo_Constant_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_6, double CallFunc_Multiply_DoubleFloat_ReturnValue_7, double CallFunc_Multiply_DoubleFloat_ReturnValue_8, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_3, bool Temp_bool_Variable, double K2Node_Select_Default_1, double CallFunc_SafeDivide_ReturnValue, double K2Node_Select_Default_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_9, double CallFunc_SelectFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_2, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_3, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_4, float* K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_5, float K2Node_VariableSet_Hip_Twist_Straight_ImplicitCast, double* CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateVelocityData");

	Params::UBaseHumanAnimBP_C_UpdateVelocityData_Params Parms{};

	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.CallFunc_CalculateDirection_ReturnValue = CallFunc_CalculateDirection_ReturnValue;
	Parms.CallFunc_CalculateDirection_ReturnValue_1 = CallFunc_CalculateDirection_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_5 = CallFunc_Multiply_DoubleFloat_ReturnValue_5;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_VInterpTo_Constant_ReturnValue = CallFunc_VInterpTo_Constant_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_6 = CallFunc_Multiply_DoubleFloat_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_7 = CallFunc_Multiply_DoubleFloat_ReturnValue_7;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_8 = CallFunc_Multiply_DoubleFloat_ReturnValue_8;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_9 = CallFunc_Multiply_DoubleFloat_ReturnValue_9;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_2 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_2;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_3 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_3;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_4 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_4;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_5 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_5;
	Parms.K2Node_VariableSet_Hip_Twist_Straight_ImplicitCast = K2Node_VariableSet_Hip_Twist_Straight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Vector_Normal2D_ReturnValue != nullptr)
		*CallFunc_Vector_Normal2D_ReturnValue = std::move(Parms.CallFunc_Vector_Normal2D_ReturnValue);

	if (CallFunc_GetCurveValue_ReturnValue != nullptr)
		*CallFunc_GetCurveValue_ReturnValue = Parms.CallFunc_GetCurveValue_ReturnValue;

	if (K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast != nullptr)
		*K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast = Parms.K2Node_VariableSet_DirectionJumpAngleHalf_ImplicitCast;

	if (CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast != nullptr)
		*CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast = Parms.CallFunc_SelectCardinalDirectionFromAngle_Angle_ImplicitCast;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintThreadSafeUpdateAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             CallFunc_UpdateVelocityData_DeltaTime_ImplicitCast               (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_UpdateAccelerationData_DeltaTime_ImplicitCast           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

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
// double                             Angle                                                            (Edit, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// double                             DeadZone                                                         (Edit, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
// enum class E_CardinalDirection4    CurrentDirection                                                 (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               UseCurrentDirection                                              (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// enum class E_CardinalDirection4    Direction                                                        (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             BwdDeadZone                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             FwdDeadZone                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             AbsAngle                                                         (Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (Edit, ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)

bool UBaseHumanAnimBP_C::SelectCardinalDirectionFromAngle(double* DeadZone, enum class E_CardinalDirection4* CurrentDirection, bool* UseCurrentDirection, double AbsAngle, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "SelectCardinalDirectionFromAngle");

	Params::UBaseHumanAnimBP_C_SelectCardinalDirectionFromAngle_Params Parms{};

	Parms.AbsAngle = AbsAngle;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (DeadZone != nullptr)
		*DeadZone = Parms.DeadZone;

	if (CurrentDirection != nullptr)
		*CurrentDirection = Parms.CurrentDirection;

	if (UseCurrentDirection != nullptr)
		*UseCurrentDirection = Parms.UseCurrentDirection;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcBlendspaceAxes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_A_ImplicitCast                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast_1                                    (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcBlendspaceAxes(class AShooterCharacter* Character, bool* CallFunc_IsLocallyControlled_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_SelectFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_FInterpTo_ReturnValue, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_Abs_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Abs_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcBlendspaceAxes");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcBlendspaceAxes_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast_1 = CallFunc_Abs_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsLocallyControlled_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlled_ReturnValue = Parms.CallFunc_IsLocallyControlled_ReturnValue;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.UpdateGliderSuitVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)

void UBaseHumanAnimBP_C::UpdateGliderSuitVars(class AShooterCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "UpdateGliderSuitVars");

	Params::UBaseHumanAnimBP_C_UpdateGliderSuitVars_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GliderSuit_CalcAimOffsets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AShooterCharacter*           Character                                                        (Edit, ConstParm, Net, Parm, DisableEditOnTemplate, Config, GlobalConfig)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

double UBaseHumanAnimBP_C::GliderSuit_CalcAimOffsets(class AShooterCharacter* Character, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GliderSuit_CalcAimOffsets");

	Params::UBaseHumanAnimBP_C_GliderSuit_CalcAimOffsets_Params Parms{};

	Parms.Character = Character;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.MapVelocityToBlendSpace
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMovementComponent*          MovementComponent                                                (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst)
// struct FVector                     Vector                                                           (Edit, BlueprintVisible, Net, OutParm)
// double                             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// double                             Result                                                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ConstParm, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double UBaseHumanAnimBP_C::MapVelocityToBlendSpace(struct FVector* Vector, double Result, double CallFunc_FClamp_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "MapVelocityToBlendSpace");

	Params::UBaseHumanAnimBP_C_MapVelocityToBlendSpace_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Vector != nullptr)
		*Vector = std::move(Parms.Vector);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharSequenceNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimSequence*               AnimSeqIn                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               AnimSeqOut                                                       (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UAnimSequence*               CallFunc_GetOverridenAnimSequence_ReturnValue                    (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

class UAnimSequence* UBaseHumanAnimBP_C::GetCharSequenceNew(class UAnimSequence* AnimSeqIn, class APawn** CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, class UAnimSequence* CallFunc_GetOverridenAnimSequence_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharSequenceNew");

	Params::UBaseHumanAnimBP_C_GetCharSequenceNew_Params Parms{};

	Parms.AnimSeqIn = AnimSeqIn;
	Parms.CallFunc_GetOverridenAnimSequence_ReturnValue = CallFunc_GetOverridenAnimSequence_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_TryGetPawnOwner_ReturnValue != nullptr)
		*CallFunc_TryGetPawnOwner_ReturnValue = Parms.CallFunc_TryGetPawnOwner_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.GetCharMontageNew
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageIn                                                        (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UAnimMontage*                MontageOut                                                       (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UAnimMontage*                CallFunc_GetOverridenMontage_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)

class UAnimMontage* UBaseHumanAnimBP_C::GetCharMontageNew(class UAnimMontage** MontageIn, class UAnimMontage* MontageOut, class APawn** CallFunc_TryGetPawnOwner_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "GetCharMontageNew");

	Params::UBaseHumanAnimBP_C_GetCharMontageNew_Params Parms{};

	Parms.MontageOut = MontageOut;

	UObject::ProcessEvent(Func, &Parms);

	if (MontageIn != nullptr)
		*MontageIn = Parms.MontageIn;

	if (CallFunc_TryGetPawnOwner_ReturnValue != nullptr)
		*CallFunc_TryGetPawnOwner_ReturnValue = Parms.CallFunc_TryGetPawnOwner_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintPlayAnimationEvent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                AnimationMontage                                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              PlayRate                                                         (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               bPauseOnFinish                                                   (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
// float                              StartPosition                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              PlayedAnimLength                                                 (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UAnimMontage*                CallFunc_GetCharMontageNew_MontageOut                            (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Montage_Play_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)

bool UBaseHumanAnimBP_C::BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float PlayRate, float* PlayedAnimLength, float CallFunc_Montage_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintPlayAnimationEvent");

	Params::UBaseHumanAnimBP_C_BlueprintPlayAnimationEvent_Params Parms{};

	Parms.PlayRate = PlayRate;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimationMontage != nullptr)
		*AnimationMontage = Parms.AnimationMontage;

	if (PlayedAnimLength != nullptr)
		*PlayedAnimLength = Parms.PlayedAnimLength;

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B4400A394EF19973C454AEAF11CE8E03
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B4400A394EF19973C454AEAF11CE8E03()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B4400A394EF19973C454AEAF11CE8E03");



	UObject::ProcessEvent(Func, nullptr);

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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_9A6E719A4DA109EAF40589801BC190EB
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_9A6E719A4DA109EAF40589801BC190EB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_9A6E719A4DA109EAF40589801BC190EB");



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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B69F6BB544A6806C3088E5BFB64F7A08
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B69F6BB544A6806C3088E5BFB64F7A08()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_B69F6BB544A6806C3088E5BFB64F7A08");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_23AC1116408AAD80EC8046934289BEAC
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_23AC1116408AAD80EC8046934289BEAC()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_23AC1116408AAD80EC8046934289BEAC");



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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_8406B30C4FB8E9D1895668B056D78F23
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_8406B30C4FB8E9D1895668B056D78F23()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_8406B30C4FB8E9D1895668B056D78F23");



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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F82B29C441098B468424FF9DCE1E774E
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F82B29C441098B468424FF9DCE1E774E()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_BlendListByBool_F82B29C441098B468424FF9DCE1E774E");



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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.Update Bot Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       PawnOwner                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector                     RootLocationOffset                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::Update_Bot_Animation(class APawn* PawnOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "Update Bot Animation");

	Params::UBaseHumanAnimBP_C_Update_Bot_Animation_Params Parms{};

	Parms.PawnOwner = PawnOwner;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UBaseHumanAnimBP_C::BlueprintUpdateAnimation(float* DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "BlueprintUpdateAnimation");

	Params::UBaseHumanAnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTimeX != nullptr)
		*DeltaTimeX = Parms.DeltaTimeX;

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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_AA444B68423B6FAF1AB55D9935BBFB55
// (BlueprintEvent)
// Parameters:

void UBaseHumanAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_AA444B68423B6FAF1AB55D9935BBFB55()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_BaseHumanAnimBP_AnimGraphNode_ControlRig_AA444B68423B6FAF1AB55D9935BBFB55");



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


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.OnCharacterStepped
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     PrevLocation                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     NewLocation                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)

struct FVector UBaseHumanAnimBP_C::OnCharacterStepped(const struct FVector& NewLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "OnCharacterStepped");

	Params::UBaseHumanAnimBP_C_OnCharacterStepped_Params Parms{};

	Parms.NewLocation = NewLocation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BaseHumanAnimBP.BaseHumanAnimBP_C.ExecuteUbergraph_BaseHumanAnimBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (Edit, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Variable_3                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class APawn*                       K2Node_CustomEvent_PawnOwner                                     (Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_CustomEvent_DeltaTime                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_CustomEvent_RootLocationOffset                            (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalBotCharacter*         K2Node_DynamicCast_AsPrimal_Bot_Character                        (ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue                  (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_BoolToDouble_ReturnValue                           (Edit, ConstParm, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_GetVisualVelocity_ReturnValue                           (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_2                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (Edit, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_LessLess_VectorRotator_ReturnValue                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FRotator                    CallFunc_GetAimOffsets_RootRotOffset                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAimOffsets_TheRootYawSpeed                           (Net, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetAimOffsets_RootLocOffset                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_GetAimOffsets_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_3                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsRunning_ReturnValue                                   (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsOnSeatingStructure_ReturnValue                        (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetRole                CallFunc_GetRole_ReturnValue                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue                     (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetInterpolatedLocation_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_1                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// enum class ENetRole                CallFunc_GetRole_ReturnValue_1                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_4                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_GetVelocity_ReturnValue_1                               (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component_1              (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_GetAdditiveStandingAnimNonAdditive_ReturnValue          (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendInTime                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAdditiveStandingAnim_OutBlendOutTime                 (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAdditiveStandingAnim_ReturnValue                     (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut                           (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendInTime                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetAlternateStandingAnim_OutBlendOutTime                (Edit, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetAlternateStandingAnim_ReturnValue                    (ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAdditiveStandingAnim_ReturnValue                     (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_1                         (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_UseAlternateStandingAnim_ReturnValue                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_UseAltAimOffsetAnim_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// class AWeapClimbPick_C*            K2Node_DynamicCast_AsWeap_Climb_Pick                             (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_ObjectIsChildOfSoftRef_ReturnValue                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// float                              CallFunc_GetRidingDinoAnimSpeedRatio_ReturnValue                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetDefaultMovementSpeed_ReturnValue                     (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// class UAnimSequence*               CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_2                         (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UAnimSequence*               CallFunc_GetDinoRidingAnimation_ReturnValue_1                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference, Interp)
// class UAnimSequence*               CallFunc_GetCharSequenceNew_AnimSeqOut_3                         (BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsSitting_ReturnValue                                   (ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsUsingShield_ReturnValue                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsCurrentPassengerLimitCameraYaw_ReturnValue            (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsTargeting_ReturnValue                                 (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ForceTPVTargetingAnimation_ReturnValue                  (Edit, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_AnimUseAimOffset_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_AllowMountedWeaponry_ReturnValue                        (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_2                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_3                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_5                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue_1                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_6                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_4                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_DoubleToFloat_ReturnValue                               (Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_5                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_7                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_8                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_2                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_4                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_FClamp_ReturnValue_3                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_2                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_6                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_7                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_9                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_11                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_12                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_13                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_14                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_15                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_16                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_2                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetMoveAnimRate_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_8                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_9                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_17                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_18                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_19                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_10                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_3                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue_4                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_20                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_3                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_6                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_7                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_11                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetTPVHorizontalCameraOffset_ReturnValue                (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// struct FPrimalCameraParams         CallFunc_GetPrimalCameraParams_OutCameraParams                   (ConstParm, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue_4                                    (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_GetCurveValue_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_4                         (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_21                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_22                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_23                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly, NoDestructor)
// struct FVector                     K2Node_Event_PrevLocation                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     K2Node_Event_NewLocation                                         (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_5                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_24                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_BreakVector_X_6                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_12                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_25                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_13                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_FInterpTo_Constant_ReturnValue                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_14                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_26                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_27                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_15                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (Edit, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue_1                           (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_16                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_4                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue_1                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue                           (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_28                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_29                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// double                             K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Montage_IsPlaying_ReturnValue_1                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NoDestructor)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_8                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_10                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NoDestructor)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_5                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_17                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// class UAnimMontage*                K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Montage_Play_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_MapRangeClamped_ReturnValue_2                           (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// struct FRotator                    CallFunc_QInterpTo_ReturnValue                                   (BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// TArray<struct FRotator>            K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue_1                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character_1                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_ShouldASACameraSwitchToOld_ReturnValue                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_19                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional, NoDestructor)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue                          (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly, NoDestructor)
// bool                               CallFunc_ShouldUseASACamera_ReturnValue_1                        (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_24                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly, NoDestructor)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FInterpTo_ReturnValue                                   (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FInterpTo_ReturnValue_1                                 (ConstParm, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_3                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_11                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_SelectFloat_ReturnValue_4                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_6                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_12                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue_9                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// class UPrimitiveComponent*         CallFunc_GetBasedMovementComponent_ReturnValue                   (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class APrimalDinoCharacter*        CallFunc_GetBasedOnDino_ReturnValue                              (BlueprintVisible, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasDynamicBase_ReturnValue                              (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_IsBaseUnresolved_ReturnValue                            (ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_5                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_25                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_13                    (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Percent_FloatFloat_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_26                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly, NoDestructor)
// float                              K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_20                              (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// float                              K2Node_Select_Default_3                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_27                               (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly, NoDestructor)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_InterpLayeringValues_DeltaTime_ImplicitCast             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GroundIK_DeltaTime_ImplicitCast                         (ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Update_Bot_Animation_DeltaTime_ImplicitCast             (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             K2Node_VariableSet_Direction_ImplicitCast                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Abs_A_ImplicitCast                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AdditiveStandingBlendOut_ImplicitCast         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendIn_ImplicitCast         (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_AlternateStandingBlendOut_ImplicitCast        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_MinSprintSpeed_ImplicitCast                   (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_BallistaYaw_ImplicitCast                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_RidingDinoSpeedRatio_ImplicitCast             (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_Select_Option_0_ImplicitCast                              (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast_1                        (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (Edit, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast_1                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_QInterpTo_InterpSpeed_ImplicitCast                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_StructMemberSet___FloatProperty_14_ImplicitCast           (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Array_Set_Item_ImplicitCast_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Array_Set_Item_ImplicitCast_2                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              K2Node_Select_Option_0_ImplicitCast_1                            (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_Select_Option_0_ImplicitCast_2                            (ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

float UBaseHumanAnimBP_C::ExecuteUbergraph_BaseHumanAnimBP(int32* EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool* CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class APrimalBotCharacter** K2Node_DynamicCast_AsPrimal_Bot_Character, bool* K2Node_DynamicCast_bSuccess, class UAnimSequence** CallFunc_GetDinoRidingMoveAnimation_ReturnValue, double* CallFunc_Conv_BoolToDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float* K2Node_Event_DeltaTimeX, class APawn** CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_2, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, struct FRotator* CallFunc_NegateRotator_ReturnValue, const struct FVector& CallFunc_LessLess_VectorRotator_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, double* CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, struct FRotator* CallFunc_GetAimOffsets_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_3, bool* CallFunc_IsOnSeatingStructure_ReturnValue, enum class ENetRole CallFunc_GetRole_ReturnValue, enum class ENetRole CallFunc_GetRole_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_4, float* CallFunc_GetAdditiveStandingAnim_OutBlendInTime, float CallFunc_GetAdditiveStandingAnim_OutBlendOutTime, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut, float CallFunc_GetAlternateStandingAnim_OutBlendOutTime, class UAnimSequence** CallFunc_GetAlternateStandingAnim_ReturnValue, bool* CallFunc_UseAdditiveStandingAnim_ReturnValue, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_1, bool* K2Node_DynamicCast_bSuccess_5, bool CallFunc_ObjectIsChildOfSoftRef_ReturnValue, float CallFunc_GetDefaultMovementSpeed_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, class UAnimSequence** CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_2, class UAnimSequence* CallFunc_GetCharSequenceNew_AnimSeqOut_3, bool CallFunc_IsUsingShield_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_DoubleToFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double* CallFunc_Add_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double* CallFunc_Add_DoubleDouble_ReturnValue_3, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double* CallFunc_Add_DoubleDouble_ReturnValue_4, double CallFunc_FClamp_ReturnValue_3, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_2, float* CallFunc_GetMoveAnimRate_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_8, double CallFunc_Multiply_DoubleDouble_ReturnValue_9, float CallFunc_GetTPVHorizontalCameraOffset_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, const struct FPrimalCameraParams& CallFunc_GetPrimalCameraParams_OutCameraParams, double CallFunc_FClamp_ReturnValue_4, float* CallFunc_GetCurveValue_ReturnValue, struct FVector* K2Node_Event_PrevLocation, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue_1, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, bool* CallFunc_Montage_IsPlaying_ReturnValue, double K2Node_Select_Default, bool* CallFunc_Montage_IsPlaying_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_10, double* CallFunc_Add_DoubleDouble_ReturnValue_5, class UAnimMontage* K2Node_Select_Default_1, float CallFunc_Montage_Play_ReturnValue, double CallFunc_FClamp01_ReturnValue, TArray<struct FRotator>* K2Node_MakeArray_Array, struct FRotator* CallFunc_RLerp_ReturnValue, TArray<struct FRotator>* K2Node_MakeArray_Array_1, class APawn** CallFunc_TryGetPawnOwner_ReturnValue_1, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character_1, bool* K2Node_DynamicCast_bSuccess_6, bool* CallFunc_ShouldASACameraSwitchToOld_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue, bool CallFunc_ShouldUseASACamera_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FInterpTo_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_FInterpTo_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_11, double CallFunc_SelectFloat_ReturnValue_4, double* CallFunc_Add_DoubleDouble_ReturnValue_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_12, class APrimalDinoCharacter* CallFunc_GetBasedOnDino_ReturnValue, bool* CallFunc_HasDynamicBase_ReturnValue, bool CallFunc_IsBaseUnresolved_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_13, double CallFunc_Percent_FloatFloat_ReturnValue, float K2Node_Select_Default_2, float K2Node_Select_Default_3, double K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast, float* CallFunc_MakeRotator_Yaw_ImplicitCast, double CallFunc_GroundIK_DeltaTime_ImplicitCast, double CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, double K2Node_VariableSet_Direction_ImplicitCast, double CallFunc_Abs_A_ImplicitCast, double K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast, double* K2Node_VariableSet_MinSprintSpeed_ImplicitCast, double* K2Node_Select_Option_0_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Array_Set_Item_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast_1, float K2Node_StructMemberSet___FloatProperty_14_ImplicitCast, float* CallFunc_Array_Set_Item_ImplicitCast_1, float* CallFunc_Array_Set_Item_ImplicitCast_2, float* K2Node_Select_Option_0_ImplicitCast_1, float* K2Node_Select_Option_0_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseHumanAnimBP_C", "ExecuteUbergraph_BaseHumanAnimBP");

	Params::UBaseHumanAnimBP_C_ExecuteUbergraph_BaseHumanAnimBP_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_LessLess_VectorRotator_ReturnValue = CallFunc_LessLess_VectorRotator_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetRole_ReturnValue = CallFunc_GetRole_ReturnValue;
	Parms.CallFunc_GetRole_ReturnValue_1 = CallFunc_GetRole_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetAdditiveStandingAnim_OutBlendOutTime = CallFunc_GetAdditiveStandingAnim_OutBlendOutTime;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut = CallFunc_GetCharSequenceNew_AnimSeqOut;
	Parms.CallFunc_GetAlternateStandingAnim_OutBlendOutTime = CallFunc_GetAlternateStandingAnim_OutBlendOutTime;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_1 = CallFunc_GetCharSequenceNew_AnimSeqOut_1;
	Parms.CallFunc_ObjectIsChildOfSoftRef_ReturnValue = CallFunc_ObjectIsChildOfSoftRef_ReturnValue;
	Parms.CallFunc_GetDefaultMovementSpeed_ReturnValue = CallFunc_GetDefaultMovementSpeed_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_2 = CallFunc_GetCharSequenceNew_AnimSeqOut_2;
	Parms.CallFunc_GetCharSequenceNew_AnimSeqOut_3 = CallFunc_GetCharSequenceNew_AnimSeqOut_3;
	Parms.CallFunc_IsUsingShield_ReturnValue = CallFunc_IsUsingShield_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_DoubleToFloat_ReturnValue = CallFunc_DoubleToFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_FClamp_ReturnValue_2 = CallFunc_FClamp_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_FClamp_ReturnValue_3 = CallFunc_FClamp_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_6 = CallFunc_Multiply_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_7 = CallFunc_Multiply_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_8 = CallFunc_Multiply_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_9 = CallFunc_Multiply_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_GetTPVHorizontalCameraOffset_ReturnValue = CallFunc_GetTPVHorizontalCameraOffset_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetPrimalCameraParams_OutCameraParams = CallFunc_GetPrimalCameraParams_OutCameraParams;
	Parms.CallFunc_FClamp_ReturnValue_4 = CallFunc_FClamp_ReturnValue_4;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue_1 = CallFunc_ComposeRotators_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_10 = CallFunc_Multiply_DoubleDouble_ReturnValue_10;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Montage_Play_ReturnValue = CallFunc_Montage_Play_ReturnValue;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character_1 = K2Node_DynamicCast_AsShooter_Character_1;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue = CallFunc_ShouldUseASACamera_ReturnValue;
	Parms.CallFunc_ShouldUseASACamera_ReturnValue_1 = CallFunc_ShouldUseASACamera_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_FInterpTo_ReturnValue_1 = CallFunc_FInterpTo_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_3 = CallFunc_SelectFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_11 = CallFunc_Multiply_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_SelectFloat_ReturnValue_4 = CallFunc_SelectFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_12 = CallFunc_Multiply_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_GetBasedOnDino_ReturnValue = CallFunc_GetBasedOnDino_ReturnValue;
	Parms.CallFunc_IsBaseUnresolved_ReturnValue = CallFunc_IsBaseUnresolved_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_13 = CallFunc_Multiply_DoubleDouble_ReturnValue_13;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast = K2Node_VariableSet___CustomProperty_Bone_Modifiers_Leg_Length_Percentage_70F814824E1F2517DC3C5C9DBE08009C_ImplicitCast;
	Parms.CallFunc_GroundIK_DeltaTime_ImplicitCast = CallFunc_GroundIK_DeltaTime_ImplicitCast;
	Parms.CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast = CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSet_Direction_ImplicitCast = K2Node_VariableSet_Direction_ImplicitCast;
	Parms.CallFunc_Abs_A_ImplicitCast = CallFunc_Abs_A_ImplicitCast;
	Parms.K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast = K2Node_VariableSet_AdditiveStandingBlendIn_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast_1 = CallFunc_MapRangeClamped_Value_ImplicitCast_1;
	Parms.K2Node_StructMemberSet___FloatProperty_14_ImplicitCast = K2Node_StructMemberSet___FloatProperty_14_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Bot_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Bot_Character = Parms.K2Node_DynamicCast_AsPrimal_Bot_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetDinoRidingMoveAnimation_ReturnValue != nullptr)
		*CallFunc_GetDinoRidingMoveAnimation_ReturnValue = Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue;

	if (CallFunc_Conv_BoolToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToDouble_ReturnValue = Parms.CallFunc_Conv_BoolToDouble_ReturnValue;

	if (K2Node_Event_DeltaTimeX != nullptr)
		*K2Node_Event_DeltaTimeX = Parms.K2Node_Event_DeltaTimeX;

	if (CallFunc_TryGetPawnOwner_ReturnValue != nullptr)
		*CallFunc_TryGetPawnOwner_ReturnValue = Parms.CallFunc_TryGetPawnOwner_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_NegateRotator_ReturnValue != nullptr)
		*CallFunc_NegateRotator_ReturnValue = std::move(Parms.CallFunc_NegateRotator_ReturnValue);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_GetAimOffsets_ReturnValue != nullptr)
		*CallFunc_GetAimOffsets_ReturnValue = std::move(Parms.CallFunc_GetAimOffsets_ReturnValue);

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_IsOnSeatingStructure_ReturnValue != nullptr)
		*CallFunc_IsOnSeatingStructure_ReturnValue = Parms.CallFunc_IsOnSeatingStructure_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_GetAdditiveStandingAnim_OutBlendInTime != nullptr)
		*CallFunc_GetAdditiveStandingAnim_OutBlendInTime = Parms.CallFunc_GetAdditiveStandingAnim_OutBlendInTime;

	if (CallFunc_GetAlternateStandingAnim_ReturnValue != nullptr)
		*CallFunc_GetAlternateStandingAnim_ReturnValue = Parms.CallFunc_GetAlternateStandingAnim_ReturnValue;

	if (CallFunc_UseAdditiveStandingAnim_ReturnValue != nullptr)
		*CallFunc_UseAdditiveStandingAnim_ReturnValue = Parms.CallFunc_UseAdditiveStandingAnim_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1 != nullptr)
		*CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1 = Parms.CallFunc_GetDinoRidingMoveAnimation_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_3;

	if (CallFunc_Add_DoubleDouble_ReturnValue_4 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_4 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_4;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_GetMoveAnimRate_ReturnValue != nullptr)
		*CallFunc_GetMoveAnimRate_ReturnValue = Parms.CallFunc_GetMoveAnimRate_ReturnValue;

	if (CallFunc_GetCurveValue_ReturnValue != nullptr)
		*CallFunc_GetCurveValue_ReturnValue = Parms.CallFunc_GetCurveValue_ReturnValue;

	if (K2Node_Event_PrevLocation != nullptr)
		*K2Node_Event_PrevLocation = std::move(Parms.K2Node_Event_PrevLocation);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_Montage_IsPlaying_ReturnValue != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue = Parms.CallFunc_Montage_IsPlaying_ReturnValue;

	if (CallFunc_Montage_IsPlaying_ReturnValue_1 != nullptr)
		*CallFunc_Montage_IsPlaying_ReturnValue_1 = Parms.CallFunc_Montage_IsPlaying_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue_5 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_5 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_5;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (CallFunc_RLerp_ReturnValue != nullptr)
		*CallFunc_RLerp_ReturnValue = std::move(Parms.CallFunc_RLerp_ReturnValue);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (CallFunc_TryGetPawnOwner_ReturnValue_1 != nullptr)
		*CallFunc_TryGetPawnOwner_ReturnValue_1 = Parms.CallFunc_TryGetPawnOwner_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (CallFunc_ShouldASACameraSwitchToOld_ReturnValue != nullptr)
		*CallFunc_ShouldASACameraSwitchToOld_ReturnValue = Parms.CallFunc_ShouldASACameraSwitchToOld_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_6 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_6 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_6;

	if (CallFunc_HasDynamicBase_ReturnValue != nullptr)
		*CallFunc_HasDynamicBase_ReturnValue = Parms.CallFunc_HasDynamicBase_ReturnValue;

	if (CallFunc_MakeRotator_Yaw_ImplicitCast != nullptr)
		*CallFunc_MakeRotator_Yaw_ImplicitCast = Parms.CallFunc_MakeRotator_Yaw_ImplicitCast;

	if (K2Node_VariableSet_MinSprintSpeed_ImplicitCast != nullptr)
		*K2Node_VariableSet_MinSprintSpeed_ImplicitCast = Parms.K2Node_VariableSet_MinSprintSpeed_ImplicitCast;

	if (K2Node_Select_Option_0_ImplicitCast != nullptr)
		*K2Node_Select_Option_0_ImplicitCast = Parms.K2Node_Select_Option_0_ImplicitCast;

	if (CallFunc_Array_Set_Item_ImplicitCast != nullptr)
		*CallFunc_Array_Set_Item_ImplicitCast = Parms.CallFunc_Array_Set_Item_ImplicitCast;

	if (CallFunc_Array_Set_Item_ImplicitCast_1 != nullptr)
		*CallFunc_Array_Set_Item_ImplicitCast_1 = Parms.CallFunc_Array_Set_Item_ImplicitCast_1;

	if (CallFunc_Array_Set_Item_ImplicitCast_2 != nullptr)
		*CallFunc_Array_Set_Item_ImplicitCast_2 = Parms.CallFunc_Array_Set_Item_ImplicitCast_2;

	if (K2Node_Select_Option_0_ImplicitCast_1 != nullptr)
		*K2Node_Select_Option_0_ImplicitCast_1 = Parms.K2Node_Select_Option_0_ImplicitCast_1;

	if (K2Node_Select_Option_0_ImplicitCast_2 != nullptr)
		*K2Node_Select_Option_0_ImplicitCast_2 = Parms.K2Node_Select_Option_0_ImplicitCast_2;

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


