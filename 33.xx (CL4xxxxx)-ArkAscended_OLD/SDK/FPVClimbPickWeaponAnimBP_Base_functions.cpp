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
// float                              DeltaTimeX                                                       (ConstParm, ExportObject, EditConst, InstancedReference, SubobjectReference)

void UFPVClimbPickWeaponAnimBP_Base_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "BlueprintUpdateAnimation");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

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
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, EditConst, SubobjectReference)
// class AShooterWeapon_Climb*        K2Node_DynamicCast_AsShooter_Weapon_Climb                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsClimbingHanging_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPawnOwner_ReturnValue                                (ConstParm, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsRunning_ReturnValue                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// double                             CallFunc_VSize2D_ReturnValue                                     (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_StructMemberSet_Alpha_ImplicitCast                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)

double UFPVClimbPickWeaponAnimBP_Base_C::ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class AShooterWeapon_Climb** K2Node_DynamicCast_AsShooter_Weapon_Climb, bool* CallFunc_IsClimbingHanging_ReturnValue, bool* CallFunc_NotEqual_ByteByte_ReturnValue, class AShooterCharacter* CallFunc_GetPawnOwner_ReturnValue, class AShooterCharacter** K2Node_DynamicCast_AsShooter_Character, struct FVector* CallFunc_GetVelocity_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, float K2Node_Event_DeltaTimeX, double CallFunc_FClamp_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, double K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast, float K2Node_StructMemberSet_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FPVClimbPickWeaponAnimBP_Base_C", "ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base");

	Params::UFPVClimbPickWeaponAnimBP_Base_C_ExecuteUbergraph_FPVClimbPickWeaponAnimBP_Base_Params Parms{};

	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.CallFunc_GetPawnOwner_ReturnValue = CallFunc_GetPawnOwner_ReturnValue;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast = K2Node_VariableSet_ClimbingLookingToSide_ImplicitCast;
	Parms.K2Node_StructMemberSet_Alpha_ImplicitCast = K2Node_StructMemberSet_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_AsShooter_Weapon_Climb != nullptr)
		*K2Node_DynamicCast_AsShooter_Weapon_Climb = Parms.K2Node_DynamicCast_AsShooter_Weapon_Climb;

	if (CallFunc_IsClimbingHanging_ReturnValue != nullptr)
		*CallFunc_IsClimbingHanging_ReturnValue = Parms.CallFunc_IsClimbingHanging_ReturnValue;

	if (CallFunc_NotEqual_ByteByte_ReturnValue != nullptr)
		*CallFunc_NotEqual_ByteByte_ReturnValue = Parms.CallFunc_NotEqual_ByteByte_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Character != nullptr)
		*K2Node_DynamicCast_AsShooter_Character = Parms.K2Node_DynamicCast_AsShooter_Character;

	if (CallFunc_GetVelocity_ReturnValue != nullptr)
		*CallFunc_GetVelocity_ReturnValue = std::move(Parms.CallFunc_GetVelocity_ReturnValue);

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_BooleanAND_ReturnValue != nullptr)
		*CallFunc_BooleanAND_ReturnValue = Parms.CallFunc_BooleanAND_ReturnValue;

	return Parms.ReturnValue;

}

}


