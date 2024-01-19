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
// class APrimalCharacter*            PrimalCharacter                                                  (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Has_Hit_The_Ground_Once                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (Edit, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               IsBeingDragged                                                   (Edit, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               IsSwimming                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               IsFalling                                                        (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, SubobjectReference)
// bool                               Should_Mark_Has_Hit_Ground_once                                  (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               Interpolate                                                      (Parm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               bInterpolate                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               Ret_Should_Mark_Has_Hit_Ground_once                              (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               bFallingMovement                                                 (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               bSwimmingMovement                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged                                                 (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged_And_Underwater                                  (BlueprintReadOnly, EditFixedSize, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetImmersionDepth_ReturnValue                           (ConstParm, BlueprintVisible, Net, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ConstParm, ExportObject, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

float UPrimalCharAnimFunctions_C::UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool Has_Hit_The_Ground_Once, class UObject** __WorldContext, bool IsBeingDragged, bool IsSwimming, bool IsFalling, bool Should_Mark_Has_Hit_Ground_once, bool Interpolate, bool bInterpolate, bool Ret_Should_Mark_Has_Hit_Ground_once, bool bFallingMovement, bool bSwimmingMovement, bool Is_Being_Dragged, bool Is_Being_Dragged_And_Underwater, float CallFunc_GetImmersionDepth_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalCharAnimFunctions_C", "UpdateGroundConformingVariables");

	Params::UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params Parms{};

	Parms.PrimalCharacter = PrimalCharacter;
	Parms.Has_Hit_The_Ground_Once = Has_Hit_The_Ground_Once;
	Parms.IsBeingDragged = IsBeingDragged;
	Parms.IsSwimming = IsSwimming;
	Parms.IsFalling = IsFalling;
	Parms.Should_Mark_Has_Hit_Ground_once = Should_Mark_Has_Hit_Ground_once;
	Parms.Interpolate = Interpolate;
	Parms.bInterpolate = bInterpolate;
	Parms.Ret_Should_Mark_Has_Hit_Ground_once = Ret_Should_Mark_Has_Hit_Ground_once;
	Parms.bFallingMovement = bFallingMovement;
	Parms.bSwimmingMovement = bSwimmingMovement;
	Parms.Is_Being_Dragged = Is_Being_Dragged;
	Parms.Is_Being_Dragged_And_Underwater = Is_Being_Dragged_And_Underwater;
	Parms.CallFunc_GetImmersionDepth_ReturnValue = CallFunc_GetImmersionDepth_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (__WorldContext != nullptr)
		*__WorldContext = Parms.__WorldContext;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue_1 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_1 = Parms.CallFunc_BooleanOR_ReturnValue_1;

	if (CallFunc_BooleanOR_ReturnValue_2 != nullptr)
		*CallFunc_BooleanOR_ReturnValue_2 = Parms.CallFunc_BooleanOR_ReturnValue_2;

	return Parms.ReturnValue;

}

}


