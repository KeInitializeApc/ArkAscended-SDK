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
// class APrimalCharacter*            PrimalCharacter                                                  (ConstParm, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, GlobalConfig)
// bool                               Has_Hit_The_Ground_Once                                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UObject*                     __WorldContext                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               IsBeingDragged                                                   (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               IsSwimming                                                       (ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               IsFalling                                                        (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)
// bool                               Should_Mark_Has_Hit_Ground_once                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Interpolate                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               bInterpolate                                                     (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Ret_Should_Mark_Has_Hit_Ground_once                              (Edit, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFallingMovement                                                 (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bSwimmingMovement                                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               Is_Being_Dragged_And_Underwater                                  (ExportObject, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UCharacterMovementComponent* K2Node_DynamicCast_AsCharacter_Movement_Component                (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// float                              CallFunc_GetImmersionDepth_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_GetTimeSeconds_ReturnValue                              (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

float UPrimalCharAnimFunctions_C::UpdateGroundConformingVariables(class APrimalCharacter* PrimalCharacter, bool* Has_Hit_The_Ground_Once, class UObject* __WorldContext, bool IsBeingDragged, bool* IsSwimming, bool IsFalling, bool Should_Mark_Has_Hit_Ground_once, bool* Interpolate, bool Ret_Should_Mark_Has_Hit_Ground_once, bool* bFallingMovement, bool* bSwimmingMovement, bool* Is_Being_Dragged, bool Is_Being_Dragged_And_Underwater, bool* K2Node_DynamicCast_bSuccess, float* CallFunc_GetImmersionDepth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalCharAnimFunctions_C", "UpdateGroundConformingVariables");

	Params::UPrimalCharAnimFunctions_C_UpdateGroundConformingVariables_Params Parms{};

	Parms.PrimalCharacter = PrimalCharacter;
	Parms.__WorldContext = __WorldContext;
	Parms.IsBeingDragged = IsBeingDragged;
	Parms.IsFalling = IsFalling;
	Parms.Should_Mark_Has_Hit_Ground_once = Should_Mark_Has_Hit_Ground_once;
	Parms.Ret_Should_Mark_Has_Hit_Ground_once = Ret_Should_Mark_Has_Hit_Ground_once;
	Parms.Is_Being_Dragged_And_Underwater = Is_Being_Dragged_And_Underwater;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Hit_The_Ground_Once != nullptr)
		*Has_Hit_The_Ground_Once = Parms.Has_Hit_The_Ground_Once;

	if (IsSwimming != nullptr)
		*IsSwimming = Parms.IsSwimming;

	if (Interpolate != nullptr)
		*Interpolate = Parms.Interpolate;

	if (bFallingMovement != nullptr)
		*bFallingMovement = Parms.bFallingMovement;

	if (bSwimmingMovement != nullptr)
		*bSwimmingMovement = Parms.bSwimmingMovement;

	if (Is_Being_Dragged != nullptr)
		*Is_Being_Dragged = Parms.Is_Being_Dragged;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetImmersionDepth_ReturnValue != nullptr)
		*CallFunc_GetImmersionDepth_ReturnValue = Parms.CallFunc_GetImmersionDepth_ReturnValue;

	return Parms.ReturnValue;

}

}


