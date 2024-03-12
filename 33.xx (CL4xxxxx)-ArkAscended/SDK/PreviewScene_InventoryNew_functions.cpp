#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewScene_InventoryNew.PreviewScene_InventoryNew_C
// (Actor)

class UClass* APreviewScene_InventoryNew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewScene_InventoryNew_C");

	return Clss;
}


// PreviewScene_InventoryNew_C PreviewScene_InventoryNew.Default__PreviewScene_InventoryNew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewScene_InventoryNew_C* APreviewScene_InventoryNew_C::GetDefaultObj()
{
	static class APreviewScene_InventoryNew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewScene_InventoryNew_C*>(APreviewScene_InventoryNew_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.UpdateFloorLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFemale                                                         (ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

double APreviewScene_InventoryNew_C::UpdateFloorLocation(bool IsFemale, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FHitResult* CallFunc_K2_SetRelativeLocation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "UpdateFloorLocation");

	Params::APreviewScene_InventoryNew_C_UpdateFloorLocation_Params Parms{};

	Parms.IsFemale = IsFemale;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_K2_SetRelativeLocation_SweepHitResult != nullptr)
		*CallFunc_K2_SetRelativeLocation_SweepHitResult = std::move(Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult);

	return Parms.ReturnValue;

}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.FrontLightChangeWhenBelowFloor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

float APreviewScene_InventoryNew_C::FrontLightChangeWhenBelowFloor(float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "FrontLightChangeWhenBelowFloor");

	Params::APreviewScene_InventoryNew_C_FrontLightChangeWhenBelowFloor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	return Parms.ReturnValue;

}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.RotateLightsInZWithCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Roll                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Pitch                                      (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakRotator_Yaw                                        (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (ConstParm, ExportObject, Parm, OutParm, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_GetFloatValue_InTime_ImplicitCast                       (BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_Alpha_ImplicitCast                                 (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_A_ImplicitCast                          (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetSourceCubemapAngle_NewValue_ImplicitCast             (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

double APreviewScene_InventoryNew_C::RotateLightsInZWithCamera(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float* CallFunc_BreakRotator_Roll, float* CallFunc_BreakRotator_Pitch, float* CallFunc_BreakRotator_Yaw, struct FHitResult* CallFunc_K2_SetRelativeRotation_SweepHitResult, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast, float CallFunc_SetSourceCubemapAngle_NewValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "RotateLightsInZWithCamera");

	Params::APreviewScene_InventoryNew_C_RotateLightsInZWithCamera_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_Lerp_Alpha_ImplicitCast = CallFunc_Lerp_Alpha_ImplicitCast;
	Parms.CallFunc_SetSourceCubemapAngle_NewValue_ImplicitCast = CallFunc_SetSourceCubemapAngle_NewValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakRotator_Roll != nullptr)
		*CallFunc_BreakRotator_Roll = Parms.CallFunc_BreakRotator_Roll;

	if (CallFunc_BreakRotator_Pitch != nullptr)
		*CallFunc_BreakRotator_Pitch = Parms.CallFunc_BreakRotator_Pitch;

	if (CallFunc_BreakRotator_Yaw != nullptr)
		*CallFunc_BreakRotator_Yaw = Parms.CallFunc_BreakRotator_Yaw;

	if (CallFunc_K2_SetRelativeRotation_SweepHitResult != nullptr)
		*CallFunc_K2_SetRelativeRotation_SweepHitResult = std::move(Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult);

	return Parms.ReturnValue;

}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifyPreviewSceneUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float APreviewScene_InventoryNew_C::NotifyPreviewSceneUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "NotifyPreviewSceneUpdated");

	Params::APreviewScene_InventoryNew_C_NotifyPreviewSceneUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.NotifySetupPreviewScene
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UMeshComponent*              ForMeshComp                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class USceneComponent*>     ForChildComps                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

TArray<class USceneComponent*> APreviewScene_InventoryNew_C::NotifySetupPreviewScene(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "NotifySetupPreviewScene");

	Params::APreviewScene_InventoryNew_C_NotifySetupPreviewScene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function PreviewScene_InventoryNew.PreviewScene_InventoryNew_C.ExecuteUbergraph_PreviewScene_InventoryNew
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)

class AShooterPlayerController* APreviewScene_InventoryNew_C::ExecuteUbergraph_PreviewScene_InventoryNew(int32* EntryPoint, float K2Node_Event_DeltaTime, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, int32* CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_InventoryNew_C", "ExecuteUbergraph_PreviewScene_InventoryNew");

	Params::APreviewScene_InventoryNew_C_ExecuteUbergraph_PreviewScene_InventoryNew_Params Parms{};

	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_Event_ForMeshComp = K2Node_Event_ForMeshComp;
	Parms.K2Node_Event_ForChildComps = K2Node_Event_ForChildComps;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetConsoleVariableIntValue_ReturnValue != nullptr)
		*CallFunc_GetConsoleVariableIntValue_ReturnValue = Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue;

	return Parms.ReturnValue;

}

}


