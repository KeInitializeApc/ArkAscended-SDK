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
// struct FPoseLink                   AnimGraph                                                        (Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst)

struct FPoseLink UFPVClimbPickWeaponAnimBP_Base_C::AnimGraph()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "AnimGraph");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FPVClimbPickWeaponAnimBP_Base.FPVClimbPickWeaponAnimBP_Base_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (ConstParm, BlueprintVisible, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, OutParm, EditConst, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (BlueprintReadOnly, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (Edit, Net, EditFixedSize, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsRunning_ReturnValue                                   (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue                                         (ConstParm, Net, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (Edit, BlueprintVisible, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast            (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (Edit, BlueprintVisible, ExportObject, Net, Parm, Transient, Config, DisableEditOnInstance, SubobjectReference)

bool UFPVClimbPickWeaponAnimBP_Base_C::ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(class AActor** CallFunc_GetOwningActor_ReturnValue, class AShooterWeapon_Climb* K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, struct FVector* CallFunc_GetVelocity_ReturnValue, float K2Node_Event_DeltaTimeX, double* CallFunc_FClamp_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb = K2Node_DynamicCast_AsShooter_Weapon_Climb;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast = K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningActor_ReturnValue != nullptr)
		*CallFunc_GetOwningActor_ReturnValue = Parms.CallFunc_GetOwningActor_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_FClamp_ReturnValue != nullptr)
		*CallFunc_FClamp_ReturnValue = Parms.CallFunc_FClamp_ReturnValue;

	return Parms.ReturnValue;

}

}


