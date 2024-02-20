#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PreviewScene_Base.PreviewScene_Base_C
// (Actor)

class UClass* APreviewScene_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PreviewScene_Base_C");

	return Clss;
}


// PreviewScene_Base_C PreviewScene_Base.Default__PreviewScene_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APreviewScene_Base_C* APreviewScene_Base_C::GetDefaultObj()
{
	static class APreviewScene_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APreviewScene_Base_C*>(APreviewScene_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewIntensity                                                     (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void APreviewScene_Base_C::SetDebugLightIntensity(double NewIntensity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightIntensity");

	Params::APreviewScene_Base_C_SetDebugLightIntensity_Params Parms{};

	Parms.NewIntensity = NewIntensity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    NewRotation                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, EditConst, SubobjectReference)

struct FRotator APreviewScene_Base_C::SetDebugLightRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightRotation");

	Params::APreviewScene_Base_C_SetDebugLightRotation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_Base.PreviewScene_Base_C.DebugLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APreviewScene_Base_C::DebugLights()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "DebugLights");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PreviewScene_Base.PreviewScene_Base_C.UpdateFloorLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsFemale                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void APreviewScene_Base_C::UpdateFloorLocation(bool IsFemale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "UpdateFloorLocation");

	Params::APreviewScene_Base_C_UpdateFloorLocation_Params Parms{};

	Parms.IsFemale = IsFemale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PreviewScene_Base.PreviewScene_Base_C.NotifySetupPreviewScene
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UMeshComponent*              ForMeshComp                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// TArray<class USceneComponent*>     ForChildComps                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

class AShooterPlayerController* APreviewScene_Base_C::NotifySetupPreviewScene(class UMeshComponent* ForMeshComp, const TArray<class USceneComponent*>& ForChildComps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifySetupPreviewScene");

	Params::APreviewScene_Base_C_NotifySetupPreviewScene_Params Parms{};

	Parms.ForMeshComp = ForMeshComp;
	Parms.ForChildComps = ForChildComps;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

float APreviewScene_Base_C::NotifyPreviewSceneUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifyPreviewSceneUpdated");

	Params::APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (Edit, ExportObject, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (ConstParm, BlueprintVisible, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (BlueprintVisible, Net, Parm, OutParm, Config, GlobalConfig, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Config, GlobalConfig, SubobjectReference)

struct FVector APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(const struct FVector& CallFunc_BreakTransform_Location, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent** K2Node_Event_ForMeshComp, TArray<class USceneComponent*>* K2Node_Event_ForChildComps, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, struct FTransform* CallFunc_GetRelativeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, double* CallFunc_Vector_Distance_ReturnValue, float* K2Node_Event_DeltaTime, float* K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float* K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "ExecuteUbergraph_PreviewScene_Base");

	Params::APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params Parms{};

	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (K2Node_Event_ForMeshComp != nullptr)
		*K2Node_Event_ForMeshComp = Parms.K2Node_Event_ForMeshComp;

	if (K2Node_Event_ForChildComps != nullptr)
		*K2Node_Event_ForChildComps = std::move(Parms.K2Node_Event_ForChildComps);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_GetRelativeTransform_ReturnValue != nullptr)
		*CallFunc_GetRelativeTransform_ReturnValue = std::move(Parms.CallFunc_GetRelativeTransform_ReturnValue);

	if (CallFunc_Vector_Distance_ReturnValue != nullptr)
		*CallFunc_Vector_Distance_ReturnValue = Parms.CallFunc_Vector_Distance_ReturnValue;

	if (K2Node_Event_DeltaTime != nullptr)
		*K2Node_Event_DeltaTime = Parms.K2Node_Event_DeltaTime;

	if (K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast != nullptr)
		*K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;

	if (K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast != nullptr)
		*K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	return Parms.ReturnValue;

}

}


