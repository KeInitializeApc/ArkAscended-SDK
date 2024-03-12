#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C
// (Actor)

class UClass* APRIMAL_FS_MasterField_BASE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PRIMAL_FS_MasterField_BASE_C");

	return Clss;
}


// PRIMAL_FS_MasterField_BASE_C PRIMAL_FS_MasterField_BASE.Default__PRIMAL_FS_MasterField_BASE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APRIMAL_FS_MasterField_BASE_C* APRIMAL_FS_MasterField_BASE_C::GetDefaultObj()
{
	static class APRIMAL_FS_MasterField_BASE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APRIMAL_FS_MasterField_BASE_C*>(APRIMAL_FS_MasterField_BASE_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.Import Field Data
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     IncomingImpactVector                                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector                     SetImpactVector                                                  (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakVector3f_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakVector3f_Y                                         (ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakVector3f_Z                                         (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector3f APRIMAL_FS_MasterField_BASE_C::Import_Field_Data(float CallFunc_BreakVector3f_Y, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "Import Field Data");

	Params::APRIMAL_FS_MasterField_BASE_C_Import_Field_Data_Params Parms{};

	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UpdateFieldParameters
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetUseExternalStrain                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetStrainMagnitude                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SetNumStrainHits                                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SetUseRadialVector                                               (Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetRadialMagnitude                                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EFieldFalloffType       SetStrainFalloffType                                             (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   SetStrainFalloffMinMax                                           (Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SetUseDirectionalVector                                          (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetDirectionalMagnitude                                          (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SetUseTorque                                                     (Edit, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetTorqueMult                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EFieldFalloffType       SetVelocityFieldFalloffType                                      (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   SetVelocityFalloffMinMax                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SetUseNoise                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   SetNoiseMinMax                                                   (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetNoiseScaleMult                                                (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SetRadialPositionOffset                                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               SetOverrideDirectionalVector                                     (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SetImpactVector                                                  (BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     SetTorqueVectorOverride                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// uint8                              VelocityVectorSwitch                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetForceMult                                                     (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetVelocityThreshold                                             (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             SetDamageVelocity                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EFieldForceVel          NewLocalVar                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

enum class EFieldForceVel APRIMAL_FS_MasterField_BASE_C::UpdateFieldParameters(double* SetRadialMagnitude, enum class EFieldFalloffType* SetStrainFalloffType, enum class EFieldFalloffType* SetVelocityFieldFalloffType, bool SetUseNoise, struct FVector* SetRadialPositionOffset, const struct FVector& SetTorqueVectorOverride, uint8 VelocityVectorSwitch, double* SetVelocityThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "UpdateFieldParameters");

	Params::APRIMAL_FS_MasterField_BASE_C_UpdateFieldParameters_Params Parms{};

	Parms.SetUseNoise = SetUseNoise;
	Parms.SetTorqueVectorOverride = SetTorqueVectorOverride;
	Parms.VelocityVectorSwitch = VelocityVectorSwitch;

	UObject::ProcessEvent(Func, &Parms);

	if (SetRadialMagnitude != nullptr)
		*SetRadialMagnitude = Parms.SetRadialMagnitude;

	if (SetStrainFalloffType != nullptr)
		*SetStrainFalloffType = Parms.SetStrainFalloffType;

	if (SetVelocityFieldFalloffType != nullptr)
		*SetVelocityFieldFalloffType = Parms.SetVelocityFieldFalloffType;

	if (SetRadialPositionOffset != nullptr)
		*SetRadialPositionOffset = std::move(Parms.SetRadialPositionOffset);

	if (SetVelocityThreshold != nullptr)
		*SetVelocityThreshold = Parms.SetVelocityThreshold;

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CalculateNoise
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNoiseField*                 OutputPin                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UNoiseField*                 CallFunc_AddComponent_ReturnValue                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UNoiseField*                 CallFunc_SetNoiseField_ReturnValue                               (Edit, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetNoiseField_MinRange_ImplicitCast                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetNoiseField_MaxRange_ImplicitCast                     (Edit, ExportObject, Net, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

float APRIMAL_FS_MasterField_BASE_C::CalculateNoise(class UNoiseField** OutputPin, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class UNoiseField* CallFunc_SetNoiseField_ReturnValue, float CallFunc_SetNoiseField_MaxRange_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "CalculateNoise");

	Params::APRIMAL_FS_MasterField_BASE_C_CalculateNoise_Params Parms{};

	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_SetNoiseField_ReturnValue = CallFunc_SetNoiseField_ReturnValue;
	Parms.CallFunc_SetNoiseField_MaxRange_ImplicitCast = CallFunc_SetNoiseField_MaxRange_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (OutputPin != nullptr)
		*OutputPin = Parms.OutputPin;

	if (CallFunc_BreakTransform_Rotation != nullptr)
		*CallFunc_BreakTransform_Rotation = std::move(Parms.CallFunc_BreakTransform_Rotation);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffShapeSwitch
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldFalloffType       FalloffType                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   FalloffMinMax                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              OperatorFieldOut                                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   NewLocalVar_1                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     NewLocalVar_0                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTransform                  Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_2                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UPlaneFalloff*               CallFunc_AddComponent_ReturnValue                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_1                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class URadialFalloff*              CallFunc_AddComponent_ReturnValue_1                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FTransform                  Temp_struct_Variable_2                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_3                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UBoxFalloff*                 CallFunc_AddComponent_ReturnValue_2                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_3                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// struct FTransform                  Temp_struct_Variable_4                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FTransform                  Temp_struct_Variable_5                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_4                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_5                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_6                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTransform                  Temp_struct_Variable_7                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class UPlaneFalloff*               CallFunc_AddComponent_ReturnValue_6                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_7                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_8                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class UBoxFalloff*                 CallFunc_AddComponent_ReturnValue_8                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class UBoxFalloff*                 CallFunc_SetBoxFalloff_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UBoxFalloff*                 CallFunc_SetBoxFalloff_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_3                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_3                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue                            (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPlaneFalloff*               CallFunc_SetPlaneFalloff_ReturnValue                             (Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_1                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_GetScaledSphereRadius_ReturnValue                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetUpVector_ReturnValue_1                               (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class URadialFalloff*              CallFunc_SetRadialFalloff_ReturnValue                            (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_4                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_4                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_2                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UPlaneFalloff*               CallFunc_SetPlaneFalloff_ReturnValue_1                           (Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_3                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetBoxFalloff_MinRange_ImplicitCast                     (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetBoxFalloff_MaxRange_ImplicitCast                     (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRadialFalloff_MinRange_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRadialFalloff_MaxRange_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_Distance_ImplicitCast                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_Distance_ImplicitCast_1                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetPlaneFalloff_MinRange_ImplicitCast                   (ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast                   (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_MinRange_ImplicitCast_1                 (ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast_1                 (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)

float APRIMAL_FS_MasterField_BASE_C::FalloffShapeSwitch(enum class EFieldFalloffType FalloffType, class UOperatorField** OperatorFieldOut, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UPlaneFalloff** CallFunc_SetPlaneFalloff_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, class UPlaneFalloff** CallFunc_SetPlaneFalloff_ReturnValue_1, float CallFunc_SetBoxFalloff_MaxRange_ImplicitCast, float CallFunc_SetRadialFalloff_MinRange_ImplicitCast, float CallFunc_SetPlaneFalloff_MinRange_ImplicitCast, float* CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast, float CallFunc_SetPlaneFalloff_MinRange_ImplicitCast_1, float* CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "FalloffShapeSwitch");

	Params::APRIMAL_FS_MasterField_BASE_C_FalloffShapeSwitch_Params Parms{};

	Parms.FalloffType = FalloffType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_SetRadialFalloff_ReturnValue = CallFunc_SetRadialFalloff_ReturnValue;
	Parms.CallFunc_SetBoxFalloff_MaxRange_ImplicitCast = CallFunc_SetBoxFalloff_MaxRange_ImplicitCast;
	Parms.CallFunc_SetRadialFalloff_MinRange_ImplicitCast = CallFunc_SetRadialFalloff_MinRange_ImplicitCast;
	Parms.CallFunc_SetPlaneFalloff_MinRange_ImplicitCast = CallFunc_SetPlaneFalloff_MinRange_ImplicitCast;
	Parms.CallFunc_SetPlaneFalloff_MinRange_ImplicitCast_1 = CallFunc_SetPlaneFalloff_MinRange_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OperatorFieldOut != nullptr)
		*OperatorFieldOut = Parms.OperatorFieldOut;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_SetPlaneFalloff_ReturnValue != nullptr)
		*CallFunc_SetPlaneFalloff_ReturnValue = Parms.CallFunc_SetPlaneFalloff_ReturnValue;

	if (CallFunc_SetPlaneFalloff_ReturnValue_1 != nullptr)
		*CallFunc_SetPlaneFalloff_ReturnValue_1 = Parms.CallFunc_SetPlaneFalloff_ReturnValue_1;

	if (CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast != nullptr)
		*CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast = Parms.CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast;

	if (CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast_1 != nullptr)
		*CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast_1 = Parms.CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.MakeDynamic_EnableNonGC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewLocalVar_0                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// class AStaticMeshActor*            CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue                         (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_5                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_6                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_1                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_7                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// class ASkeletalMeshActor*          CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class ASkeletalMeshActor*          CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsSimulatingPhysics_ReturnValue_1                       (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue                                       (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue_1                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_Dot_VectorVector_ReturnValue_2                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_VSize_ReturnValue_2                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_2                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_3                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// float                              CallFunc_GetScaledSphereRadius_ReturnValue                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class ASkeletalMeshActor*          CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_X_4                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SignOfFloat_ReturnValue                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_4                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_X_5                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, EditorOnly)
// class ASkeletalMeshActor*          CallFunc_Array_Get_Item_4                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_2                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_Dot_VectorVector_ReturnValue_3                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_3                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue_4                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_4                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_VSize_ReturnValue_3                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_4                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_VSize_ReturnValue_4                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue_5                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_5                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_5                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_5                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_VSize_ReturnValue_5                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_X_6                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_6                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_SignOfFloat_ReturnValue_1                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_X_7                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_BreakVector_Y_7                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_BreakVector_Z_7                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_SignOfFloat_ReturnValue_2                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ExportObject, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_5                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_X_8                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_BreakVector_Y_8                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_BreakVector_Z_8                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// class AStaticMeshActor*            CallFunc_Array_Get_Item_5                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class AStaticMeshActor*            CallFunc_Array_Get_Item_6                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_3                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, NonTransactional)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_4                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, EditConst, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_4                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_5                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_3                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue_6                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue_7                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_6                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_7                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_6                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_7                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_VSize_ReturnValue_6                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_VSize_ReturnValue_7                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_7                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_8                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Dot_VectorVector_ReturnValue_8                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_Dot_VectorVector_ReturnValue_9                          (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_8                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_9                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_8                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, EditorOnly)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_9                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_VSize_ReturnValue_8                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_VSize_ReturnValue_9                                     (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_9                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_10                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Dot_VectorVector_ReturnValue_10                         (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_10                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_10                    (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_Dot_VectorVector_ReturnValue_11                         (Edit, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_VSize_ReturnValue_10                                    (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_11                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_11                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, NonTransactional, EditorOnly)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_11                    (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_VSize_ReturnValue_11                                    (Edit, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// double                             CallFunc_BreakVector_X_9                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_BreakVector_Y_9                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_BreakVector_Z_9                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_12                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// double                             CallFunc_SignOfFloat_ReturnValue_3                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// class AStaticMeshActor*            CallFunc_Array_Get_Item_7                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_6                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// float                              CallFunc_GetScaledSphereRadius_ReturnValue_1                     (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue_1                           (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_13                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast_1                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)

double APRIMAL_FS_MasterField_BASE_C::MakeDynamic_EnableNonGC(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_3, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_4, class AStaticMeshActor* CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable_5, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Array_Index_Variable_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, int32 Temp_int_Array_Index_Variable_7, class ASkeletalMeshActor* CallFunc_Array_Get_Item_1, class ASkeletalMeshActor* CallFunc_Array_Get_Item_2, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class ASkeletalMeshActor* CallFunc_Array_Get_Item_3, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_3, double CallFunc_SignOfFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_7, class ASkeletalMeshActor* CallFunc_Array_Get_Item_4, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_4, bool CallFunc_Less_DoubleDouble_ReturnValue_5, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_5, bool CallFunc_Less_DoubleDouble_ReturnValue_6, double CallFunc_SignOfFloat_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SignOfFloat_ReturnValue_2, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, class AStaticMeshActor* CallFunc_Array_Get_Item_5, class AStaticMeshActor* CallFunc_Array_Get_Item_6, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue_3, class USceneComponent** CallFunc_K2_GetRootComponent_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_5, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_6, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_7, bool CallFunc_Less_DoubleDouble_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_8, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_9, bool CallFunc_Less_DoubleDouble_ReturnValue_9, bool CallFunc_Less_DoubleDouble_ReturnValue_10, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_10, bool CallFunc_Less_DoubleDouble_ReturnValue_11, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_11, bool CallFunc_Less_DoubleDouble_ReturnValue_12, double CallFunc_SignOfFloat_ReturnValue_3, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, class AStaticMeshActor* CallFunc_Array_Get_Item_7, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_6, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "MakeDynamic_EnableNonGC");

	Params::APRIMAL_FS_MasterField_BASE_C_MakeDynamic_EnableNonGC_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_2 = CallFunc_Less_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_3 = CallFunc_Less_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_SignOfFloat_ReturnValue = CallFunc_SignOfFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_4 = CallFunc_Multiply_VectorVector_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_4 = CallFunc_Less_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_5 = CallFunc_Less_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_5 = CallFunc_Multiply_VectorVector_ReturnValue_5;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_6 = CallFunc_Less_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_SignOfFloat_ReturnValue_1 = CallFunc_SignOfFloat_ReturnValue_1;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_SignOfFloat_ReturnValue_2 = CallFunc_SignOfFloat_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = CallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_4 = CallFunc_K2_GetComponentLocation_ReturnValue_4;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_5 = CallFunc_K2_GetComponentLocation_ReturnValue_5;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_6 = CallFunc_Multiply_VectorVector_ReturnValue_6;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_7 = CallFunc_Multiply_VectorVector_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_7 = CallFunc_Less_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_8 = CallFunc_Less_DoubleDouble_ReturnValue_8;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_8 = CallFunc_Multiply_VectorVector_ReturnValue_8;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_9 = CallFunc_Multiply_VectorVector_ReturnValue_9;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_9 = CallFunc_Less_DoubleDouble_ReturnValue_9;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_10 = CallFunc_Less_DoubleDouble_ReturnValue_10;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_10 = CallFunc_Multiply_VectorVector_ReturnValue_10;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_11 = CallFunc_Less_DoubleDouble_ReturnValue_11;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_11 = CallFunc_Multiply_VectorVector_ReturnValue_11;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_12 = CallFunc_Less_DoubleDouble_ReturnValue_12;
	Parms.CallFunc_SignOfFloat_ReturnValue_3 = CallFunc_SignOfFloat_ReturnValue_3;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue_1 = CallFunc_NotEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_6 = CallFunc_K2_GetComponentLocation_ReturnValue_6;
	Parms.CallFunc_Vector_Distance_ReturnValue_1 = CallFunc_Vector_Distance_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_13 = CallFunc_Less_DoubleDouble_ReturnValue_13;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_GetRootComponent_ReturnValue != nullptr)
		*CallFunc_K2_GetRootComponent_ReturnValue = Parms.CallFunc_K2_GetRootComponent_ReturnValue;

	if (CallFunc_Subtract_VectorVector_ReturnValue != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue);

	if (CallFunc_K2_GetRootComponent_ReturnValue_1 != nullptr)
		*CallFunc_K2_GetRootComponent_ReturnValue_1 = Parms.CallFunc_K2_GetRootComponent_ReturnValue_1;

	if (CallFunc_K2_GetRootComponent_ReturnValue_2 != nullptr)
		*CallFunc_K2_GetRootComponent_ReturnValue_2 = Parms.CallFunc_K2_GetRootComponent_ReturnValue_2;

	if (CallFunc_Subtract_VectorVector_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_1 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_1);

	if (CallFunc_K2_GetRootComponent_ReturnValue_3 != nullptr)
		*CallFunc_K2_GetRootComponent_ReturnValue_3 = Parms.CallFunc_K2_GetRootComponent_ReturnValue_3;

	if (CallFunc_K2_GetRootComponent_ReturnValue_4 != nullptr)
		*CallFunc_K2_GetRootComponent_ReturnValue_4 = Parms.CallFunc_K2_GetRootComponent_ReturnValue_4;

	if (CallFunc_Subtract_VectorVector_ReturnValue_2 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_2 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_2);

	if (CallFunc_Subtract_VectorVector_ReturnValue_3 != nullptr)
		*CallFunc_Subtract_VectorVector_ReturnValue_3 = std::move(Parms.CallFunc_Subtract_VectorVector_ReturnValue_3);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.InitializeFieldVariables
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// TArray<class ASkeletalMeshActor*>  CallFunc_GetAllActorsOfClassWithTag_OutActors                    (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class AStaticMeshActor*>    CallFunc_GetAllActorsOfClassWithTag_OutActors_1                  (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

double APRIMAL_FS_MasterField_BASE_C::InitializeFieldVariables(double CallFunc_Multiply_DoubleDouble_ReturnValue, TArray<class ASkeletalMeshActor*>* CallFunc_GetAllActorsOfClassWithTag_OutActors, TArray<class AStaticMeshActor*>* CallFunc_GetAllActorsOfClassWithTag_OutActors_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "InitializeFieldVariables");

	Params::APRIMAL_FS_MasterField_BASE_C_InitializeFieldVariables_Params Parms{};

	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetAllActorsOfClassWithTag_OutActors != nullptr)
		*CallFunc_GetAllActorsOfClassWithTag_OutActors = std::move(Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors);

	if (CallFunc_GetAllActorsOfClassWithTag_OutActors_1 != nullptr)
		*CallFunc_GetAllActorsOfClassWithTag_OutActors_1 = std::move(Parms.CallFunc_GetAllActorsOfClassWithTag_OutActors_1);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.DisplayTextSetup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_2                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_3                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_4                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_5                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_6                         (EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// TArray<class UTextRenderComponent*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

class FText APRIMAL_FS_MasterField_BASE_C::DisplayTextSetup(class FText* CallFunc_Conv_DoubleToText_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText* CallFunc_Conv_DoubleToText_ReturnValue_1, class FText* CallFunc_Conv_DoubleToText_ReturnValue_2, class FText* CallFunc_Conv_DoubleToText_ReturnValue_3, class FText* CallFunc_Conv_DoubleToText_ReturnValue_4, class FText* CallFunc_Conv_DoubleToText_ReturnValue_5, class FText* CallFunc_Conv_DoubleToText_ReturnValue_6, TArray<class UTextRenderComponent*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "DisplayTextSetup");

	Params::APRIMAL_FS_MasterField_BASE_C_DisplayTextSetup_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Conv_DoubleToText_ReturnValue != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue = Parms.CallFunc_Conv_DoubleToText_ReturnValue;

	if (CallFunc_Conv_DoubleToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_1 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_1;

	if (CallFunc_Conv_DoubleToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_2 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_2;

	if (CallFunc_Conv_DoubleToText_ReturnValue_3 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_3 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_3;

	if (CallFunc_Conv_DoubleToText_ReturnValue_4 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_4 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_4;

	if (CallFunc_Conv_DoubleToText_ReturnValue_5 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_5 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_5;

	if (CallFunc_Conv_DoubleToText_ReturnValue_6 != nullptr)
		*CallFunc_Conv_DoubleToText_ReturnValue_6 = Parms.CallFunc_Conv_DoubleToText_ReturnValue_6;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ForceMultiplier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_Square_ReturnValue                                      (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Square_ReturnValue_1                                    (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Square_ReturnValue_2                                    (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)

void APRIMAL_FS_MasterField_BASE_C::ForceMultiplier(double* CallFunc_Square_ReturnValue, double* CallFunc_Square_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, double* CallFunc_Square_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "ForceMultiplier");

	Params::APRIMAL_FS_MasterField_BASE_C_ForceMultiplier_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Square_ReturnValue != nullptr)
		*CallFunc_Square_ReturnValue = Parms.CallFunc_Square_ReturnValue;

	if (CallFunc_Square_ReturnValue_1 != nullptr)
		*CallFunc_Square_ReturnValue_1 = Parms.CallFunc_Square_ReturnValue_1;

	if (CallFunc_Square_ReturnValue_2 != nullptr)
		*CallFunc_Square_ReturnValue_2 = Parms.CallFunc_Square_ReturnValue_2;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_2;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

bool APRIMAL_FS_MasterField_BASE_C::SetVisibility(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, struct FHitResult* CallFunc_K2_SetWorldLocation_SweepHitResult, int32* Temp_int_Variable, TArray<class USceneComponent*>* K2Node_MakeArray_Array, class USceneComponent* CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "SetVisibility");

	Params::APRIMAL_FS_MasterField_BASE_C_SetVisibility_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_SetWorldLocation_SweepHitResult != nullptr)
		*CallFunc_K2_SetWorldLocation_SweepHitResult = std::move(Parms.CallFunc_K2_SetWorldLocation_SweepHitResult);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.FalloffAndCullSwitch_Main
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Magnitude                                                        (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class EFieldFalloffType       FalloffType                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   FalloffMinMax                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              OperatorField                                                    (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
// class UCullingField*               CullingField                                                     (Edit, ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig)
// struct FVector                     NewLocalVar_0                                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify)
// struct FTransform                  Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_1                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UBoxFalloff*                 CallFunc_AddComponent_ReturnValue_1                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FTransform                  Temp_struct_Variable_2                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UBoxFalloff*                 CallFunc_AddComponent_ReturnValue_2                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_3                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_X_2                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UCullingField*               CallFunc_AddComponent_ReturnValue_3                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// struct FTransform                  Temp_struct_Variable_4                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// struct FTransform                  Temp_struct_Variable_5                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// class URadialFalloff*              CallFunc_AddComponent_ReturnValue_4                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class URadialFalloff*              CallFunc_AddComponent_ReturnValue_5                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// struct FTransform                  Temp_struct_Variable_6                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FTransform                  Temp_struct_Variable_7                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// class UCullingField*               CallFunc_AddComponent_ReturnValue_6                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UPlaneFalloff*               CallFunc_AddComponent_ReturnValue_7                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// struct FTransform                  Temp_struct_Variable_8                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class UPlaneFalloff*               CallFunc_AddComponent_ReturnValue_8                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_9                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class UCullingField*               CallFunc_AddComponent_ReturnValue_9                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_10                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UBoxFalloff*                 CallFunc_AddComponent_ReturnValue_10                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UBoxFalloff*                 CallFunc_SetBoxFalloff_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UBoxFalloff*                 CallFunc_SetBoxFalloff_ReturnValue_1                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UBoxFalloff*                 CallFunc_SetBoxFalloff_ReturnValue_2                             (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_11                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// struct FTransform                  Temp_struct_Variable_12                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class UCullingField*               CallFunc_AddComponent_ReturnValue_11                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_12                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue                            (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_GetScaledSphereRadius_ReturnValue                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class URadialFalloff*              CallFunc_SetRadialFalloff_ReturnValue                            (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class URadialFalloff*              CallFunc_SetRadialFalloff_ReturnValue_1                          (ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FTransform                  Temp_struct_Variable_13                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_13                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_1                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UPlaneFalloff*               CallFunc_SetPlaneFalloff_ReturnValue                             (Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue_1                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UPlaneFalloff*               CallFunc_SetPlaneFalloff_ReturnValue_1                           (Edit, BlueprintVisible, Net, Parm, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_2                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue_2                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue_3                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// float                              CallFunc_SetPlaneFalloff_Magnitude_ImplicitCast                  (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_MinRange_ImplicitCast                   (ExportObject, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast                   (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRadialFalloff_Magnitude_ImplicitCast                 (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRadialFalloff_MinRange_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetRadialFalloff_MaxRange_ImplicitCast                  (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetBoxFalloff_Magnitude_ImplicitCast                    (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetBoxFalloff_MinRange_ImplicitCast                     (Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetBoxFalloff_MaxRange_ImplicitCast                     (BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_SetPlaneFalloff_Distance_ImplicitCast                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

float APRIMAL_FS_MasterField_BASE_C::FalloffAndCullSwitch_Main(enum class EFieldFalloffType FalloffType, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, class URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UPlaneFalloff** CallFunc_SetPlaneFalloff_ReturnValue, class UPlaneFalloff** CallFunc_SetPlaneFalloff_ReturnValue_1, float CallFunc_SetPlaneFalloff_Magnitude_ImplicitCast, float CallFunc_SetPlaneFalloff_MinRange_ImplicitCast, float* CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast, float CallFunc_SetRadialFalloff_Magnitude_ImplicitCast, float CallFunc_SetRadialFalloff_MinRange_ImplicitCast, float CallFunc_SetBoxFalloff_MaxRange_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "FalloffAndCullSwitch_Main");

	Params::APRIMAL_FS_MasterField_BASE_C_FalloffAndCullSwitch_Main_Params Parms{};

	Parms.FalloffType = FalloffType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SetRadialFalloff_ReturnValue = CallFunc_SetRadialFalloff_ReturnValue;
	Parms.CallFunc_SetRadialFalloff_ReturnValue_1 = CallFunc_SetRadialFalloff_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SetPlaneFalloff_Magnitude_ImplicitCast = CallFunc_SetPlaneFalloff_Magnitude_ImplicitCast;
	Parms.CallFunc_SetPlaneFalloff_MinRange_ImplicitCast = CallFunc_SetPlaneFalloff_MinRange_ImplicitCast;
	Parms.CallFunc_SetRadialFalloff_Magnitude_ImplicitCast = CallFunc_SetRadialFalloff_Magnitude_ImplicitCast;
	Parms.CallFunc_SetRadialFalloff_MinRange_ImplicitCast = CallFunc_SetRadialFalloff_MinRange_ImplicitCast;
	Parms.CallFunc_SetBoxFalloff_MaxRange_ImplicitCast = CallFunc_SetBoxFalloff_MaxRange_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SetPlaneFalloff_ReturnValue != nullptr)
		*CallFunc_SetPlaneFalloff_ReturnValue = Parms.CallFunc_SetPlaneFalloff_ReturnValue;

	if (CallFunc_SetPlaneFalloff_ReturnValue_1 != nullptr)
		*CallFunc_SetPlaneFalloff_ReturnValue_1 = Parms.CallFunc_SetPlaneFalloff_ReturnValue_1;

	if (CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast != nullptr)
		*CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast = Parms.CallFunc_SetPlaneFalloff_MaxRange_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (ConstParm, ExportObject, Parm, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue_1                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll_1                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Yaw_1                                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult_1                    (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue_1                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// float                              CallFunc_BreakRotator_Roll_2                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BreakRotator_Pitch_2                                    (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BreakRotator_Yaw_2                                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BreakRotator_Roll_3                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_BreakRotator_Pitch_3                                    (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// float                              CallFunc_BreakRotator_Yaw_3                                      (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_2                               (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_3                               (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_2                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_FMin_ReturnValue                                        (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_FMin_ReturnValue_1                                      (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_3                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_4                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Y_4                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector_Z_4                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetComponentBounds_Origin_1                             (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent_1                          (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_GetComponentBounds_SphereRadius_1                       (ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FLinearColor                CallFunc_Multiply_LinearColorLinearColor_ReturnValue             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector_X_5                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_5                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_5                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_BreakVector_X_6                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Y_6                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_BreakVector_Z_6                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_3                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// class UTextRenderComponent*        CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocationAndRotation_SweepHitResult_1         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTextRenderComponent*        CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue_1                      (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X_7                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_BreakVector_Y_7                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// double                             CallFunc_BreakVector_Z_7                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, EditorOnly)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue_4                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FColor                      CallFunc_Conv_LinearColorToColor_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Add_DoubleDouble_B_ImplicitCast                         (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)

class UMaterialInstanceDynamic* APRIMAL_FS_MasterField_BASE_C::UserConstructionScript(int32* Temp_int_Variable, int32* Temp_int_Variable_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, float* CallFunc_BreakRotator_Roll_1, float* CallFunc_BreakRotator_Pitch_1, float* CallFunc_BreakRotator_Yaw_1, float* CallFunc_BreakRotator_Roll_2, float* CallFunc_BreakRotator_Pitch_2, float* CallFunc_BreakRotator_Yaw_2, float* CallFunc_BreakRotator_Roll_3, float* CallFunc_BreakRotator_Pitch_3, float* CallFunc_BreakRotator_Yaw_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, double* CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FLinearColor& CallFunc_Multiply_LinearColorLinearColor_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_2, double* CallFunc_Add_DoubleDouble_ReturnValue_3, class UTextRenderComponent* CallFunc_Array_Get_Item, const struct FVector& CallFunc_MakeVector_ReturnValue_4, class UTextRenderComponent* CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_MakeVector_ReturnValue_5, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult_1, double* CallFunc_Add_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "UserConstructionScript");

	Params::APRIMAL_FS_MasterField_BASE_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Multiply_LinearColorLinearColor_ReturnValue = CallFunc_Multiply_LinearColorLinearColor_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeVector_ReturnValue_4 = CallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_MakeVector_ReturnValue_5 = CallFunc_MakeVector_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_K2_SetRelativeLocation_SweepHitResult != nullptr)
		*CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult);

	if (CallFunc_K2_SetRelativeRotation_SweepHitResult != nullptr)
		*CallFunc_K2_SetRelativeRotation_SweepHitResult = std::move(Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult);

	if (CallFunc_BreakRotator_Roll_1 != nullptr)
		*CallFunc_BreakRotator_Roll_1 = Parms.CallFunc_BreakRotator_Roll_1;

	if (CallFunc_BreakRotator_Pitch_1 != nullptr)
		*CallFunc_BreakRotator_Pitch_1 = Parms.CallFunc_BreakRotator_Pitch_1;

	if (CallFunc_BreakRotator_Yaw_1 != nullptr)
		*CallFunc_BreakRotator_Yaw_1 = Parms.CallFunc_BreakRotator_Yaw_1;

	if (CallFunc_BreakRotator_Roll_2 != nullptr)
		*CallFunc_BreakRotator_Roll_2 = Parms.CallFunc_BreakRotator_Roll_2;

	if (CallFunc_BreakRotator_Pitch_2 != nullptr)
		*CallFunc_BreakRotator_Pitch_2 = Parms.CallFunc_BreakRotator_Pitch_2;

	if (CallFunc_BreakRotator_Yaw_2 != nullptr)
		*CallFunc_BreakRotator_Yaw_2 = Parms.CallFunc_BreakRotator_Yaw_2;

	if (CallFunc_BreakRotator_Roll_3 != nullptr)
		*CallFunc_BreakRotator_Roll_3 = Parms.CallFunc_BreakRotator_Roll_3;

	if (CallFunc_BreakRotator_Pitch_3 != nullptr)
		*CallFunc_BreakRotator_Pitch_3 = Parms.CallFunc_BreakRotator_Pitch_3;

	if (CallFunc_BreakRotator_Yaw_3 != nullptr)
		*CallFunc_BreakRotator_Yaw_3 = Parms.CallFunc_BreakRotator_Yaw_3;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue_2 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_2 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_2;

	if (CallFunc_Add_DoubleDouble_ReturnValue_3 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_3 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_3;

	if (CallFunc_K2_SetRelativeLocation_SweepHitResult_1 != nullptr)
		*CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = std::move(Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1);

	if (CallFunc_Add_DoubleDouble_B_ImplicitCast != nullptr)
		*CallFunc_Add_DoubleDouble_B_ImplicitCast = Parms.CallFunc_Add_DoubleDouble_B_ImplicitCast;

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void APRIMAL_FS_MasterField_BASE_C::ReceiveTick(float* DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "ReceiveTick");

	Params::APRIMAL_FS_MasterField_BASE_C_ReceiveTick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaSeconds != nullptr)
		*DeltaSeconds = Parms.DeltaSeconds;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APRIMAL_FS_MasterField_BASE_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.CE_Trigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     IncomingImpactVector                                             (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              DirectionalForceStrengthMultiplier                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              RadialForceStrengthMultiplier                                    (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
// float                              IncomingVelocity                                                 (ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

float APRIMAL_FS_MasterField_BASE_C::CE_Trigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "CE_Trigger");

	Params::APRIMAL_FS_MasterField_BASE_C_CE_Trigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.SetActivationType
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFieldActivationType_NewNewActivationType                                                (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EFieldActivationType_New APRIMAL_FS_MasterField_BASE_C::SetActivationType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "SetActivationType");

	Params::APRIMAL_FS_MasterField_BASE_C_SetActivationType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PRIMAL_FS_MasterField_BASE.PRIMAL_FS_MasterField_BASE_C.ExecuteUbergraph_PRIMAL_FS_MasterField_BASE
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UReturnResultsTerminal*      CallFunc_SetReturnResultsTerminal_ReturnValue                    (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DeltaSeconds                                        (BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class UOperatorField*              CallFunc_FalloffShapeSwitch_OperatorFieldOut                     (Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Abs_ReturnValue                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// class UOperatorField*              CallFunc_FalloffShapeSwitch_OperatorFieldOut_1                   (Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UFieldSystemMetaDataProcessingResolution*CallFunc_SetMetaDataaProcessingResolutionType_ReturnValue        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              CallFunc_FalloffShapeSwitch_OperatorFieldOut_2                   (Net, EditFixedSize, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UNoiseField*                 CallFunc_CalculateNoise_OutputPin                                (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UCullingField*               CallFunc_FalloffAndCullSwitch_Main_CullingField                  (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNoiseField*                 CallFunc_CalculateNoise_OutputPin_1                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UNoiseField*                 CallFunc_CalculateNoise_OutputPin_2                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_BreakVector3f_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakVector3f_Y                                         (ConstParm, ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_BreakVector3f_Z                                         (Edit, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCullingField*               CallFunc_AddComponent_ReturnValue                                (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_1                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// class UUniformInteger*             CallFunc_AddComponent_ReturnValue_1                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UUniformInteger*             CallFunc_SetUniformInteger_ReturnValue                           (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UNoiseField*                 CallFunc_CalculateNoise_OutputPin_3                              (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_2                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UUniformVector*              CallFunc_AddComponent_ReturnValue_2                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_3                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UUniformVector*              CallFunc_SetUniformVector_ReturnValue                            (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UUniformVector*              CallFunc_AddComponent_ReturnValue_3                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// struct FTransform                  Temp_struct_Variable_4                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class UUniformVector*              CallFunc_SetUniformVector_ReturnValue_1                          (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_4                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// struct FTransform                  Temp_struct_Variable_5                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// struct FTransform                  Temp_struct_Variable_6                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_5                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// class UUniformScalar*              CallFunc_AddComponent_ReturnValue_6                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// class UUniformScalar*              CallFunc_SetUniformScalar_ReturnValue                            (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_7                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// struct FTransform                  Temp_struct_Variable_8                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class URandomVector*               CallFunc_AddComponent_ReturnValue_7                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// class UUniformScalar*              CallFunc_AddComponent_ReturnValue_8                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// class URandomVector*               CallFunc_SetRandomVector_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UUniformScalar*              CallFunc_SetUniformScalar_ReturnValue_1                          (Edit, ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue                            (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_9                                           (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_1                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class URadialVector*               CallFunc_AddComponent_ReturnValue_9                              (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, EditorOnly)
// struct FTransform                  Temp_struct_Variable_10                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class URadialVector*               CallFunc_SetRadialVector_ReturnValue                             (Edit, ConstParm, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_10                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FTransform                  Temp_struct_Variable_11                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_2                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_11                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// class UCullingField*               CallFunc_FalloffAndCullSwitch_Main_CullingField_1                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_3                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// class UCullingField*               CallFunc_FalloffAndCullSwitch_Main_CullingField_2                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTransform                  Temp_struct_Variable_12                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class UCullingField*               CallFunc_AddComponent_ReturnValue_12                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FVector                     K2Node_Event_IncomingImpactVector                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_Event_DirectionalForceStrengthMultiplier                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_Event_RadialForceStrengthMultiplier                       (EditFixedSize, Parm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              K2Node_Event_IncomingVelocity                                    (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_13                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_13                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_3                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_NotEqual_VectorVector_ReturnValue                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// struct FTransform                  Temp_struct_Variable_14                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// struct FTransform                  Temp_struct_Variable_15                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, NoDestructor)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_14                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_15                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NoDestructor)
// enum class EFieldActivationType_NewK2Node_Event_NewActivationType                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_4                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_5                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp, NonTransactional)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_6                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (Edit, ConstParm, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UCullingField*               CallFunc_SetCullingField_ReturnValue_1                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// struct FTransform                  Temp_struct_Variable_16                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NoDestructor)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UOperatorField*              CallFunc_AddComponent_ReturnValue_16                             (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, RepNotify, NoDestructor)
// class UOperatorField*              CallFunc_SetOperatorField_ReturnValue_7                          (ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// class UCullingField*               CallFunc_FalloffAndCullSwitch_Main_CullingField_3                (ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_4                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, NonTransactional)
// float                              CallFunc_SetUniformScalar_Magnitude_ImplicitCast                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_SetUniformScalar_Magnitude_ImplicitCast_1               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetRadialVector_Magnitude_ImplicitCast                  (ConstParm, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_Delay_Duration_ImplicitCast_1                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// float                              CallFunc_SetUniformVector_Magnitude_ImplicitCast                 (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              CallFunc_Delay_Duration_ImplicitCast_2                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FVector3f                   CallFunc_BreakVector3f_InVec_ImplicitCast                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             K2Node_VariableSet_IncomingVelocity_ImplicitCast                 (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_NotEqual_DoubleDouble_A_ImplicitCast                    (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// double                             CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast                (ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

double APRIMAL_FS_MasterField_BASE_C::ExecuteUbergraph_PRIMAL_FS_MasterField_BASE(int32* EntryPoint, class UReturnResultsTerminal* CallFunc_SetReturnResultsTerminal_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 CallFunc_Conv_ByteToInt_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, class UOperatorField* CallFunc_FalloffShapeSwitch_OperatorFieldOut, double* CallFunc_Add_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue, class UOperatorField* CallFunc_FalloffShapeSwitch_OperatorFieldOut_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, class UFieldSystemMetaDataProcessingResolution* CallFunc_SetMetaDataaProcessingResolutionType_ReturnValue, class UOperatorField* CallFunc_FalloffShapeSwitch_OperatorFieldOut_2, float CallFunc_BreakVector3f_Y, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, class UUniformScalar** CallFunc_SetUniformScalar_ReturnValue, class UUniformScalar** CallFunc_SetUniformScalar_ReturnValue_1, float K2Node_Event_RadialForceStrengthMultiplier, float K2Node_Event_IncomingVelocity, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_3, enum class EFieldActivationType_New* K2Node_Event_NewActivationType, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32* Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue_4, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double* K2Node_VariableSet_IncomingVelocity_ImplicitCast, double CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PRIMAL_FS_MasterField_BASE_C", "ExecuteUbergraph_PRIMAL_FS_MasterField_BASE");

	Params::APRIMAL_FS_MasterField_BASE_C_ExecuteUbergraph_PRIMAL_FS_MasterField_BASE_Params Parms{};

	Parms.CallFunc_SetReturnResultsTerminal_ReturnValue = CallFunc_SetReturnResultsTerminal_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_FalloffShapeSwitch_OperatorFieldOut = CallFunc_FalloffShapeSwitch_OperatorFieldOut;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_FalloffShapeSwitch_OperatorFieldOut_1 = CallFunc_FalloffShapeSwitch_OperatorFieldOut_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_SetMetaDataaProcessingResolutionType_ReturnValue = CallFunc_SetMetaDataaProcessingResolutionType_ReturnValue;
	Parms.CallFunc_FalloffShapeSwitch_OperatorFieldOut_2 = CallFunc_FalloffShapeSwitch_OperatorFieldOut_2;
	Parms.CallFunc_BreakVector3f_Y = CallFunc_BreakVector3f_Y;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Event_RadialForceStrengthMultiplier = K2Node_Event_RadialForceStrengthMultiplier;
	Parms.K2Node_Event_IncomingVelocity = K2Node_Event_IncomingVelocity;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_3 = CallFunc_Multiply_DoubleFloat_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_4 = CallFunc_Multiply_DoubleFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast = CallFunc_GreaterEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Add_DoubleDouble_ReturnValue_1 != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue_1 = Parms.CallFunc_Add_DoubleDouble_ReturnValue_1;

	if (CallFunc_SetUniformScalar_ReturnValue != nullptr)
		*CallFunc_SetUniformScalar_ReturnValue = Parms.CallFunc_SetUniformScalar_ReturnValue;

	if (CallFunc_SetUniformScalar_ReturnValue_1 != nullptr)
		*CallFunc_SetUniformScalar_ReturnValue_1 = Parms.CallFunc_SetUniformScalar_ReturnValue_1;

	if (K2Node_Event_NewActivationType != nullptr)
		*K2Node_Event_NewActivationType = Parms.K2Node_Event_NewActivationType;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (K2Node_VariableSet_IncomingVelocity_ImplicitCast != nullptr)
		*K2Node_VariableSet_IncomingVelocity_ImplicitCast = Parms.K2Node_VariableSet_IncomingVelocity_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	return Parms.ReturnValue;

}

}


