#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalCharAnimFunctions.PrimalCharAnimFunctions_C
// (None)

class UClass* UPrimalCharAnimFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalCharAnimFunctions_C");

	return Clss;
}


// PrimalCharAnimFunctions_C PrimalCharAnimFunctions.Default__PrimalCharAnimFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalCharAnimFunctions_C* UPrimalCharAnimFunctions_C::GetDefaultObj()
{
	static class UPrimalCharAnimFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalCharAnimFunctions_C*>(UPrimalCharAnimFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalCharAnimFunctions.PrimalCharAnimFunctions_C.UpdateGroundConformingVariables
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            PrimalCharacter                                                  (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               Has_Hit_The_Ground_Once                                          (ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Config, SubobjectReference)
// bool                               IsBeingDragged                                                   (Edit, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               IsSwimming                                                       (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               IsFalling                                                        (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               Should_Mark_Has_Hit_Ground_once                                  (BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Interpolate                                                      (Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               bInterpolate                                                     (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               Ret_Should_Mark_Has_Hit_Ground_once                              (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bFallingMovement                                                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               bSwimmingMovement                                                (BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged_And_Underwater                                  (ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetImmersionDepth_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (Edit, Net, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

double UPrimalCharAnimFunctions_C::UpdateGroundConformingVariables(bool* Has_Hit_The_Ground_Once, class UObject** __WorldContext, bool IsSwimming, bool IsFalling, bool Interpolate, bool* bFallingMovement, bool* bSwimmingMovement, bool* Is_Being_Dragged, float* CallFunc_GetImmersionDepth_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalCharAnimFunctions_C", "UpdateGroundConformingVariables");

	Params::UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params Parms{};

	Parms.IsSwimming = IsSwimming;
	Parms.IsFalling = IsFalling;
	Parms.Interpolate = Interpolate;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Hit_The_Ground_Once != nullptr)
		*Has_Hit_The_Ground_Once = Parms.Has_Hit_The_Ground_Once;

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (bFallingMovement != nullptr)
		*bFallingMovement = Parms.bFallingMovement;

	if (bSwimmingMovement != nullptr)
		*bSwimmingMovement = Parms.bSwimmingMovement;

	if (Is_Being_Dragged != nullptr)
		*Is_Being_Dragged = Parms.Is_Being_Dragged;

	if (CallFunc_GetImmersionDepth_ReturnValue != nullptr)
		*CallFunc_GetImmersionDepth_ReturnValue = Parms.CallFunc_GetImmersionDepth_ReturnValue;

	if (CallFunc_GetTimeSeconds_ReturnValue != nullptr)
		*CallFunc_GetTimeSeconds_ReturnValue = Parms.CallFunc_GetTimeSeconds_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_ReturnValue != nullptr)
		*CallFunc_Subtract_DoubleFloat_ReturnValue = Parms.CallFunc_Subtract_DoubleFloat_ReturnValue;

	if (CallFunc_Subtract_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Subtract_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Subtract_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


