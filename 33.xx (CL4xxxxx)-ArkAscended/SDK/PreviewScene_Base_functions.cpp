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
// double                             NewIntensity                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

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
// struct FRotator                    NewRotation                                                      (Edit, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               IsFemale                                                         (Edit, ZeroConstructor, Transient, Config, GlobalConfig, InstancedReference, SubobjectReference)

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
// class UMeshComponent*              ForMeshComp                                                      (ConstParm, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// TArray<class USceneComponent*>     ForChildComps                                                    (ConstParm, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    ForPC                                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              DeltaTime                                                        (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UMeshComponent*              K2Node_Event_ForMeshComp                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// TArray<class USceneComponent*>     K2Node_Event_ForChildComps                                       (Edit, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_Event_ForPC                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Max_ReturnValue                                         (Edit, ExportObject, Net, EditFixedSize, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FTransform                  CallFunc_GetRelativeTransform_ReturnValue                        (ConstParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_Event_DeltaTime                                           (Edit, ExportObject, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (Edit, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FRotator APreviewScene_Base_C::ExecuteUbergraph_PreviewScene_Base(int32 EntryPoint, struct FVector* CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Subtract_IntInt_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue, class UMeshComponent* K2Node_Event_ForMeshComp, const TArray<class USceneComponent*>& K2Node_Event_ForChildComps, class AShooterPlayerController* K2Node_Event_ForPC, class USceneComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, struct FVector* CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_Distance_ReturnValue, float K2Node_Event_DeltaTime, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PreviewScene_Base_C", "ExecuteUbergraph_PreviewScene_Base");

	Params::APreviewScene_Base_C_ExecuteUbergraph_PreviewScene_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_ForMeshComp = K2Node_Event_ForMeshComp;
	Parms.K2Node_Event_ForChildComps = K2Node_Event_ForChildComps;
	Parms.K2Node_Event_ForPC = K2Node_Event_ForPC;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetRelativeTransform_ReturnValue = CallFunc_GetRelativeTransform_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.K2Node_Event_DeltaTime = K2Node_Event_DeltaTime;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakTransform_Scale != nullptr)
		*CallFunc_BreakTransform_Scale = std::move(Parms.CallFunc_BreakTransform_Scale);

	if (CallFunc_Subtract_IntInt_ReturnValue != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue = Parms.CallFunc_Subtract_IntInt_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Subtract_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Subtract_IntInt_ReturnValue_1 = Parms.CallFunc_Subtract_IntInt_ReturnValue_1;

	if (CallFunc_BreakTransform_Scale_1 != nullptr)
		*CallFunc_BreakTransform_Scale_1 = std::move(Parms.CallFunc_BreakTransform_Scale_1);

	return Parms.ReturnValue;

}

}


