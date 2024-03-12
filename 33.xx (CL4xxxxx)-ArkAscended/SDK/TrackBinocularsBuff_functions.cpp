#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TrackBinocularsBuff.TrackBinocularsBuff_C
// (Actor)

class UClass* ATrackBinocularsBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrackBinocularsBuff_C");

	return Clss;
}


// TrackBinocularsBuff_C TrackBinocularsBuff.Default__TrackBinocularsBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATrackBinocularsBuff_C* ATrackBinocularsBuff_C::GetDefaultObj()
{
	static class ATrackBinocularsBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATrackBinocularsBuff_C*>(ATrackBinocularsBuff_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.Handle Depth Of Field
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldBeDisabled                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ATrackBinocularsBuff_C::Handle_Depth_Of_Field()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "Handle Depth Of Field");

	Params::ATrackBinocularsBuff_C_Handle_Depth_Of_Field_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ShouldPPBeActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldBeActive                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ATrackBinocularsBuff_C::ShouldPPBeActive(bool ShouldBeActive, bool CallFunc_IsTimeSince_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ShouldPPBeActive");

	Params::ATrackBinocularsBuff_C_ShouldPPBeActive_Params Parms{};

	Parms.ShouldBeActive = ShouldBeActive;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPDeactivated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsLocallyControlledByPlayer_ReturnValue                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

void ATrackBinocularsBuff_C::BPDeactivated(class AActor** ForInstigator, bool* CallFunc_IsLocallyControlledByPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BPDeactivated");

	Params::ATrackBinocularsBuff_C_BPDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

	if (CallFunc_IsLocallyControlledByPlayer_ReturnValue != nullptr)
		*CallFunc_IsLocallyControlledByPlayer_ReturnValue = Parms.CallFunc_IsLocallyControlledByPlayer_ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdateCustomDepth
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForActor                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Enable                                                           (Edit, ConstParm, ExportObject, Parm, Transient, Config, DisableEditOnInstance)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class USceneComponent*>     CallFunc_GetAllSceneComponents_OutComponents                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPrimitiveComponent*         K2Node_DynamicCast_AsPrimitive_Component                         (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)

int32 ATrackBinocularsBuff_C::UpdateCustomDepth(class AActor** ForActor, bool Enable, int32 Temp_int_Array_Index_Variable, const TArray<class USceneComponent*>& CallFunc_GetAllSceneComponents_OutComponents, class USceneComponent* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "UpdateCustomDepth");

	Params::ATrackBinocularsBuff_C_UpdateCustomDepth_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAllSceneComponents_OutComponents = CallFunc_GetAllSceneComponents_OutComponents;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (ForActor != nullptr)
		*ForActor = Parms.ForActor;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.UpdatePP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceDisable                                                     (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_ShouldPPBeActive_ShouldBeActive                         (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerCameraManager* K2Node_DynamicCast_AsShooter_Player_Camera_Manager               (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_ShouldPPBeActive_ShouldBeActive_1                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UMaterialInterface*          K2Node_DynamicCast_AsMaterial_Interface                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UObject*                     CallFunc_GetBlendableFromMIC_ReturnValue                         (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    K2Node_DynamicCast_AsMaterial_Instance_Dynamic                   (Edit, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class UMaterialInterface*>  K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_ShouldPPBeActive_ShouldBeActive_2                       (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

float ATrackBinocularsBuff_C::UpdatePP(bool CallFunc_ShouldPPBeActive_ShouldBeActive, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldPPBeActive_ShouldBeActive_1, double CallFunc_SelectFloat_ReturnValue, class UMaterialInterface* K2Node_DynamicCast_AsMaterial_Interface, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue_1, class UObject** CallFunc_GetBlendableFromMIC_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess_2, TArray<class UMaterialInterface*>* K2Node_MakeArray_Array, bool CallFunc_ShouldPPBeActive_ShouldBeActive_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "UpdatePP");

	Params::ATrackBinocularsBuff_C_UpdatePP_Params Parms{};

	Parms.CallFunc_ShouldPPBeActive_ShouldBeActive = CallFunc_ShouldPPBeActive_ShouldBeActive;
	Parms.CallFunc_ShouldPPBeActive_ShouldBeActive_1 = CallFunc_ShouldPPBeActive_ShouldBeActive_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsMaterial_Interface = K2Node_DynamicCast_AsMaterial_Interface;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
	Parms.CallFunc_ShouldPPBeActive_ShouldBeActive_2 = CallFunc_ShouldPPBeActive_ShouldBeActive_2;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_GetBlendableFromMIC_ReturnValue != nullptr)
		*CallFunc_GetBlendableFromMIC_ReturnValue = Parms.CallFunc_GetBlendableFromMIC_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.AllowPostProcessEffect
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_ShouldPPBeActive_ShouldBeActive                         (BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

bool ATrackBinocularsBuff_C::AllowPostProcessEffect(bool CallFunc_ShouldPPBeActive_ShouldBeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "AllowPostProcessEffect");

	Params::ATrackBinocularsBuff_C_AllowPostProcessEffect_Params Parms{};

	Parms.CallFunc_ShouldPPBeActive_ShouldBeActive = CallFunc_ShouldPPBeActive_ShouldBeActive;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPGetWaypointsBuff
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FPointOfInterestData_ForCompanion>IndicatorsOut                                                    (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsWildSlow_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// TArray<struct FPointOfInterestData_ForCompanion>CallFunc_BPGetWaypointsBuff_IndicatorsOut                        (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// float                              CallFunc_GetHealthPercentage_ReturnValue                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FPointOfInterestData        K2Node_MakeStruct_PointOfInterestData                            (Edit, ConstParm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FPointOfInterestData_ForCompanionK2Node_MakeStruct_PointOfInterestData_ForCompanion               (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Divide_DoubleFloat_A_ImplicitCast                       (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_MakeStruct_SecondaryProgressValue_ImplicitCast            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)

float ATrackBinocularsBuff_C::BPGetWaypointsBuff(const TArray<struct FPointOfInterestData_ForCompanion>& IndicatorsOut, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess, TArray<struct FPointOfInterestData_ForCompanion>* CallFunc_BPGetWaypointsBuff_IndicatorsOut, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_Divide_DoubleFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BPGetWaypointsBuff");

	Params::ATrackBinocularsBuff_C_BPGetWaypointsBuff_Params Parms{};

	Parms.IndicatorsOut = IndicatorsOut;
	Parms.CallFunc_Divide_DoubleFloat_A_ImplicitCast = CallFunc_Divide_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_BPGetWaypointsBuff_IndicatorsOut != nullptr)
		*CallFunc_BPGetWaypointsBuff_IndicatorsOut = std::move(Parms.CallFunc_BPGetWaypointsBuff_IndicatorsOut);

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.TryDeactivateTrackBino
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RemoveWeaponRef                                                  (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ATrackBinocularsBuff_C::TryDeactivateTrackBino()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "TryDeactivateTrackBino");

	Params::ATrackBinocularsBuff_C_TryDeactivateTrackBino_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPTryMultiUse
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              UseIndex                                                         (Edit, ConstParm, Net, OutParm, ReturnParm, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BPTryMultiUse_ReturnValue                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool ATrackBinocularsBuff_C::BPTryMultiUse(class APlayerController** ForPC, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BPTryMultiUse");

	Params::ATrackBinocularsBuff_C_BPTryMultiUse_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.GetAllStatPoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalCharacterStatusComponent*Self2                                                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalActor*                Target                                                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Transient, Config)
// TArray<int32>                      Wild                                                             (Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Mutations                                                        (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      Tamed                                                            (ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      LocalTamedPoints                                                 (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      LocalMutationPoints                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      LocalStatsPoints                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_GetLevelUpPoints_ReturnValue                            (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_GetMutationPoints_ReturnValue                           (BlueprintVisible, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetLevelUpPoints_ReturnValue_1                          (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

int32 ATrackBinocularsBuff_C::GetAllStatPoints(class UPrimalCharacterStatusComponent* Self2, const TArray<int32>& LocalTamedPoints, const TArray<int32>& LocalStatsPoints, int32* Temp_int_Variable, bool CallFunc_IsShooterCharacter_ReturnValue, int32* Temp_int_Variable_1, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32* CallFunc_GetMutationPoints_ReturnValue, int32* CallFunc_MakeLiteralInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "GetAllStatPoints");

	Params::ATrackBinocularsBuff_C_GetAllStatPoints_Params Parms{};

	Parms.Self2 = Self2;
	Parms.LocalTamedPoints = LocalTamedPoints;
	Parms.LocalStatsPoints = LocalStatsPoints;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_GetMutationPoints_ReturnValue != nullptr)
		*CallFunc_GetMutationPoints_ReturnValue = Parms.CallFunc_GetMutationPoints_ReturnValue;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReplicateCharStats
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APrimalCharacter*            Char                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, InstancedReference, SubobjectReference)

void ATrackBinocularsBuff_C::ReplicateCharStats(class APrimalCharacter** Char)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ReplicateCharStats");

	Params::ATrackBinocularsBuff_C_ReplicateCharStats_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Char != nullptr)
		*Char = Parms.Char;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ClientUpdateStatsChar
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterStatusReplicatedBinocularsUpdate                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, EditConst)
// class APrimalCharacter*            PrimalChar                                                       (Edit, BlueprintVisible, OutParm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

class APrimalCharacter* ATrackBinocularsBuff_C::ClientUpdateStatsChar(const struct FCharacterStatusReplicatedBinoculars& Update)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ClientUpdateStatsChar");

	Params::ATrackBinocularsBuff_C_ClientUpdateStatsChar_Params Parms{};

	Parms.Update = Update;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickClient
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float ATrackBinocularsBuff_C::BuffTickClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BuffTickClient");

	Params::ATrackBinocularsBuff_C_BuffTickClient_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

enum class EEndPlayReason ATrackBinocularsBuff_C::ReceiveEndPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ReceiveEndPlay");

	Params::ATrackBinocularsBuff_C_ReceiveEndPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BPSetupForInstigator
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ForInstigator                                                    (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

void ATrackBinocularsBuff_C::BPSetupForInstigator(class AActor** ForInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BPSetupForInstigator");

	Params::ATrackBinocularsBuff_C_BPSetupForInstigator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForInstigator != nullptr)
		*ForInstigator = Parms.ForInstigator;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupZoom
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTargeting                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, GlobalConfig)
// double                             ZoomPercent                                                      (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void ATrackBinocularsBuff_C::SetupZoom(bool* IsTargeting, double ZoomPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "SetupZoom");

	Params::ATrackBinocularsBuff_C_SetupZoom_Params Parms{};

	Parms.ZoomPercent = ZoomPercent;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTargeting != nullptr)
		*IsTargeting = Parms.IsTargeting;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.BuffTickServer
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float ATrackBinocularsBuff_C::BuffTickServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "BuffTickServer");

	Params::ATrackBinocularsBuff_C_BuffTickServer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.SetupNewTrackActor
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm)

void ATrackBinocularsBuff_C::SetupNewTrackActor(class AActor** Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "SetupNewTrackActor");

	Params::ATrackBinocularsBuff_C_SetupNewTrackActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.TrackCurrentActorTraced
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrackBinocularsBuff_C::TrackCurrentActorTraced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "TrackCurrentActorTraced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.InputDismissPOI_BP
// (Event, Public, BlueprintEvent)
// Parameters:
// class APlayerController*           ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 ATrackBinocularsBuff_C::InputDismissPOI_BP(class APlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "InputDismissPOI_BP");

	Params::ATrackBinocularsBuff_C_InputDismissPOI_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ServerClearTrackBino
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrackBinocularsBuff_C::ServerClearTrackBino()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ServerClearTrackBino");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TrackBinocularsBuff.TrackBinocularsBuff_C.ExecuteUbergraph_TrackBinocularsBuff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              K2Node_Event_DeltaTime_1                                         (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetPlayerViewPoint_Location                             (Edit, ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_GetPlayerViewPoint_Rotation                             (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class AShooterCharacter*           CallFunc_GetPlayerCharacter_ReturnValue                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue                          (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (Edit, ConstParm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class AActor*                      K2Node_Event_ForInstigator                                       (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterCharacter*           K2Node_DynamicCast_AsShooter_Character                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue_1                        (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UBinocularsUI_C*             K2Node_DynamicCast_AsBinoculars_UI                               (Edit, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// enum class ENetworkModeResult      CallFunc_CanRunCosmeticEvents_OutNetworkMode                     (BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_IsTargeting                                   (ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_CustomEvent_ZoomPercent                                   (ExportObject, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class AActor*                      K2Node_CustomEvent_Actor                                         (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class APrimalStructure*            K2Node_DynamicCast_AsPrimal_Structure                            (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue_1                               (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APlayerController*           CallFunc_GetOwnerController_ReturnValue_2                        (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_2                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class APostProcessVolume*          CallFunc_GetGlobalPostProcessVolume_ReturnValue                  (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCharacterStatusReplicatedBinocularsK2Node_CustomEvent_Update                                        (ConstParm, BlueprintVisible, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class APrimalCharacter*            K2Node_CustomEvent_PrimalCHar                                    (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_CustomEvent_Char                                          (Edit, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UPrimalCharacterStatusComponent*CallFunc_GetCharacterStatusComponent_ReturnValue                 (Edit, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue                     (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue_1                   (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue_2                   (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_2                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPGetCurrentStatusValue_ReturnValue_3                   (Edit, ConstParm, Net, OutParm, EditConst, SubobjectReference, NonTransactional)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_3                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_4                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_BPGetMaxStatusValue_ReturnValue_5                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// TArray<int32>                      CallFunc_GetAllStatPoints_Wild                                   (Edit, ConstParm, ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      CallFunc_GetAllStatPoints_Mutations                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<int32>                      CallFunc_GetAllStatPoints_Tamed                                  (Edit, ConstParm, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCharacterStatusReplicatedBinocularsK2Node_MakeStruct_CharacterStatusReplicatedBinoculars            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (Net, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Vector_Distance_ReturnValue_1                           (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class APlayerController*           K2Node_Event_ForPC                                               (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_Event_index                                               (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_MakeLiteralDouble_ReturnValue                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Time                                     (ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakHitResult_Distance                                 (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (Edit, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_HitItem                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsShooterCharacter_ReturnValue                          (Edit, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsPrimalStructure_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsPrimalDino_ReturnValue                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// class AActor*                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class APrimalCharacter*            K2Node_DynamicCast_AsPrimal_Character_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// uint8                              CallFunc_GetEnumeratorValueFromIndex_ReturnValue                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Greater_DoubleDouble_B_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast     (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_1   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_1       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_2   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_2       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BPDirectSetCurrentStatusValue_newValue_ImplicitCast_3   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_3       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_4       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_5       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             K2Node_MakeStruct_CurrentFood_2_DC19EC034FDA37A721EED0B6ABB3E033_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_CurrentOxygen_6_ED78AD80404584553795B181953A9E24_ImplicitCast(ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MaxOxygen_8_8C5113464079DCCEBBF150B3B3508FA9_ImplicitCast(ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_CurrentStamina_10_8264A562485F6EE7FA3AA4967FA66581_ImplicitCast(Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MaxStamina_12_809881BE4D89FF2D364288BF107D01CE_ImplicitCast(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_CurrentWeight_14_DACD05BF45974965209F818EE88F10B7_ImplicitCast(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast(Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MeleeDamage_18_EE908D7D4D1C2F664DE9FAB35B83616B_ImplicitCast(Edit, BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_MakeStruct_MovementSpeed_20_E8405D474EDF76F279B1AAAB93A7BC7C_ImplicitCast(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)

double ATrackBinocularsBuff_C::ExecuteUbergraph_TrackBinocularsBuff(int32* EntryPoint, int32* Temp_int_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, float K2Node_Event_DeltaTime_1, bool CallFunc_IsTimeSince_ReturnValue, struct FRotator* CallFunc_GetPlayerViewPoint_Rotation, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<class AActor*>* K2Node_MakeArray_Array, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, int32* CallFunc_MakeLiteralInt_ReturnValue, enum class EEndPlayReason* K2Node_Event_EndPlayReason, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_2, class UPrimalUI* CallFunc_Create_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class UBinocularsUI_C* K2Node_DynamicCast_AsBinoculars_UI, bool* K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsTargeting, double K2Node_CustomEvent_ZoomPercent, float K2Node_Event_DeltaTime, class UWorld** CallFunc_K2_GetWorld_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character, bool* K2Node_DynamicCast_bSuccess_4, bool* K2Node_DynamicCast_bSuccess_5, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UWorld** CallFunc_K2_GetWorld_ReturnValue_1, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_2, bool* K2Node_DynamicCast_bSuccess_6, class APostProcessVolume** CallFunc_GetGlobalPostProcessVolume_ReturnValue, const struct FCharacterStatusReplicatedBinoculars& K2Node_CustomEvent_Update, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, class APrimalCharacter** K2Node_CustomEvent_Char, float* CallFunc_BPGetCurrentStatusValue_ReturnValue, float* CallFunc_BPGetMaxStatusValue_ReturnValue, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_1, float* CallFunc_BPGetMaxStatusValue_ReturnValue_1, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_2, float* CallFunc_BPGetMaxStatusValue_ReturnValue_2, float* CallFunc_BPGetCurrentStatusValue_ReturnValue_3, float* CallFunc_BPGetMaxStatusValue_ReturnValue_3, float* CallFunc_BPGetMaxStatusValue_ReturnValue_4, float* CallFunc_BPGetMaxStatusValue_ReturnValue_5, const TArray<int32>& CallFunc_GetAllStatPoints_Tamed, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, double CallFunc_MakeLiteralDouble_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool CallFunc_IsShooterCharacter_ReturnValue, bool* CallFunc_IsPrimalStructure_ReturnValue, bool Temp_bool_Variable, class AActor* K2Node_Select_Default, int32* Temp_int_Variable_1, class APrimalCharacter** K2Node_DynamicCast_AsPrimal_Character_1, bool* K2Node_DynamicCast_bSuccess_7, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_1, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_2, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_3, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_4, float CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_5, double K2Node_MakeStruct_CurrentFood_2_DC19EC034FDA37A721EED0B6ABB3E033_ImplicitCast, double* K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast, double K2Node_MakeStruct_MaxOxygen_8_8C5113464079DCCEBBF150B3B3508FA9_ImplicitCast, double K2Node_MakeStruct_MaxStamina_12_809881BE4D89FF2D364288BF107D01CE_ImplicitCast, double* K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast, double K2Node_MakeStruct_MeleeDamage_18_EE908D7D4D1C2F664DE9FAB35B83616B_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrackBinocularsBuff_C", "ExecuteUbergraph_TrackBinocularsBuff");

	Params::ATrackBinocularsBuff_C_ExecuteUbergraph_TrackBinocularsBuff_Params Parms{};

	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Event_DeltaTime_1 = K2Node_Event_DeltaTime_1;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsShooter_Character = K2Node_DynamicCast_AsShooter_Character;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBinoculars_UI = K2Node_DynamicCast_AsBinoculars_UI;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_IsTargeting = K2Node_CustomEvent_IsTargeting;
	Parms.K2Node_CustomEvent_ZoomPercent = K2Node_CustomEvent_ZoomPercent;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.K2Node_CustomEvent_Update = K2Node_CustomEvent_Update;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAllStatPoints_Tamed = CallFunc_GetAllStatPoints_Tamed;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_MakeLiteralDouble_ReturnValue = CallFunc_MakeLiteralDouble_ReturnValue;
	Parms.CallFunc_IsTimeSince_ReturnValue_1 = CallFunc_IsTimeSince_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_IsShooterCharacter_ReturnValue = CallFunc_IsShooterCharacter_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetEnumeratorValueFromIndex_ReturnValue = CallFunc_GetEnumeratorValueFromIndex_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_1 = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_1;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_2 = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_2;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_3 = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_3;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_4 = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_4;
	Parms.CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_5 = CallFunc_BPDirectSetMaxStatusValue_newValue_ImplicitCast_5;
	Parms.K2Node_MakeStruct_CurrentFood_2_DC19EC034FDA37A721EED0B6ABB3E033_ImplicitCast = K2Node_MakeStruct_CurrentFood_2_DC19EC034FDA37A721EED0B6ABB3E033_ImplicitCast;
	Parms.K2Node_MakeStruct_MaxOxygen_8_8C5113464079DCCEBBF150B3B3508FA9_ImplicitCast = K2Node_MakeStruct_MaxOxygen_8_8C5113464079DCCEBBF150B3B3508FA9_ImplicitCast;
	Parms.K2Node_MakeStruct_MaxStamina_12_809881BE4D89FF2D364288BF107D01CE_ImplicitCast = K2Node_MakeStruct_MaxStamina_12_809881BE4D89FF2D364288BF107D01CE_ImplicitCast;
	Parms.K2Node_MakeStruct_MeleeDamage_18_EE908D7D4D1C2F664DE9FAB35B83616B_ImplicitCast = K2Node_MakeStruct_MeleeDamage_18_EE908D7D4D1C2F664DE9FAB35B83616B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetPlayerViewPoint_Rotation != nullptr)
		*CallFunc_GetPlayerViewPoint_Rotation = std::move(Parms.CallFunc_GetPlayerViewPoint_Rotation);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_MakeLiteralInt_ReturnValue != nullptr)
		*CallFunc_MakeLiteralInt_ReturnValue = Parms.CallFunc_MakeLiteralInt_ReturnValue;

	if (K2Node_Event_EndPlayReason != nullptr)
		*K2Node_Event_EndPlayReason = Parms.K2Node_Event_EndPlayReason;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (K2Node_DynamicCast_AsPrimal_Character != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character = Parms.K2Node_DynamicCast_AsPrimal_Character;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_K2_GetWorld_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue_1 = Parms.CallFunc_K2_GetWorld_ReturnValue_1;

	if (CallFunc_K2_GetWorldSettings_ReturnValue != nullptr)
		*CallFunc_K2_GetWorldSettings_ReturnValue = Parms.CallFunc_K2_GetWorldSettings_ReturnValue;

	if (K2Node_DynamicCast_AsShooter_Player_Controller_2 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_2 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_2;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (CallFunc_GetGlobalPostProcessVolume_ReturnValue != nullptr)
		*CallFunc_GetGlobalPostProcessVolume_ReturnValue = Parms.CallFunc_GetGlobalPostProcessVolume_ReturnValue;

	if (K2Node_CustomEvent_Char != nullptr)
		*K2Node_CustomEvent_Char = Parms.K2Node_CustomEvent_Char;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue_1 != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue_1 = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue_1;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_1 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_1 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_1;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue_2 != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue_2 = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue_2;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_2 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_2 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_2;

	if (CallFunc_BPGetCurrentStatusValue_ReturnValue_3 != nullptr)
		*CallFunc_BPGetCurrentStatusValue_ReturnValue_3 = Parms.CallFunc_BPGetCurrentStatusValue_ReturnValue_3;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_3 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_3 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_3;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_4 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_4 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_4;

	if (CallFunc_BPGetMaxStatusValue_ReturnValue_5 != nullptr)
		*CallFunc_BPGetMaxStatusValue_ReturnValue_5 = Parms.CallFunc_BPGetMaxStatusValue_ReturnValue_5;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_BreakHitResult_bInitialOverlap != nullptr)
		*CallFunc_BreakHitResult_bInitialOverlap = Parms.CallFunc_BreakHitResult_bInitialOverlap;

	if (CallFunc_BreakHitResult_Distance != nullptr)
		*CallFunc_BreakHitResult_Distance = Parms.CallFunc_BreakHitResult_Distance;

	if (CallFunc_BreakHitResult_Location != nullptr)
		*CallFunc_BreakHitResult_Location = std::move(Parms.CallFunc_BreakHitResult_Location);

	if (CallFunc_BreakHitResult_ImpactPoint != nullptr)
		*CallFunc_BreakHitResult_ImpactPoint = std::move(Parms.CallFunc_BreakHitResult_ImpactPoint);

	if (CallFunc_BreakHitResult_Normal != nullptr)
		*CallFunc_BreakHitResult_Normal = std::move(Parms.CallFunc_BreakHitResult_Normal);

	if (CallFunc_BreakHitResult_ImpactNormal != nullptr)
		*CallFunc_BreakHitResult_ImpactNormal = std::move(Parms.CallFunc_BreakHitResult_ImpactNormal);

	if (CallFunc_BreakHitResult_PhysMat != nullptr)
		*CallFunc_BreakHitResult_PhysMat = Parms.CallFunc_BreakHitResult_PhysMat;

	if (CallFunc_BreakHitResult_HitActor != nullptr)
		*CallFunc_BreakHitResult_HitActor = Parms.CallFunc_BreakHitResult_HitActor;

	if (CallFunc_BreakHitResult_HitComponent != nullptr)
		*CallFunc_BreakHitResult_HitComponent = Parms.CallFunc_BreakHitResult_HitComponent;

	if (CallFunc_BreakHitResult_HitBoneName != nullptr)
		*CallFunc_BreakHitResult_HitBoneName = Parms.CallFunc_BreakHitResult_HitBoneName;

	if (CallFunc_BreakHitResult_BoneName != nullptr)
		*CallFunc_BreakHitResult_BoneName = Parms.CallFunc_BreakHitResult_BoneName;

	if (CallFunc_BreakHitResult_HitItem != nullptr)
		*CallFunc_BreakHitResult_HitItem = Parms.CallFunc_BreakHitResult_HitItem;

	if (CallFunc_BreakHitResult_ElementIndex != nullptr)
		*CallFunc_BreakHitResult_ElementIndex = Parms.CallFunc_BreakHitResult_ElementIndex;

	if (CallFunc_BreakHitResult_FaceIndex != nullptr)
		*CallFunc_BreakHitResult_FaceIndex = Parms.CallFunc_BreakHitResult_FaceIndex;

	if (CallFunc_IsPrimalStructure_ReturnValue != nullptr)
		*CallFunc_IsPrimalStructure_ReturnValue = Parms.CallFunc_IsPrimalStructure_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (K2Node_DynamicCast_AsPrimal_Character_1 != nullptr)
		*K2Node_DynamicCast_AsPrimal_Character_1 = Parms.K2Node_DynamicCast_AsPrimal_Character_1;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	if (K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast != nullptr)
		*K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast = Parms.K2Node_MakeStruct_MaxFood_4_A5F4CBDF4439E8A0FBD88A97887CC0E7_ImplicitCast;

	if (K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast != nullptr)
		*K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast = Parms.K2Node_MakeStruct_MaxWeight_16_0FA5802B4EF85950C2E8C5A90B56BE38_ImplicitCast;

	return Parms.ReturnValue;

}

}


