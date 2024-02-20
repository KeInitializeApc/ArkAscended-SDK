#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C
// (None)

class UClass* UHuman_Male_TPV_PPAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Human_Male_TPV_PPAnimBP_C");

	return Clss;
}


// Human_Male_TPV_PPAnimBP_C Human_Male_TPV_PPAnimBP.Default__Human_Male_TPV_PPAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHuman_Male_TPV_PPAnimBP_C* UHuman_Male_TPV_PPAnimBP_C::GetDefaultObj()
{
	static class UHuman_Male_TPV_PPAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHuman_Male_TPV_PPAnimBP_C*>(UHuman_Male_TPV_PPAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, EditConst)
// struct FPoseLink                   AnimGraph                                                        (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst)

struct FPoseLink UHuman_Male_TPV_PPAnimBP_C::AnimGraph(const struct FPoseLink& AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "AnimGraph");

	Params::UHuman_Male_TPV_PPAnimBP_C_AnimGraph_Params Parms{};

	Parms.AnimGraph = AnimGraph;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

float UHuman_Male_TPV_PPAnimBP_C::BlueprintUpdateAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "BlueprintUpdateAnimation");

	Params::UHuman_Male_TPV_PPAnimBP_C_BlueprintUpdateAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Human_Male_TPV_PPAnimBP.Human_Male_TPV_PPAnimBP_C.ExecuteUbergraph_Human_Male_TPV_PPAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTimeX                                          (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// class APawn*                       CallFunc_TryGetPawnOwner_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsFirstPersonCamera_ReturnValue                         (ConstParm, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsRider_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_GetBasedOnDinoAsActor_ReturnValue                       (ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UBaseHumanAnimBP_C*          K2Node_DynamicCast_AsBase_Human_Anim_BP                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_FMax_ReturnValue                                        (BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_B_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UHuman_Male_TPV_PPAnimBP_C::ExecuteUbergraph_Human_Male_TPV_PPAnimBP(float K2Node_Event_DeltaTimeX, bool CallFunc_IsFirstPersonCamera_ReturnValue, bool CallFunc_IsRider_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, class AActor* CallFunc_GetBasedOnDinoAsActor_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UBaseHumanAnimBP_C** K2Node_DynamicCast_AsBase_Human_Anim_BP, bool* CallFunc_NotEqual_BoolBool_ReturnValue, double CallFunc_FMax_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Human_Male_TPV_PPAnimBP_C", "ExecuteUbergraph_Human_Male_TPV_PPAnimBP");

	Params::UHuman_Male_TPV_PPAnimBP_C_ExecuteUbergraph_Human_Male_TPV_PPAnimBP_Params Parms{};

	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_IsFirstPersonCamera_ReturnValue = CallFunc_IsFirstPersonCamera_ReturnValue;
	Parms.CallFunc_IsRider_ReturnValue = CallFunc_IsRider_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_GetBasedOnDinoAsActor_ReturnValue = CallFunc_GetBasedOnDinoAsActor_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_AsBase_Human_Anim_BP != nullptr)
		*K2Node_DynamicCast_AsBase_Human_Anim_BP = Parms.K2Node_DynamicCast_AsBase_Human_Anim_BP;

	if (CallFunc_NotEqual_BoolBool_ReturnValue != nullptr)
		*CallFunc_NotEqual_BoolBool_ReturnValue = Parms.CallFunc_NotEqual_BoolBool_ReturnValue;

	return Parms.ReturnValue;

}

}


