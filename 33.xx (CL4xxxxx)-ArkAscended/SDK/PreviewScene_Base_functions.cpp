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
// double                             NewIntensity                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

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
// struct FRotator                    NewRotation                                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, EditConst, SubobjectReference)

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
// bool                               IsFemale                                                         (ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UMeshComponent*              ForMeshComp                                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class USceneComponent*>     ForChildComps                                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, SubobjectReference)

TArray<class USceneComponent*> APreviewScene_Base_C::NotifySetupPreviewScene(class AShooterPlayerController** ForPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "NotifySetupPreviewScene");

	Params::APreviewScene_Base_C_NotifySetupPreviewScene_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ForPC != nullptr)
		*ForPC = Parms.ForPC;

	return Parms.ReturnValue;

}


// Function PreviewScene_Base.PreviewScene_Base_C.NotifyPreviewSceneUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (BlueprintReadOnly, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (BlueprintVisible, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ConstParm, ExportObject, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (Edit, ConstParm, EditFixedSize, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (Edit, ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FVector APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(int32* EntryPoint, struct FRotator* CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, struct FRotator* CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_Distance_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "ExecuteUbergraph_PreviewScene_Base");

	Params::APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params Parms{};

	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Event_ForMeshComp = K2Node_Event_ForMeshComp;
	Parms.K2Node_Event_ForChildComps = K2Node_Event_ForChildComps;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_BreakTransform_Rotation != nullptr)
		*CallFunc_BreakTransform_Rotation = std::move(Parms.CallFunc_BreakTransform_Rotation);

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_BreakTransform_Rotation_1 != nullptr)
		*CallFunc_BreakTransform_Rotation_1 = std::move(Parms.CallFunc_BreakTransform_Rotation_1);

	return Parms.ReturnValue;

}

}


