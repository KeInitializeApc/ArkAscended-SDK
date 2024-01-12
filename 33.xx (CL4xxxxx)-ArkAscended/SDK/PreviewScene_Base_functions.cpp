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
// double                             NewIntensity                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

double APreviewScene_Base_C::SetDebugLightIntensity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightIntensity");

	Params::APreviewScene_Base_C_SetDebugLightIntensity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PreviewScene_Base.PreviewScene_Base_C.SetDebugLightRotation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    NewRotation                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APreviewScene_Base_C::SetDebugLightRotation(const struct FRotator& NewRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "SetDebugLightRotation");

	Params::APreviewScene_Base_C_SetDebugLightRotation_Params Parms{};

	Parms.NewRotation = NewRotation;

	UObject::ProcessEvent(Func, &Parms);

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
// bool                               IsFemale                                                         (BlueprintVisible, Parm, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UMeshComponent*              ForMeshComp                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class USceneComponent*>     ForChildComps                                                    (BlueprintVisible, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void APreviewScene_Base_C::NotifyPreviewSceneUpdated(float* DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifyPreviewSceneUpdated");

	Params::APreviewScene_Base_C_NotifyPreviewSceneUpdated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DeltaTime != nullptr)
		*DeltaTime = Parms.DeltaTime;

}


// Function PreviewScene_Base.PreviewScene_Base_C.ExecuteUbergraph_PreviewScene_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (ConstParm, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, Net, Parm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, EditConst, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

float APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(struct FVector* CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, class UMeshComponent** K2Node_Event_ForMeshComp, TArray<class USceneComponent*>* K2Node_Event_ForChildComps, class USceneComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, double CallFunc_Vector_Distance_ReturnValue, float* K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float* K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "ExecuteUbergraph_PreviewScene_Base");

	Params::APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params Parms{};

	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakTransform_Location != nullptr)
		*CallFunc_BreakTransform_Location = std::move(Parms.CallFunc_BreakTransform_Location);

	if (K2Node_Event_ForMeshComp != nullptr)
		*K2Node_Event_ForMeshComp = Parms.K2Node_Event_ForMeshComp;

	if (K2Node_Event_ForChildComps != nullptr)
		*K2Node_Event_ForChildComps = std::move(Parms.K2Node_Event_ForChildComps);

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_BreakTransform_Location_1 != nullptr)
		*CallFunc_BreakTransform_Location_1 = std::move(Parms.CallFunc_BreakTransform_Location_1);

	if (K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast != nullptr)
		*K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;

	if (K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast != nullptr)
		*K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	return Parms.ReturnValue;

}

}


