#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C
// (None)

class UClass* UFPVClimbPickWeaponAnimBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FPVClimbPickWeaponAnimBP_Base_C");

	return Clss;
}


// FPVClimbPickWeaponAnimBP_Base_C FPVClimbPickWeaponAnimBP_Base.Default__FPVClimbPickWeaponAnimBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFPVClimbPickWeaponAnimBP_Base_C* UFPVClimbPickWeaponAnimBP_Base_C::GetDefaultObj()
{
	static class UFPVClimbPickWeaponAnimBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFPVClimbPickWeaponAnimBP_Base_C*>(UFPVClimbPickWeaponAnimBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

void UFPVClimbPickWeaponAnimBP_Base_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "AnimGraph");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UFPVClimbPickWeaponAnimBP_Base_C::BlueprintUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "BlueprintUpdateAnimation");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451
// (BlueprintEvent)
// Parameters:

void UFPVClimbPickWeaponAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_3DE4BFF340F0FB0AA29320AF578C8451");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3
// (BlueprintEvent)
// Parameters:

void UFPVClimbPickWeaponAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_ApplyAdditive_21FAB2184A08438AA94D02A2394241B3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06
// (BlueprintEvent)
// Parameters:

void UFPVClimbPickWeaponAnimBP_Base_C::EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_14BA7FC34C87107147CB00ACF072AD06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (BlueprintVisible, ExportObject, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, Net, Parm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast            (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)

bool UFPVClimbPickWeaponAnimBP_Base_C::ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(class AActor* CallFunc_GetOwningActor_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double* CallFunc_VSize2D_ReturnValue, float K2Node_Event_DeltaTimeX, double* CallFunc_Abs_ReturnValue, double* CallFunc_FClamp_ReturnValue, double K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast = K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_VSize2D_ReturnValue != nullptr)
		*CallFunc_VSize2D_ReturnValue = Parms.CallFunc_VSize2D_ReturnValue;

	if (CallFunc_Abs_ReturnValue != nullptr)
		*CallFunc_Abs_ReturnValue = Parms.CallFunc_Abs_ReturnValue;

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	return Parms.ReturnValue;

}

}


