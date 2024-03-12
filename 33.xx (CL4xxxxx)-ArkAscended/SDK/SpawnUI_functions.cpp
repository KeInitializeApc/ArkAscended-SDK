#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SpawnUI.SpawnUI_C
// (None)

class UClass* USpawnUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnUI_C");

	return Clss;
}


// SpawnUI_C SpawnUI.Default__SpawnUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpawnUI_C* USpawnUI_C::GetDefaultObj()
{
	static class USpawnUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpawnUI_C*>(USpawnUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpawnUI.SpawnUI_C.GetGenericCharacterPreset
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// struct FCharacterPreset            ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FCharacterPreset            K2Node_MakeStruct_CharacterPreset                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCharacterPreset            CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)

struct FCharacterPreset USpawnUI_C::GetGenericCharacterPreset(const struct FCharacterPreset& K2Node_MakeStruct_CharacterPreset, const struct FCharacterPreset& CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetGenericCharacterPreset");

	Params::USpawnUI_C_GetGenericCharacterPreset_Params Parms{};

	Parms.K2Node_MakeStruct_CharacterPreset = K2Node_MakeStruct_CharacterPreset;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Get_OverallHeightSlider_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::Get_OverallHeightSlider_bIsEnabled(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Get_OverallHeightSlider_bIsEnabled");

	Params::USpawnUI_C_Get_OverallHeightSlider_bIsEnabled_Params Parms{};

	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.ShowModIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::ShowModIcon(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "ShowModIcon");

	Params::USpawnUI_C_ShowModIcon_Params Parms{};

	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetCameraSettings
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FCameraLocationSetting      Return                                                           (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FCameraLocationSetting      K2Node_MakeStruct_CameraLocationSetting                          (BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)

struct FCameraLocationSetting USpawnUI_C::GetCameraSettings(int32 TabIndex, const struct FCameraLocationSetting& K2Node_MakeStruct_CameraLocationSetting, bool* CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_Array_IsValidIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetCameraSettings");

	Params::USpawnUI_C_GetCameraSettings_Params Parms{};

	Parms.TabIndex = TabIndex;
	Parms.K2Node_MakeStruct_CameraLocationSetting = K2Node_MakeStruct_CameraLocationSetting;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue_1 = Parms.CallFunc_Array_IsValidIndex_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.SizeZoomUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Local_NormalizedHeight                                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FCameraLocationSetting      CallFunc_GetCameraSettingsForTab_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Add_DoubleFloat_ReturnValue_1                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_2                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Get_Preview_Mesh_Normalized_Height_Height               (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Ease_ReturnValue                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeA_ImplicitCast                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             K2Node_VariableSet_PreAnimZoom_ImplicitCast                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_MapRangeClamped_OutRangeB_ImplicitCast                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_ResetZoomTo_zoom_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

double USpawnUI_C::SizeZoomUpdate(double* Local_NormalizedHeight, double CallFunc_SelectFloat_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, struct FCameraLocationSetting* CallFunc_GetCameraSettingsForTab_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_FClamp01_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_2, double* CallFunc_Ease_ReturnValue, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, double* CallFunc_MapRangeClamped_OutRangeA_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, double* CallFunc_MapRangeClamped_OutRangeB_ImplicitCast, float* CallFunc_ResetZoomTo_zoom_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SizeZoomUpdate");

	Params::USpawnUI_C_SizeZoomUpdate_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_2 = CallFunc_SelectFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Local_NormalizedHeight != nullptr)
		*Local_NormalizedHeight = Parms.Local_NormalizedHeight;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetCameraSettingsForTab_ReturnValue != nullptr)
		*CallFunc_GetCameraSettingsForTab_ReturnValue = std::move(Parms.CallFunc_GetCameraSettingsForTab_ReturnValue);

	if (CallFunc_NearlyEqual_FloatFloat_ReturnValue != nullptr)
		*CallFunc_NearlyEqual_FloatFloat_ReturnValue = Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue;

	if (CallFunc_Ease_ReturnValue != nullptr)
		*CallFunc_Ease_ReturnValue = Parms.CallFunc_Ease_ReturnValue;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_MapRangeClamped_OutRangeA_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeA_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeA_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_MapRangeClamped_OutRangeB_ImplicitCast != nullptr)
		*CallFunc_MapRangeClamped_OutRangeB_ImplicitCast = Parms.CallFunc_MapRangeClamped_OutRangeB_ImplicitCast;

	if (CallFunc_ResetZoomTo_zoom_ImplicitCast != nullptr)
		*CallFunc_ResetZoomTo_zoom_ImplicitCast = Parms.CallFunc_ResetZoomTo_zoom_ImplicitCast;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Get Preview Mesh Normalized Height
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Height                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class UMeshComponent*              CallFunc_GetPreviewMesh_ReturnValue                              (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

float USpawnUI_C::Get_Preview_Mesh_Normalized_Height(double* Height, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, class UMeshComponent* CallFunc_GetPreviewMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Get Preview Mesh Normalized Height");

	Params::USpawnUI_C_Get_Preview_Mesh_Normalized_Height_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_GetPreviewMesh_ReturnValue = CallFunc_GetPreviewMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Height != nullptr)
		*Height = Parms.Height;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.OnPreviewKeyDown
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 CallFunc_OnPreviewKeyDown_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FEventReply USpawnUI_C::OnPreviewKeyDown(struct FGeometry* MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& CallFunc_OnPreviewKeyDown_ReturnValue, struct FKey* CallFunc_GetKey_ReturnValue, bool* CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnPreviewKeyDown");

	Params::USpawnUI_C_OnPreviewKeyDown_Params Parms{};

	Parms.CallFunc_OnPreviewKeyDown_ReturnValue = CallFunc_OnPreviewKeyDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (InKeyEvent != nullptr)
		*InKeyEvent = std::move(Parms.InKeyEvent);

	if (CallFunc_GetKey_ReturnValue != nullptr)
		*CallFunc_GetKey_ReturnValue = std::move(Parms.CallFunc_GetKey_ReturnValue);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.FixPS5Icons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::FixPS5Icons(int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>* K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, class UWidget* CallFunc_Array_Get_Item, class UImage** K2Node_DynamicCast_AsImage, bool* K2Node_DynamicCast_bSuccess, class FString* CallFunc_GetObjectName_ReturnValue, bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "FixPS5Icons");

	Params::USpawnUI_C_FixPS5Icons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_DynamicCast_AsImage != nullptr)
		*K2Node_DynamicCast_AsImage = Parms.K2Node_DynamicCast_AsImage;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_GetObjectName_ReturnValue != nullptr)
		*CallFunc_GetObjectName_ReturnValue = std::move(Parms.CallFunc_GetObjectName_ReturnValue);

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.HeadZoomUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             MinOffset                                                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FCameraLocationSetting      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FCameraLocationSetting      CallFunc_GetCameraSettingsForTab_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FCameraLocationSetting      CallFunc_GetCameraSettings_return                                (Edit, ConstParm, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_2                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FClamp_ReturnValue                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_NormalizeToRange_ReturnValue                            (BlueprintVisible, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_ReturnValue                                 (Edit, ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_ReturnValue_1                               (Edit, ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              CallFunc_BPFLerpFast_InPercent_ImplicitCast                      (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InMax_ImplicitCast                          (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InMin_ImplicitCast                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InMin_ImplicitCast_1                        (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (BlueprintVisible, ExportObject, Net, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1                   (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_NormalizeToRange_RangeMin_ImplicitCast                  (Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_FClamp_Min_ImplicitCast                                 (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_MaximumZoomMultiplier_ImplicitCast            (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InPercent_ImplicitCast_1                    (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Vector_Set_Z_ImplicitCast                               (Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float USpawnUI_C::HeadZoomUpdate(double CallFunc_Multiply_DoubleFloat_ReturnValue, bool Temp_bool_Variable, const struct FCameraLocationSetting& K2Node_Select_Default, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, struct FCameraLocationSetting* CallFunc_GetCameraSettingsForTab_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_2, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FClamp_ReturnValue, float CallFunc_BPFLerpFast_ReturnValue, float CallFunc_BPFLerpFast_ReturnValue_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float* CallFunc_BPFLerpFast_InMax_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_FClamp_Value_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1, double* CallFunc_NormalizeToRange_RangeMin_ImplicitCast, double* CallFunc_FClamp_Min_ImplicitCast, double CallFunc_Vector_Set_Z_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "HeadZoomUpdate");

	Params::USpawnUI_C_HeadZoomUpdate_Params Parms{};

	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_2 = CallFunc_Multiply_DoubleFloat_ReturnValue_2;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_BPFLerpFast_ReturnValue = CallFunc_BPFLerpFast_ReturnValue;
	Parms.CallFunc_BPFLerpFast_ReturnValue_1 = CallFunc_BPFLerpFast_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1 = CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1;
	Parms.CallFunc_Vector_Set_Z_ImplicitCast = CallFunc_Vector_Set_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetCameraSettingsForTab_ReturnValue != nullptr)
		*CallFunc_GetCameraSettingsForTab_ReturnValue = std::move(Parms.CallFunc_GetCameraSettingsForTab_ReturnValue);

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	if (CallFunc_BPFLerpFast_InMax_ImplicitCast != nullptr)
		*CallFunc_BPFLerpFast_InMax_ImplicitCast = Parms.CallFunc_BPFLerpFast_InMax_ImplicitCast;

	if (CallFunc_NormalizeToRange_RangeMin_ImplicitCast != nullptr)
		*CallFunc_NormalizeToRange_RangeMin_ImplicitCast = Parms.CallFunc_NormalizeToRange_RangeMin_ImplicitCast;

	if (CallFunc_FClamp_Min_ImplicitCast != nullptr)
		*CallFunc_FClamp_Min_ImplicitCast = Parms.CallFunc_FClamp_Min_ImplicitCast;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.HandleConsoleIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue_1                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

void USpawnUI_C::HandleConsoleIcons(bool CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "HandleConsoleIcons");

	Params::USpawnUI_C_HandleConsoleIcons_Params Parms{};

	Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue_1 != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue_1 = Parms.CallFunc_GetIconForKeyName_ReturnValue_1;

}


// Function SpawnUI.SpawnUI_C.IsFastTravelTeleport
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::IsFastTravelTeleport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "IsFastTravelTeleport");

	Params::USpawnUI_C_IsFastTravelTeleport_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Get_BorderCharacterCreation_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

enum class ESlateVisibility USpawnUI_C::Get_BorderCharacterCreation_Visibility(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Get_BorderCharacterCreation_Visibility");

	Params::USpawnUI_C_Get_BorderCharacterCreation_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateHairLenghtSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetFloatValue_ReturnValue                               (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_GetFloatValue_ReturnValue_1                             (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_2                             (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// float                              CallFunc_GetFloatValue_ReturnValue_3                             (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_FTrunc_A_ImplicitCast_1                                 (Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)

float USpawnUI_C::UpdateHairLenghtSettings(double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateHairLenghtSettings");

	Params::USpawnUI_C_UpdateHairLenghtSettings_Params Parms{};

	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast_1 = CallFunc_FTrunc_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.RemoveBed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SpawnPointID                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_RemoveChild_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UDataListButton_ASA_C*       CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_RemoveChild_ReturnValue_1                               (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)

bool USpawnUI_C::RemoveBed(bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, class UDataListButton_ASA_C* CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "RemoveBed");

	Params::USpawnUI_C_RemoveBed_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetAllColorSliders
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDataListValueGeneric*>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UDataListValueGeneric*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

TArray<class UDataListValueGeneric*> USpawnUI_C::GetAllColorSliders(TArray<class UDataListValueGeneric*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetAllColorSliders");

	Params::USpawnUI_C_GetAllColorSliders_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetAllFloatSliders
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UDataListValueGeneric*>ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<class UDataListValueGeneric*>K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)

TArray<class UDataListValueGeneric*> USpawnUI_C::GetAllFloatSliders(TArray<class UDataListValueGeneric*>* K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetAllFloatSliders");

	Params::USpawnUI_C_GetAllFloatSliders_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateCameraPerTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Ease_ReturnValue                                        (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_2                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Ease_ReturnValue_1                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Ease_ReturnValue_2                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_X_3                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_3                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FCameraLocationSetting      CallFunc_GetCameraSettingsForTab_ReturnValue                     (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Ease_ReturnValue_3                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// double                             CallFunc_Ease_ReturnValue_4                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// struct FRotator                    CallFunc_SelectRotator_ReturnValue                               (ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_4                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_BreakVector2D_Y_4                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_Ease_ReturnValue_5                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// double                             CallFunc_Ease_ReturnValue_6                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// struct FCameraLocationSetting      CallFunc_GetCameraSettingsForTab_ReturnValue_1                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FClamp01_ReturnValue                                    (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// struct FCameraLocationSetting      CallFunc_GetCameraSettingsForTab_ReturnValue_2                   (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FRotator                    CallFunc_REase_ReturnValue                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Ease_ReturnValue_7                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// class USceneCaptureComponent2D*    CallFunc_GetCaptureComponent_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue_1                      (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Divide_DoubleFloat_ReturnValue                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_FClamp01_ReturnValue_1                                  (Edit, BlueprintVisible, ExportObject, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Lerp_ReturnValue                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FVector                     CallFunc_VEase_ReturnValue                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UMeshComponent*              CallFunc_GetPreviewMesh_ReturnValue                              (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X_1                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Y_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector_Z_1                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_1                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Ease_ReturnValue_8                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// double                             CallFunc_BreakVector_X_2                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Y_2                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_Z_2                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue_2                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_Ease_ReturnValue_9                                      (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// double                             CallFunc_Ease_ReturnValue_10                                     (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_3                              (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector_X_3                                         (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Y_3                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// double                             CallFunc_BreakVector_Z_3                                         (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast                     (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_VEase_Alpha_ImplicitCast                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_REase_Alpha_ImplicitCast                                (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_VariableSet_CustomLimitedPanExtentsY_ImplicitCast         (Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_A_ImplicitCast                              (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_ResetZoomTo_zoom_ImplicitCast                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_PreAnimMaxLimitPivotOffset_ImplicitCast       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_VariableSet_PreAnimCustomeLimitedPanExtendsY_ImplicitCast (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast                     (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              K2Node_VariableSet_MaxLimitPivotOffset_ImplicitCast              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1                   (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1                   (Edit, ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast  (Edit, ConstParm, ExportObject, Net, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast          (BlueprintVisible, ExportObject, EditFixedSize, Parm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1                   (Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_VariableSet_CustomLimitedPanExtentsY_ImplicitCast_1       (Edit, ExportObject, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)

float USpawnUI_C::UpdateCameraPerTab(bool* CallFunc_Array_IsValidIndex_ReturnValue, double* CallFunc_Ease_ReturnValue, double* CallFunc_Ease_ReturnValue_1, double* CallFunc_Ease_ReturnValue_2, struct FCameraLocationSetting* CallFunc_GetCameraSettingsForTab_ReturnValue, double* CallFunc_Ease_ReturnValue_3, double* CallFunc_Ease_ReturnValue_4, struct FVector2D* CallFunc_MakeVector2D_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double* CallFunc_Ease_ReturnValue_5, double* CallFunc_Ease_ReturnValue_6, struct FCameraLocationSetting* CallFunc_GetCameraSettingsForTab_ReturnValue_1, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_FClamp01_ReturnValue, struct FCameraLocationSetting* CallFunc_GetCameraSettingsForTab_ReturnValue_2, double* CallFunc_Ease_ReturnValue_7, class USceneCaptureComponent2D** CallFunc_GetCaptureComponent_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_FClamp01_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_VEase_ReturnValue, class UMeshComponent* CallFunc_GetPreviewMesh_ReturnValue, double* CallFunc_Ease_ReturnValue_8, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_2, double* CallFunc_Ease_ReturnValue_9, double* CallFunc_Ease_ReturnValue_10, struct FVector2D* CallFunc_MakeVector2D_ReturnValue_3, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_SelectFloat_A_ImplicitCast, float* CallFunc_ResetZoomTo_zoom_ImplicitCast, double* K2Node_VariableSet_PreAnimCustomeLimitedPanExtendsY_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1, float K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast, float K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateCameraPerTab");

	Params::USpawnUI_C_UpdateCameraPerTab_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_FClamp01_ReturnValue = CallFunc_FClamp01_ReturnValue;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue_1 = CallFunc_Multiply_DoubleFloat_ReturnValue_1;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_FClamp01_ReturnValue_1 = CallFunc_FClamp01_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetPreviewMesh_ReturnValue = CallFunc_GetPreviewMesh_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_SelectFloat_A_ImplicitCast = CallFunc_SelectFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast = CallFunc_Subtract_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1 = CallFunc_Subtract_DoubleFloat_A_ImplicitCast_1;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFocalDistance_ImplicitCast;
	Parms.K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast = K2Node_SetFieldsInStruct_DepthOfFieldFstop_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_Ease_ReturnValue != nullptr)
		*CallFunc_Ease_ReturnValue = Parms.CallFunc_Ease_ReturnValue;

	if (CallFunc_Ease_ReturnValue_1 != nullptr)
		*CallFunc_Ease_ReturnValue_1 = Parms.CallFunc_Ease_ReturnValue_1;

	if (CallFunc_Ease_ReturnValue_2 != nullptr)
		*CallFunc_Ease_ReturnValue_2 = Parms.CallFunc_Ease_ReturnValue_2;

	if (CallFunc_GetCameraSettingsForTab_ReturnValue != nullptr)
		*CallFunc_GetCameraSettingsForTab_ReturnValue = std::move(Parms.CallFunc_GetCameraSettingsForTab_ReturnValue);

	if (CallFunc_Ease_ReturnValue_3 != nullptr)
		*CallFunc_Ease_ReturnValue_3 = Parms.CallFunc_Ease_ReturnValue_3;

	if (CallFunc_Ease_ReturnValue_4 != nullptr)
		*CallFunc_Ease_ReturnValue_4 = Parms.CallFunc_Ease_ReturnValue_4;

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	if (CallFunc_Ease_ReturnValue_5 != nullptr)
		*CallFunc_Ease_ReturnValue_5 = Parms.CallFunc_Ease_ReturnValue_5;

	if (CallFunc_Ease_ReturnValue_6 != nullptr)
		*CallFunc_Ease_ReturnValue_6 = Parms.CallFunc_Ease_ReturnValue_6;

	if (CallFunc_GetCameraSettingsForTab_ReturnValue_1 != nullptr)
		*CallFunc_GetCameraSettingsForTab_ReturnValue_1 = std::move(Parms.CallFunc_GetCameraSettingsForTab_ReturnValue_1);

	if (CallFunc_MakeVector2D_ReturnValue_1 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_1 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_1);

	if (CallFunc_GetCameraSettingsForTab_ReturnValue_2 != nullptr)
		*CallFunc_GetCameraSettingsForTab_ReturnValue_2 = std::move(Parms.CallFunc_GetCameraSettingsForTab_ReturnValue_2);

	if (CallFunc_Ease_ReturnValue_7 != nullptr)
		*CallFunc_Ease_ReturnValue_7 = Parms.CallFunc_Ease_ReturnValue_7;

	if (CallFunc_GetCaptureComponent_ReturnValue != nullptr)
		*CallFunc_GetCaptureComponent_ReturnValue = Parms.CallFunc_GetCaptureComponent_ReturnValue;

	if (CallFunc_VEase_ReturnValue != nullptr)
		*CallFunc_VEase_ReturnValue = std::move(Parms.CallFunc_VEase_ReturnValue);

	if (CallFunc_Ease_ReturnValue_8 != nullptr)
		*CallFunc_Ease_ReturnValue_8 = Parms.CallFunc_Ease_ReturnValue_8;

	if (CallFunc_MakeVector2D_ReturnValue_2 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_2 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_2);

	if (CallFunc_Ease_ReturnValue_9 != nullptr)
		*CallFunc_Ease_ReturnValue_9 = Parms.CallFunc_Ease_ReturnValue_9;

	if (CallFunc_Ease_ReturnValue_10 != nullptr)
		*CallFunc_Ease_ReturnValue_10 = Parms.CallFunc_Ease_ReturnValue_10;

	if (CallFunc_MakeVector2D_ReturnValue_3 != nullptr)
		*CallFunc_MakeVector2D_ReturnValue_3 = std::move(Parms.CallFunc_MakeVector2D_ReturnValue_3);

	if (CallFunc_ResetZoomTo_zoom_ImplicitCast != nullptr)
		*CallFunc_ResetZoomTo_zoom_ImplicitCast = Parms.CallFunc_ResetZoomTo_zoom_ImplicitCast;

	if (K2Node_VariableSet_PreAnimCustomeLimitedPanExtendsY_ImplicitCast != nullptr)
		*K2Node_VariableSet_PreAnimCustomeLimitedPanExtendsY_ImplicitCast = Parms.K2Node_VariableSet_PreAnimCustomeLimitedPanExtendsY_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast;

	if (CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 != nullptr)
		*CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1 = Parms.CallFunc_Multiply_DoubleFloat_B_ImplicitCast_1;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.OnGamepadButtonDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// struct FControllerEvent            ControllerEvent                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        LocalKey                                                         (ConstParm, BlueprintVisible, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnGamepadButtonDownEvent_ReturnValue                    (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_ControllerEvent_GetEffectingButton_ReturnValue          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)

struct FKey USpawnUI_C::OnGamepadButtonDownEvent(struct FGeometry* MyGeometry, const struct FControllerEvent& ControllerEvent, bool* CallFunc_EqualEqual_KeyKey_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool* CallFunc_EqualEqual_KeyKey_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnGamepadButtonDownEvent");

	Params::USpawnUI_C_OnGamepadButtonDownEvent_Params Parms{};

	Parms.ControllerEvent = ControllerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (CallFunc_EqualEqual_KeyKey_ReturnValue != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue;

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_SwitchButton_Widget_1 != nullptr)
		*CallFunc_SwitchButton_Widget_1 = Parms.CallFunc_SwitchButton_Widget_1;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_1 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1;

	if (CallFunc_EqualEqual_KeyKey_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_KeyKey_ReturnValue_2 = Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.CombineDynamicMaterialSlidersToFVectors
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

TArray<struct FVector> USpawnUI_C::CombineDynamicMaterialSlidersToFVectors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "CombineDynamicMaterialSlidersToFVectors");

	Params::USpawnUI_C_CombineDynamicMaterialSlidersToFVectors_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.SetupNameValueOnSlider
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USlider*                     Slider                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
// class FText                        InText                                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetValue_InValue_ImplicitCast                           (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

double USpawnUI_C::SetupNameValueOnSlider(class USlider** Slider, class FText* InText, float CallFunc_SetValue_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SetupNameValueOnSlider");

	Params::USpawnUI_C_SetupNameValueOnSlider_Params Parms{};

	Parms.CallFunc_SetValue_InValue_ImplicitCast = CallFunc_SetValue_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Slider != nullptr)
		*Slider = Parms.Slider;

	if (InText != nullptr)
		*InText = Parms.InText;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetIndexSelectedBodyPart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Array_Index                                                      (Edit, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              LocalVar                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// double                             CallFunc_BreakVector2D_X_1                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_2                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_BreakVector2D_Y_2                                       (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)

bool USpawnUI_C::GetIndexSelectedBodyPart(int32* Array_Index, int32* LocalVar, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FVector2D& CallFunc_Array_Get_Item, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetIndexSelectedBodyPart");

	Params::USpawnUI_C_GetIndexSelectedBodyPart_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue_1 = CallFunc_Less_DoubleDouble_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Array_Index != nullptr)
		*Array_Index = Parms.Array_Index;

	if (LocalVar != nullptr)
		*LocalVar = Parms.LocalVar;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.SetupMultiBedButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      AverrageIDSSpan                                                  (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              IdSpawnSelected                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       Bed                                                              (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UDataListButton_ASA_C*       LocalOptionBed                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// class UDataListButton_ASA_C*       CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UDataListButton_ASA_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::SetupMultiBedButtons(int32* IdSpawnSelected, class UBedSpawnWidget_ASA_C* Bed, class UDataListButton_ASA_C** LocalOptionBed, int32 Temp_int_Loop_Counter_Variable, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, int32 Temp_int_Array_Index_Variable, class UDataListButton_ASA_C* CallFunc_Create_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UDataListButton_ASA_C* CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SetupMultiBedButtons");

	Params::USpawnUI_C_SetupMultiBedButtons_Params Parms{};

	Parms.Bed = Bed;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (IdSpawnSelected != nullptr)
		*IdSpawnSelected = Parms.IdSpawnSelected;

	if (LocalOptionBed != nullptr)
		*LocalOptionBed = Parms.LocalOptionBed;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateBedButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             OldTime                                                          (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CustomID                                                         (Edit, ConstParm, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               CanUse                                                           (Edit, BlueprintVisible, OutParm, GlobalConfig)
// class UDataListButton_ASA_C*       BedButton                                                        (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      BedName                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGameState*           CallFunc_GameStateBaseToShooterGameState_ReturnValue             (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_GetNetworkTimeDelta_ReturnValue                         (ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// class FString                      CallFunc_BPFormatAsTime_ReturnValue                              (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsFastTravelTeleport_ReturnValue                        (ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool USpawnUI_C::UpdateBedButton(bool* CanUse, class UDataListButton_ASA_C** BedButton, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue, class UPanelSlot** CallFunc_AddChild_ReturnValue_1, bool CallFunc_IsFastTravelTeleport_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateBedButton");

	Params::USpawnUI_C_UpdateBedButton_Params Parms{};

	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_IsFastTravelTeleport_ReturnValue = CallFunc_IsFastTravelTeleport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanUse != nullptr)
		*CanUse = Parms.CanUse;

	if (BedButton != nullptr)
		*BedButton = Parms.BedButton;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_AddChild_ReturnValue_1 != nullptr)
		*CallFunc_AddChild_ReturnValue_1 = Parms.CallFunc_AddChild_ReturnValue_1;

	if (CallFunc_EqualEqual_TextText_ReturnValue != nullptr)
		*CallFunc_EqualEqual_TextText_ReturnValue = Parms.CallFunc_EqualEqual_TextText_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateSelectedBed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Unselectable                                                     (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UDataListButton_ASA_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)

bool USpawnUI_C::UpdateSelectedBed(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class UDataListButton_ASA_C* CallFunc_Array_Get_Item, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateSelectedBed");

	Params::USpawnUI_C_UpdateSelectedBed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.CalculateAverageBeds
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UBedSpawnWidget_ASA_C*>AddedBeds                                                        (Edit, ExportObject, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               LocalDefault                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               SearchBoxDeActived                                               (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             LocationsArray                                                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              QuantityOfCloseBeds                                              (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsTimeSince_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector                     CallFunc_GetVectorArrayAverage_ReturnValue                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_DistanceSquared2D_ReturnValue                           (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, ExportObject, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::CalculateAverageBeds(TArray<class UBedSpawnWidget_ASA_C*>* AddedBeds, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool* CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32* Temp_int_Variable, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, bool* CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item_1, int32* Temp_int_Variable_1, bool* CallFunc_Greater_IntInt_ReturnValue_1, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item_2, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, double* CallFunc_DistanceSquared2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "CalculateAverageBeds");

	Params::USpawnUI_C_CalculateAverageBeds_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsTimeSince_ReturnValue = CallFunc_IsTimeSince_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetVectorArrayAverage_ReturnValue = CallFunc_GetVectorArrayAverage_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;

	UObject::ProcessEvent(Func, &Parms);

	if (AddedBeds != nullptr)
		*AddedBeds = std::move(Parms.AddedBeds);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_EqualEqual_TextText_ReturnValue != nullptr)
		*CallFunc_EqualEqual_TextText_ReturnValue = Parms.CallFunc_EqualEqual_TextText_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (CallFunc_DistanceSquared2D_ReturnValue != nullptr)
		*CallFunc_DistanceSquared2D_ReturnValue = Parms.CallFunc_DistanceSquared2D_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.SetupUpdateBedSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              SpawnPointID                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             NextAllowedUseTime                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowedUse                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumBeds                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      BedName                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UDataListButton_ASA_C*       LocalBedButton                                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// TArray<struct FVector>             LocationsArray                                                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              QuantityOfCloseBeds                                              (ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CurrentBedPosition                                               (ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       LocalBedSpawnWidget                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_GetIsSpawnPointIDDefaultDestination_ReturnValue         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsFastTravelTeleport_ReturnValue                        (ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UDataListButton_ASA_C*       CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UDataListButton_ASA_C*       CallFunc_Create_ReturnValue_1                                    (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Variable_1                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UDataListButton_ASA_C*       CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_LastIndex_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UBedSpawnWidget_ASA_C*       CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::SetupUpdateBedSpawn(struct FVector* Location, int32 NumBeds, class UBedSpawnWidget_ASA_C* LocalBedSpawnWidget, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32* Temp_int_Variable, bool CallFunc_IsFastTravelTeleport_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UBedSpawnWidget_ASA_C* CallFunc_Create_ReturnValue, class UCanvasPanelSlot** CallFunc_AddChildToCanvas_ReturnValue, int32* CallFunc_Array_LastIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, class UDataListButton_ASA_C* CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UDataListButton_ASA_C* CallFunc_Create_ReturnValue_1, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item_1, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32* Temp_int_Variable_1, class UDataListButton_ASA_C* CallFunc_Array_Get_Item_2, int32* CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, class UBedSpawnWidget_ASA_C* CallFunc_Array_Get_Item_3, bool* CallFunc_Array_IsValidIndex_ReturnValue_1, bool Temp_bool_Variable, class UTexture2D* K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SetupUpdateBedSpawn");

	Params::USpawnUI_C_SetupUpdateBedSpawn_Params Parms{};

	Parms.NumBeds = NumBeds;
	Parms.LocalBedSpawnWidget = LocalBedSpawnWidget;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsFastTravelTeleport_ReturnValue = CallFunc_IsFastTravelTeleport_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_AddChildToCanvas_ReturnValue != nullptr)
		*CallFunc_AddChildToCanvas_ReturnValue = Parms.CallFunc_AddChildToCanvas_ReturnValue;

	if (CallFunc_Array_LastIndex_ReturnValue != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue = Parms.CallFunc_Array_LastIndex_ReturnValue;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (Temp_int_Variable_1 != nullptr)
		*Temp_int_Variable_1 = Parms.Temp_int_Variable_1;

	if (CallFunc_Array_LastIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_LastIndex_ReturnValue_1 = Parms.CallFunc_Array_LastIndex_ReturnValue_1;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (CallFunc_Array_IsValidIndex_ReturnValue_1 != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue_1 = Parms.CallFunc_Array_IsValidIndex_ReturnValue_1;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.SetupUpdateSpawnRegion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              Difficult                                                        (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USpawnRegionWidget_ASA_C*    LocalSpawnRegionWidget                                           (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class USpawnRegionWidget_ASA_C*    CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (Edit, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class USpawnRegionWidget_ASA_C*    CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (Edit, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool USpawnUI_C::SetupUpdateSpawnRegion(struct FVector* Location, int32 Difficult, class USpawnRegionWidget_ASA_C* CallFunc_Create_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, class UCanvasPanelSlot** CallFunc_AddChildToCanvas_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class USpawnRegionWidget_ASA_C* CallFunc_Array_Get_Item, bool* CallFunc_Array_IsValidIndex_ReturnValue, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector2D* CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SetupUpdateSpawnRegion");

	Params::USpawnUI_C_SetupUpdateSpawnRegion_Params Parms{};

	Parms.Difficult = Difficult;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_AddChildToCanvas_ReturnValue != nullptr)
		*CallFunc_AddChildToCanvas_ReturnValue = Parms.CallFunc_AddChildToCanvas_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	if (CallFunc_MakeVector2D_ReturnValue != nullptr)
		*CallFunc_MakeVector2D_ReturnValue = std::move(Parms.CallFunc_MakeVector2D_ReturnValue);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetCanvasLocationForMinimapPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_ReturnValue                          (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_GetMinimapLocation_Coords                               (Edit, ConstParm, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (Edit, BlueprintVisible, Parm, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool USpawnUI_C::GetCanvasLocationForMinimapPoint(struct FVector* Location, struct FVector2D* CallFunc_GetMinimapLocation_ReturnValue, struct FVector2D* CallFunc_GetMinimapLocation_Coords, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetCanvasLocationForMinimapPoint");

	Params::USpawnUI_C_GetCanvasLocationForMinimapPoint_Params Parms{};

	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (CallFunc_GetMinimapLocation_ReturnValue != nullptr)
		*CallFunc_GetMinimapLocation_ReturnValue = std::move(Parms.CallFunc_GetMinimapLocation_ReturnValue);

	if (CallFunc_GetMinimapLocation_Coords != nullptr)
		*CallFunc_GetMinimapLocation_Coords = std::move(Parms.CallFunc_GetMinimapLocation_Coords);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetDifficultRegionString
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FString USpawnUI_C::GetDifficultRegionString(int32* Temp_int_Variable, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetDifficultRegionString");

	Params::USpawnUI_C_GetDifficultRegionString_Params Parms{};

	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.GetRespawnPanelMap
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnMapWidget*             ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USpawnMapWidget* USpawnUI_C::GetRespawnPanelMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "GetRespawnPanelMap");

	Params::USpawnUI_C_GetRespawnPanelMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BP_FinalAdjustPlayerCharacterConfigBeforeSpawn
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPrimalPlayerCharacterConfigStructInPlayerCharacterConfig                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FPrimalPlayerCharacterConfigStructReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPrimalPlayerCharacterConfigStruct USpawnUI_C::BP_FinalAdjustPlayerCharacterConfigBeforeSpawn(const struct FPrimalPlayerCharacterConfigStruct& InPlayerCharacterConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BP_FinalAdjustPlayerCharacterConfigBeforeSpawn");

	Params::USpawnUI_C_BP_FinalAdjustPlayerCharacterConfigBeforeSpawn_Params Parms{};

	Parms.InPlayerCharacterConfig = InPlayerCharacterConfig;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Get or Create Dynamic Material
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    Output_Get                                                       (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UMeshComponent*              CallFunc_GetPreviewMesh_ReturnValue                              (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)

bool USpawnUI_C::Get_or_Create_Dynamic_Material(class UMaterialInstanceDynamic** Output_Get, class UMeshComponent* CallFunc_GetPreviewMesh_ReturnValue, class UMaterialInterface** CallFunc_GetMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Get or Create Dynamic Material");

	Params::USpawnUI_C_Get_or_Create_Dynamic_Material_Params Parms{};

	Parms.CallFunc_GetPreviewMesh_ReturnValue = CallFunc_GetPreviewMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

	if (CallFunc_GetMaterial_ReturnValue != nullptr)
		*CallFunc_GetMaterial_ReturnValue = Parms.CallFunc_GetMaterial_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Shuffle-SliderValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Random_index                                                     (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetOptionCount_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetOptionAtIndex_ReturnValue                            (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool USpawnUI_C::ShuffleMinusSliderValues(int32 CallFunc_GetOptionCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetOptionAtIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Shuffle-SliderValues");

	Params::USpawnUI_C_ShuffleMinusSliderValues_Params Parms{};

	Parms.CallFunc_GetOptionCount_ReturnValue = CallFunc_GetOptionCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetOptionAtIndex_ReturnValue = CallFunc_GetOptionAtIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Settings-UpdateHistory
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReviseHistory_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// struct FS_CC_Settings              S_CC_Settings                                                    (Edit, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)
// class UMaterialInstanceDynamic*    CallFunc_Get_or_Create_Dynamic_Material_Output_Get               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast              (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              CallFunc_SetScalarParameterValue_Value_ImplicitCast_1            (Edit, ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

float USpawnUI_C::SettingsMinusUpdateHistory(class UMaterialInstanceDynamic* CallFunc_Get_or_Create_Dynamic_Material_Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Settings-UpdateHistory");

	Params::USpawnUI_C_SettingsMinusUpdateHistory_Params Parms{};

	Parms.CallFunc_Get_or_Create_Dynamic_Material_Output_Get = CallFunc_Get_or_Create_Dynamic_Material_Output_Get;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)

void USpawnUI_C::OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9(class UClass* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9");

	Params::USpawnUI_C_OnLoaded_3E84B3BE41EA3801C29ED5ABF7BB70A9_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_RandomizeButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

enum class ESelectInfo USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_PlayVoiceDemoButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_2_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_PlayerVoiceSelectorCombobox_K2Node_ComponentBoundEvent_4_OnClosingEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.UpdateVectorParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              R                                                                (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// float                              G                                                                (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// float                              B                                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// float                              A                                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)

float USpawnUI_C::UpdateVectorParameter(class FName* ParameterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateVectorParameter");

	Params::USpawnUI_C_UpdateVectorParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateScalarParameter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ParameterName                                                    (Edit, ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

void USpawnUI_C::UpdateScalarParameter(class FName* ParameterName, float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateScalarParameter");

	Params::USpawnUI_C_UpdateScalarParameter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ParameterName != nullptr)
		*ParameterName = Parms.ParameterName;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function SpawnUI.SpawnUI_C.UpdateBodyPartByType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      A                                                                (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// class FString                      B                                                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config)
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

class FString USpawnUI_C::UpdateBodyPartByType(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateBodyPartByType");

	Params::USpawnUI_C_UpdateBodyPartByType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float USpawnUI_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Tick");

	Params::USpawnUI_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BPSetSelectedSpawnRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SpawnRegionIndex                                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

void USpawnUI_C::BPSetSelectedSpawnRegion(int32 SpawnRegionIndex, struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPSetSelectedSpawnRegion");

	Params::USpawnUI_C_BPSetSelectedSpawnRegion_Params Parms{};

	Parms.SpawnRegionIndex = SpawnRegionIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function SpawnUI.SpawnUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USpawnUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_CloseButton_2_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_ShowBedsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BPCreatedSpawnRegionWidget
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SpawnRegionIndex                                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)
// int32                              Difficult                                                        (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USpawnUI_C::BPCreatedSpawnRegionWidget(int32 SpawnRegionIndex, struct FVector* Location, int32 Difficult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPCreatedSpawnRegionWidget");

	Params::USpawnUI_C_BPCreatedSpawnRegionWidget_Params Parms{};

	Parms.SpawnRegionIndex = SpawnRegionIndex;
	Parms.Difficult = Difficult;

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function SpawnUI.SpawnUI_C.AssignSpawnRegionSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnRegionWidget_ASA_C*    SpawnRegion                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class USpawnRegionWidget_ASA_C* USpawnUI_C::AssignSpawnRegionSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "AssignSpawnRegionSelect");

	Params::USpawnUI_C_AssignSpawnRegionSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Clicked_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class USpawnRegionWidget_ASA_C*    SpawnRegion                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class USpawnRegionWidget_ASA_C* USpawnUI_C::Clicked_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Clicked_Event");

	Params::USpawnUI_C_Clicked_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BPSetupButtonDataForSpawnRegion
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SpawnRegionIndex                                                 (Edit, ExportObject, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FString                      Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// class FString                      SecondText                                                       (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class FString USpawnUI_C::BPSetupButtonDataForSpawnRegion(int32 SpawnRegionIndex, const class FString& SecondText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPSetupButtonDataForSpawnRegion");

	Params::USpawnUI_C_BPSetupButtonDataForSpawnRegion_Params Parms{};

	Parms.SpawnRegionIndex = SpawnRegionIndex;
	Parms.SecondText = SecondText;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Clicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDinoListButtonWidget*       DataList                                                         (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UDinoListButtonWidget* USpawnUI_C::Clicked_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Clicked_Event_0");

	Params::USpawnUI_C_Clicked_Event_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BPSetupBed
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              BedIndex                                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              SpawnPointID                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      BedName                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector                     AtLocation                                                       (Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             NextAllowedUseTime                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bAllowedUse                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              NumBeds                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

bool USpawnUI_C::BPSetupBed(int32 BedIndex, int32 NumBeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPSetupBed");

	Params::USpawnUI_C_BPSetupBed_Params Parms{};

	Parms.BedIndex = BedIndex;
	Parms.NumBeds = NumBeds;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.AssignBedSpawnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBedSpawnWidget_ASA_C*       SpawnRegion                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

class UBedSpawnWidget_ASA_C* USpawnUI_C::AssignBedSpawnSelect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "AssignBedSpawnSelect");

	Params::USpawnUI_C_AssignBedSpawnSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.Clicked_Event_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBedSpawnWidget_ASA_C*       BedSpawn                                                         (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USpawnUI_C::Clicked_Event_1(class UBedSpawnWidget_ASA_C* BedSpawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Clicked_Event_1");

	Params::USpawnUI_C_Clicked_Event_1_Params Parms{};

	Parms.BedSpawn = BedSpawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpawnUI.SpawnUI_C.AssignBedsButtonSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataListButton_ASA_C*       Data                                                             (BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpawnUI_C::AssignBedsButtonSelect(class UDataListButton_ASA_C** Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "AssignBedsButtonSelect");

	Params::USpawnUI_C_AssignBedsButtonSelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = Parms.Data;

}


// Function SpawnUI.SpawnUI_C.Clicked_Event_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDinoListButtonWidget*       DataList                                                         (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UDinoListButtonWidget* USpawnUI_C::Clicked_Event_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "Clicked_Event_2");

	Params::USpawnUI_C_Clicked_Event_2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_MainMinimapUI_ASA_K2Node_ComponentBoundEvent_2_Zoom__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.OnGamepadActiveChangedBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsGamepadActive                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void USpawnUI_C::OnGamepadActiveChangedBP(bool* bIsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnGamepadActiveChangedBP");

	Params::USpawnUI_C_OnGamepadActiveChangedBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsGamepadActive != nullptr)
		*bIsGamepadActive = Parms.bIsGamepadActive;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_FemaleButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_MaleButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void USpawnUI_C::BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_SkinColor_Slider_K2Node_ComponentBoundEvent_14_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void USpawnUI_C::BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_EyeColor_Slider_K2Node_ComponentBoundEvent_15_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void USpawnUI_C::BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_HairColor_Slider_K2Node_ComponentBoundEvent_16_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 USpawnUI_C::BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChangedIndex__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.UpdateCharacterFirstSpawnBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

bool USpawnUI_C::UpdateCharacterFirstSpawnBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateCharacterFirstSpawnBP");

	Params::USpawnUI_C_UpdateCharacterFirstSpawnBP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_CreateNewPlayerButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BPExecutedCommandForPrimalUI
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        CommandName                                                      (Edit, Net, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            ExecParams                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void USpawnUI_C::BPExecutedCommandForPrimalUI(class FName* CommandName, struct FBPNetExecParams* ExecParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPExecutedCommandForPrimalUI");

	Params::USpawnUI_C_BPExecutedCommandForPrimalUI_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CommandName != nullptr)
		*CommandName = Parms.CommandName;

	if (ExecParams != nullptr)
		*ExecParams = std::move(Parms.ExecParams);

}


// Function SpawnUI.SpawnUI_C.SwitchTheButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Next                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig)

bool USpawnUI_C::SwitchTheButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "SwitchTheButton");

	Params::USpawnUI_C_SwitchTheButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BPRemoveBed
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              SpawnPointID                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int32 USpawnUI_C::BPRemoveBed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BPRemoveBed");

	Params::USpawnUI_C_BPRemoveBed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void USpawnUI_C::BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_FacialHairColor_K2Node_ComponentBoundEvent_8_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function SpawnUI.SpawnUI_C.OnGenderChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsFemale                                                         (ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void USpawnUI_C::OnGenderChange(bool IsFemale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnGenderChange");

	Params::USpawnUI_C_OnGenderChange_Params Parms{};

	Parms.IsFemale = IsFemale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_debuglightsbutton_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

void USpawnUI_C::BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_Slider_53_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

void USpawnUI_C::BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_intensitySlider_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function SpawnUI.SpawnUI_C.UpdateHairCameraOffset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USpawnUI_C::UpdateHairCameraOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "UpdateHairCameraOffset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 USpawnUI_C::BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_DataListButtonVariable_HairSylePicker_Widget_ASA_K2Node_ComponentBoundEvent_13_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 USpawnUI_C::BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_FacialHairStyle_Slider_K2Node_ComponentBoundEvent_6_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.AddedToViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void USpawnUI_C::AddedToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "AddedToViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.RemovedFromViewport
// (Event, Public, BlueprintEvent)
// Parameters:

void USpawnUI_C::RemovedFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "RemovedFromViewport");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_TogglePhotoMode_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USpawnUI_C::BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_printcharacter_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 USpawnUI_C::BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_BodyTemplate_Slider_K2Node_ComponentBoundEvent_19_ReturnValue__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SpawnUI.SpawnUI_C.OnResetToDefault
// (Event, Public, BlueprintEvent)
// Parameters:

void USpawnUI_C::OnResetToDefault()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "OnResetToDefault");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnUI.SpawnUI_C.BndEvt__SpawnUI_OverallHeightSlider_K2Node_ComponentBoundEvent_17_OnFloatValueGenericChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                              Value                                                            (ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config)

void USpawnUI_C::BndEvt__SpawnUI_OverallHeightSlider_K2Node_ComponentBoundEvent_17_OnFloatValueGenericChangedEvent__DelegateSignature(float* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "BndEvt__SpawnUI_OverallHeightSlider_K2Node_ComponentBoundEvent_17_OnFloatValueGenericChangedEvent__DelegateSignature");

	Params::USpawnUI_C_BndEvt__SpawnUI_OverallHeightSlider_K2Node_ComponentBoundEvent_17_OnFloatValueGenericChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function SpawnUI.SpawnUI_C.ExecuteUbergraph_SpawnUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_CustomEvent_A                                             (Edit, ConstParm, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_B                                             (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_CustomEvent_Value                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess                                   (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class UMaterialInstanceDynamic*    CallFunc_Get_or_Create_Dynamic_Material_Output_Get               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UMaterialInstanceDynamic*    CallFunc_Get_or_Create_Dynamic_Material_Output_Get_1             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class FName                        K2Node_CustomEvent_ParameterName                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_CustomEvent_Value_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FName                        K2Node_CustomEvent_ParameterName_1                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_CustomEvent_R                                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_CustomEvent_G                                             (Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              K2Node_CustomEvent_B_1                                           (BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              K2Node_CustomEvent_A_1                                           (Edit, ConstParm, Net, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_GetAlignment_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_Event_SpawnRegionIndex_2                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FVector                     K2Node_Event_Location_1                                          (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// int32                              K2Node_Event_SpawnRegionIndex_1                                  (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// struct FVector                     K2Node_Event_Location                                            (Edit, ExportObject, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_Difficult                                           (ConstParm, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// class USpawnRegionWidget_ASA_C*    K2Node_CustomEvent_SpawnRegion_2                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// class USpawnRegionWidget_ASA_C*    K2Node_CustomEvent_SpawnRegion_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// int32                              K2Node_Event_SpawnRegionIndex                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      K2Node_Event_Text                                                (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class FString                      K2Node_Event_SecondText                                          (ConstParm, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UDinoListButtonWidget*       K2Node_CustomEvent_DataList_1                                    (BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (Edit, ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDataListButton_ASA_C*       K2Node_DynamicCast_AsData_List_Button_ASA                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional)
// class UPDA_VoiceCollection_C*      K2Node_DynamicCast_AsPDA_Voice_Collection                        (BlueprintReadOnly, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// int32                              K2Node_Event_BedIndex                                            (ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_SpawnPointID_1                                      (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference, Interp)
// class FString                      K2Node_Event_BedName                                             (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector                     K2Node_Event_AtLocation                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             K2Node_Event_NextAllowedUseTime                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_bAllowedUse                                         (ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_NumBeds                                             (Edit, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetRealBedName_ReturnValue                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       K2Node_CustomEvent_SpawnRegion                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UBedSpawnWidget_ASA_C*       K2Node_CustomEvent_BedSpawn                                      (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UDataListButton_ASA_C*       K2Node_CustomEvent_Data                                          (BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class UDinoListButtonWidget*       K2Node_CustomEvent_DataList                                      (BlueprintVisible, ExportObject, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UDataListButton_ASA_C*       K2Node_DynamicCast_AsData_List_Button_ASA_1                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_Subtract_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UDataListButton_ASA_C*       K2Node_DynamicCast_AsData_List_Button_ASA_2                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_2                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UDataListButton_ASA_C*       K2Node_DynamicCast_AsData_List_Button_ASA_3                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, RepNotify, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_3                          (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, NonTransactional)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, EditorOnly)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ConstParm, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_Event_bIsGamepadActive                                    (Edit, ConstParm, ExportObject, OutParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UWorld*                      CallFunc_K2_GetWorld_ReturnValue                                 (BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class AWorldSettings*              CallFunc_K2_GetWorldSettings_ReturnValue                         (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class APrimalWorldSettings*        K2Node_DynamicCast_AsPrimal_World_Settings                       (ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UMinimapData*                K2Node_DynamicCast_AsMinimap_Data                                (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_3                               (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_2                               (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_1                               (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UDataListButton_ASA_C*       CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// TArray<class UHUDNotificationPanel_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_GetToggledState_ReturnValue                             (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_GetToggledState_ReturnValue_1                           (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// bool                               K2Node_Event_Active                                              (Edit, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (DisableEditOnInstance, SubobjectReference, Interp)
// class APreviewScene_Base_C*        K2Node_DynamicCast_AsPreview_Scene_Base                          (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, EditorOnly)
// class FName                        K2Node_Event_CommandName                                         (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FBPNetExecParams            K2Node_Event_ExecParams                                          (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     K2Node_DynamicCast_AsWidget                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, EditorOnly)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_Event_next                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// class UHUDNotificationPanel_C*     CallFunc_Array_Get_Item                                          (EditFixedSize, ZeroConstructor, Transient, SubobjectReference)
// int32                              K2Node_Event_SpawnPointID                                        (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color                                 (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_3                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class UColorPicker_HairTipColor_ASA_Widget_C*K2Node_DynamicCast_AsColor_Picker_Hair_Tip_Color_ASA_Widget      (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, EditorOnly)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_4                                (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UColorPicker_HairTipColor_ASA_Widget_C*K2Node_DynamicCast_AsColor_Picker_Hair_Tip_Color_ASA_Widget_1    (ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional, EditorOnly)
// class USpawnRegionWidget_ASA_C*    CallFunc_Array_Get_Item_1                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, EditorOnly)
// bool                               CallFunc_IsFastTravelTeleport_ReturnValue                        (ExportObject, EditFixedSize, Parm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, EditFixedSize, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// bool                               K2Node_Event_isFemale                                            (ConstParm, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class APreviewScene_Base_C*        K2Node_DynamicCast_AsPreview_Scene_Base_1                        (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class APreviewScene_Base_C*        K2Node_DynamicCast_AsPreview_Scene_Base_2                        (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NonTransactional, EditorOnly)
// float                              K2Node_ComponentBoundEvent_Value_2                               (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// float                              K2Node_ComponentBoundEvent_Value_1                               (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class APreviewScene_Base_C*        K2Node_DynamicCast_AsPreview_Scene_Base_3                        (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue_1                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp, EditorOnly)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional, EditorOnly)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ConstParm, BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable                                               (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// enum class ESlateVisibility        K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UBinkMediaPlayer*            CallFunc_AssetResolve_ReturnValue                                (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_Play_ReturnValue                                        (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UMaterialInstanceConstant*   CallFunc_AssetResolve_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ConstParm, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_GetToggledState_ReturnValue_2                           (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (Parm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (Edit, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, SubobjectReference, NonTransactional)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp)
// class UPanelWidget*                K2Node_DynamicCast_AsPanel_Widget                                (BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// class UWidget*                     CallFunc_Array_Get_Item_3                                        (EditFixedSize, ZeroConstructor, Transient, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// struct FCameraLocationSetting      K2Node_Select_Default_1                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector_X                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Y                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector_Z                                           (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// float                              CallFunc_BPFLerpFast_ReturnValue                                 (Edit, ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, SubobjectReference, Interp)
// float                              CallFunc_BPFLerpFast_ReturnValue_1                               (Edit, ConstParm, BlueprintReadOnly, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_2                                             (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_Select_Default_2                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams_2                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, NonTransactional)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UClass*                      Temp_class_Variable                                              (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue_1                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UPrimalUserWidget*           K2Node_DynamicCast_AsPrimal_User_Widget_1                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, Interp, NoDestructor)
// class UMinimapData*                K2Node_DynamicCast_AsMinimap_Data_1                              (Edit, ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, NonTransactional)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        CallFunc_Format_ReturnValue_1                                    (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// float                              K2Node_ComponentBoundEvent_Value                                 (ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue_2                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue_3                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller_1                 (Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference, NonTransactional, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference, RepNotify, Interp)
// double                             CallFunc_MapRangeClamped_Value_ImplicitCast                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Multiply_DoubleFloat_A_ImplicitCast                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_Add_DoubleFloat_B_ImplicitCast                          (Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_FTrunc_A_ImplicitCast                                   (Edit, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InPercent_ImplicitCast                      (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InPercent_ImplicitCast_1                    (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPFLerpFast_InMin_ImplicitCast                          (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InMin_ImplicitCast_1                        (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_BPFLerpFast_InMax_ImplicitCast                          (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// double                             CallFunc_Vector_Set_Z_ImplicitCast                               (Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              CallFunc_BPFLerpFast_InMax_ImplicitCast_1                        (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_Vector_Set_Z_ImplicitCast_1                             (Net, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference, Interp)

float USpawnUI_C::ExecuteUbergraph_SpawnUI(int32* EntryPoint, const class FString& K2Node_CustomEvent_B, float K2Node_CustomEvent_Value, bool K2Node_SwitchString_CmpSuccess, bool K2Node_SwitchString_CmpSuccess_1, class UMaterialInstanceDynamic* CallFunc_Get_or_Create_Dynamic_Material_Output_Get, class UMaterialInstanceDynamic* CallFunc_Get_or_Create_Dynamic_Material_Output_Get_1, class FName K2Node_CustomEvent_ParameterName, float K2Node_CustomEvent_Value_1, class FName K2Node_CustomEvent_ParameterName_1, float* K2Node_CustomEvent_G, float K2Node_CustomEvent_B_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_GetSelectedIndex_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 K2Node_Event_SpawnRegionIndex_2, struct FVector* K2Node_Event_Location_1, int32 K2Node_Event_SpawnRegionIndex_1, struct FVector* K2Node_Event_Location, int32* K2Node_Event_Difficult, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_1, int32 K2Node_Event_SpawnRegionIndex, class FString* K2Node_Event_Text, class UDinoListButtonWidget** K2Node_CustomEvent_DataList_1, int32* CallFunc_GetChildIndex_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue, class UDataListButton_ASA_C** K2Node_DynamicCast_AsData_List_Button_ASA, bool* K2Node_DynamicCast_bSuccess, class UPDA_VoiceCollection_C* K2Node_DynamicCast_AsPDA_Voice_Collection, bool* K2Node_DynamicCast_bSuccess_1, bool* CallFunc_Array_IsValidIndex_ReturnValue, int32* K2Node_Event_SpawnPointID_1, class FString* K2Node_Event_BedName, struct FVector* K2Node_Event_AtLocation, double* K2Node_Event_NextAllowedUseTime, bool* K2Node_Event_bAllowedUse, int32* K2Node_Event_NumBeds, class UBedSpawnWidget_ASA_C** K2Node_CustomEvent_BedSpawn, bool* CallFunc_Greater_IntInt_ReturnValue, class UDinoListButtonWidget** K2Node_CustomEvent_DataList, class UDataListButton_ASA_C** K2Node_DynamicCast_AsData_List_Button_ASA_1, bool* K2Node_DynamicCast_bSuccess_2, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue, class UWidget** CallFunc_GetChildAt_ReturnValue_1, class UDataListButton_ASA_C** K2Node_DynamicCast_AsData_List_Button_ASA_2, bool* K2Node_DynamicCast_bSuccess_3, class UWidget** CallFunc_GetChildAt_ReturnValue_2, class UDataListButton_ASA_C** K2Node_DynamicCast_AsData_List_Button_ASA_3, bool* K2Node_DynamicCast_bSuccess_4, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_2, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue_3, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue_1, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue, const class FString& K2Node_ComponentBoundEvent_SelectedItem, enum class ESelectInfo* K2Node_ComponentBoundEvent_SelectionType, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool* K2Node_Event_bIsGamepadActive, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWorld** CallFunc_K2_GetWorld_ReturnValue, class AWorldSettings** CallFunc_K2_GetWorldSettings_ReturnValue, class APrimalWorldSettings* K2Node_DynamicCast_AsPrimal_World_Settings, bool* K2Node_DynamicCast_bSuccess_6, bool* CallFunc_IsValidSoftClassReference_ReturnValue, bool* K2Node_DynamicCast_bSuccess_7, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue, class UDataListButton_ASA_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, bool* CallFunc_GetToggledState_ReturnValue, int32* K2Node_ComponentBoundEvent_Index_3, bool* CallFunc_GetToggledState_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool* K2Node_DynamicCast_bSuccess_8, class FName K2Node_Event_CommandName, const struct FBPNetExecParams& K2Node_Event_ExecParams, bool* K2Node_DynamicCast_bSuccess_9, int32 Temp_int_Array_Index_Variable_2, bool* K2Node_Event_next, class UHUDNotificationPanel_C* CallFunc_Array_Get_Item, int32* K2Node_Event_SpawnPointID, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_GetChildAt_ReturnValue_3, bool* K2Node_DynamicCast_bSuccess_10, class UWidget** CallFunc_GetChildAt_ReturnValue_4, bool* K2Node_DynamicCast_bSuccess_11, class USpawnRegionWidget_ASA_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsFastTravelTeleport_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, bool K2Node_Event_isFemale, bool* K2Node_DynamicCast_bSuccess_12, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_1, bool* K2Node_DynamicCast_bSuccess_13, float K2Node_ComponentBoundEvent_Value_2, float K2Node_ComponentBoundEvent_Value_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool* K2Node_DynamicCast_bSuccess_14, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_1, class FText* K2Node_ComponentBoundEvent_ReturnValue_2, int32* K2Node_ComponentBoundEvent_Index_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_1, int32* K2Node_ComponentBoundEvent_Index_1, class UClass* K2Node_CustomEvent_Loaded, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool* CallFunc_GetToggledState_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class FText* K2Node_ComponentBoundEvent_ReturnValue, int32* K2Node_ComponentBoundEvent_Index, bool* CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UWidget* CallFunc_Array_Get_Item_2, bool* K2Node_DynamicCast_bSuccess_15, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_3, bool* K2Node_DynamicCast_bSuccess_16, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FCameraLocationSetting& K2Node_Select_Default_1, double CallFunc_SelectFloat_ReturnValue, float CallFunc_BPFLerpFast_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, float CallFunc_BPFLerpFast_ReturnValue_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams_2, TArray<class UWidget*>* CallFunc_GetAllChildren_ReturnValue_2, class UClass* Temp_class_Variable, bool* K2Node_DynamicCast_bSuccess_17, bool* K2Node_DynamicCast_bSuccess_18, struct FFormatArgumentData* K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>* K2Node_MakeArray_Array_1, float K2Node_ComponentBoundEvent_Value, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_2, class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller_1, bool* K2Node_DynamicCast_bSuccess_19, double CallFunc_MapRangeClamped_Value_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float* CallFunc_MakeRotator_Yaw_ImplicitCast, double CallFunc_FTrunc_A_ImplicitCast, float* CallFunc_BPFLerpFast_InMax_ImplicitCast, double CallFunc_Vector_Set_Z_ImplicitCast, float* CallFunc_BPFLerpFast_InMax_ImplicitCast_1, double CallFunc_Vector_Set_Z_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnUI_C", "ExecuteUbergraph_SpawnUI");

	Params::USpawnUI_C_ExecuteUbergraph_SpawnUI_Params Parms{};

	Parms.K2Node_CustomEvent_B = K2Node_CustomEvent_B;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_Get_or_Create_Dynamic_Material_Output_Get = CallFunc_Get_or_Create_Dynamic_Material_Output_Get;
	Parms.CallFunc_Get_or_Create_Dynamic_Material_Output_Get_1 = CallFunc_Get_or_Create_Dynamic_Material_Output_Get_1;
	Parms.K2Node_CustomEvent_ParameterName = K2Node_CustomEvent_ParameterName;
	Parms.K2Node_CustomEvent_Value_1 = K2Node_CustomEvent_Value_1;
	Parms.K2Node_CustomEvent_ParameterName_1 = K2Node_CustomEvent_ParameterName_1;
	Parms.K2Node_CustomEvent_B_1 = K2Node_CustomEvent_B_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSelectedIndex_ReturnValue = CallFunc_GetSelectedIndex_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetAlignment_ReturnValue = CallFunc_GetAlignment_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Event_SpawnRegionIndex_2 = K2Node_Event_SpawnRegionIndex_2;
	Parms.K2Node_Event_SpawnRegionIndex_1 = K2Node_Event_SpawnRegionIndex_1;
	Parms.K2Node_Event_SpawnRegionIndex = K2Node_Event_SpawnRegionIndex;
	Parms.K2Node_DynamicCast_AsPDA_Voice_Collection = K2Node_DynamicCast_AsPDA_Voice_Collection;
	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_SelectedItem = K2Node_ComponentBoundEvent_SelectedItem;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimal_World_Settings = K2Node_DynamicCast_AsPrimal_World_Settings;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.K2Node_Event_CommandName = K2Node_Event_CommandName;
	Parms.K2Node_Event_ExecParams = K2Node_Event_ExecParams;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsFastTravelTeleport_ReturnValue = CallFunc_IsFastTravelTeleport_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.K2Node_Event_isFemale = K2Node_Event_isFemale;
	Parms.K2Node_ComponentBoundEvent_Value_2 = K2Node_ComponentBoundEvent_Value_2;
	Parms.K2Node_ComponentBoundEvent_Value_1 = K2Node_ComponentBoundEvent_Value_1;
	Parms.CallFunc_Multiply_DoubleFloat_ReturnValue = CallFunc_Multiply_DoubleFloat_ReturnValue;
	Parms.CallFunc_BPGetGameData_ReturnValue_1 = CallFunc_BPGetGameData_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_BPFLerpFast_ReturnValue = CallFunc_BPFLerpFast_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.CallFunc_BPFLerpFast_ReturnValue_1 = CallFunc_BPFLerpFast_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_BPGetGameData_ReturnValue_2 = CallFunc_BPGetGameData_ReturnValue_2;
	Parms.CallFunc_BPGetGameData_ReturnValue_3 = CallFunc_BPGetGameData_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_MapRangeClamped_Value_ImplicitCast = CallFunc_MapRangeClamped_Value_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleFloat_A_ImplicitCast = CallFunc_Multiply_DoubleFloat_A_ImplicitCast;
	Parms.CallFunc_FTrunc_A_ImplicitCast = CallFunc_FTrunc_A_ImplicitCast;
	Parms.CallFunc_Vector_Set_Z_ImplicitCast = CallFunc_Vector_Set_Z_ImplicitCast;
	Parms.CallFunc_Vector_Set_Z_ImplicitCast_1 = CallFunc_Vector_Set_Z_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_CustomEvent_G != nullptr)
		*K2Node_CustomEvent_G = Parms.K2Node_CustomEvent_G;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	if (K2Node_Event_Location_1 != nullptr)
		*K2Node_Event_Location_1 = std::move(Parms.K2Node_Event_Location_1);

	if (K2Node_Event_Location != nullptr)
		*K2Node_Event_Location = std::move(Parms.K2Node_Event_Location);

	if (K2Node_Event_Difficult != nullptr)
		*K2Node_Event_Difficult = Parms.K2Node_Event_Difficult;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_1 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_1 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1;

	if (K2Node_Event_Text != nullptr)
		*K2Node_Event_Text = std::move(Parms.K2Node_Event_Text);

	if (K2Node_CustomEvent_DataList_1 != nullptr)
		*K2Node_CustomEvent_DataList_1 = Parms.K2Node_CustomEvent_DataList_1;

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_AsData_List_Button_ASA != nullptr)
		*K2Node_DynamicCast_AsData_List_Button_ASA = Parms.K2Node_DynamicCast_AsData_List_Button_ASA;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (K2Node_DynamicCast_bSuccess_1 != nullptr)
		*K2Node_DynamicCast_bSuccess_1 = Parms.K2Node_DynamicCast_bSuccess_1;

	if (CallFunc_Array_IsValidIndex_ReturnValue != nullptr)
		*CallFunc_Array_IsValidIndex_ReturnValue = Parms.CallFunc_Array_IsValidIndex_ReturnValue;

	if (K2Node_Event_SpawnPointID_1 != nullptr)
		*K2Node_Event_SpawnPointID_1 = Parms.K2Node_Event_SpawnPointID_1;

	if (K2Node_Event_BedName != nullptr)
		*K2Node_Event_BedName = std::move(Parms.K2Node_Event_BedName);

	if (K2Node_Event_AtLocation != nullptr)
		*K2Node_Event_AtLocation = std::move(Parms.K2Node_Event_AtLocation);

	if (K2Node_Event_NextAllowedUseTime != nullptr)
		*K2Node_Event_NextAllowedUseTime = Parms.K2Node_Event_NextAllowedUseTime;

	if (K2Node_Event_bAllowedUse != nullptr)
		*K2Node_Event_bAllowedUse = Parms.K2Node_Event_bAllowedUse;

	if (K2Node_Event_NumBeds != nullptr)
		*K2Node_Event_NumBeds = Parms.K2Node_Event_NumBeds;

	if (K2Node_CustomEvent_BedSpawn != nullptr)
		*K2Node_CustomEvent_BedSpawn = Parms.K2Node_CustomEvent_BedSpawn;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	if (K2Node_CustomEvent_DataList != nullptr)
		*K2Node_CustomEvent_DataList = Parms.K2Node_CustomEvent_DataList;

	if (K2Node_DynamicCast_AsData_List_Button_ASA_1 != nullptr)
		*K2Node_DynamicCast_AsData_List_Button_ASA_1 = Parms.K2Node_DynamicCast_AsData_List_Button_ASA_1;

	if (K2Node_DynamicCast_bSuccess_2 != nullptr)
		*K2Node_DynamicCast_bSuccess_2 = Parms.K2Node_DynamicCast_bSuccess_2;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	if (CallFunc_GetChildAt_ReturnValue_1 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_1 = Parms.CallFunc_GetChildAt_ReturnValue_1;

	if (K2Node_DynamicCast_AsData_List_Button_ASA_2 != nullptr)
		*K2Node_DynamicCast_AsData_List_Button_ASA_2 = Parms.K2Node_DynamicCast_AsData_List_Button_ASA_2;

	if (K2Node_DynamicCast_bSuccess_3 != nullptr)
		*K2Node_DynamicCast_bSuccess_3 = Parms.K2Node_DynamicCast_bSuccess_3;

	if (CallFunc_GetChildAt_ReturnValue_2 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_2 = Parms.CallFunc_GetChildAt_ReturnValue_2;

	if (K2Node_DynamicCast_AsData_List_Button_ASA_3 != nullptr)
		*K2Node_DynamicCast_AsData_List_Button_ASA_3 = Parms.K2Node_DynamicCast_AsData_List_Button_ASA_3;

	if (K2Node_DynamicCast_bSuccess_4 != nullptr)
		*K2Node_DynamicCast_bSuccess_4 = Parms.K2Node_DynamicCast_bSuccess_4;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_2 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_2 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2;

	if (CallFunc_SlotAsCanvasSlot_ReturnValue_3 != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue_3 = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_3;

	if (CallFunc_GetVisibility_ReturnValue_1 != nullptr)
		*CallFunc_GetVisibility_ReturnValue_1 = Parms.CallFunc_GetVisibility_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_SelectionType != nullptr)
		*K2Node_ComponentBoundEvent_SelectionType = Parms.K2Node_ComponentBoundEvent_SelectionType;

	if (K2Node_Event_bIsGamepadActive != nullptr)
		*K2Node_Event_bIsGamepadActive = Parms.K2Node_Event_bIsGamepadActive;

	if (K2Node_DynamicCast_AsShooter_Player_Controller != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller = Parms.K2Node_DynamicCast_AsShooter_Player_Controller;

	if (K2Node_DynamicCast_bSuccess_5 != nullptr)
		*K2Node_DynamicCast_bSuccess_5 = Parms.K2Node_DynamicCast_bSuccess_5;

	if (CallFunc_K2_GetWorld_ReturnValue != nullptr)
		*CallFunc_K2_GetWorld_ReturnValue = Parms.CallFunc_K2_GetWorld_ReturnValue;

	if (CallFunc_K2_GetWorldSettings_ReturnValue != nullptr)
		*CallFunc_K2_GetWorldSettings_ReturnValue = Parms.CallFunc_K2_GetWorldSettings_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_6 != nullptr)
		*K2Node_DynamicCast_bSuccess_6 = Parms.K2Node_DynamicCast_bSuccess_6;

	if (CallFunc_IsValidSoftClassReference_ReturnValue != nullptr)
		*CallFunc_IsValidSoftClassReference_ReturnValue = Parms.CallFunc_IsValidSoftClassReference_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_7 != nullptr)
		*K2Node_DynamicCast_bSuccess_7 = Parms.K2Node_DynamicCast_bSuccess_7;

	if (K2Node_MakeStruct_FormatArgumentData != nullptr)
		*K2Node_MakeStruct_FormatArgumentData = std::move(Parms.K2Node_MakeStruct_FormatArgumentData);

	if (K2Node_MakeArray_Array != nullptr)
		*K2Node_MakeArray_Array = std::move(Parms.K2Node_MakeArray_Array);

	if (K2Node_MakeStruct_BPNetExecParams != nullptr)
		*K2Node_MakeStruct_BPNetExecParams = std::move(Parms.K2Node_MakeStruct_BPNetExecParams);

	if (CallFunc_GetAllChildren_ReturnValue != nullptr)
		*CallFunc_GetAllChildren_ReturnValue = std::move(Parms.CallFunc_GetAllChildren_ReturnValue);

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_GetToggledState_ReturnValue != nullptr)
		*CallFunc_GetToggledState_ReturnValue = Parms.CallFunc_GetToggledState_ReturnValue;

	if (K2Node_ComponentBoundEvent_Index_3 != nullptr)
		*K2Node_ComponentBoundEvent_Index_3 = Parms.K2Node_ComponentBoundEvent_Index_3;

	if (CallFunc_GetToggledState_ReturnValue_1 != nullptr)
		*CallFunc_GetToggledState_ReturnValue_1 = Parms.CallFunc_GetToggledState_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess_8 != nullptr)
		*K2Node_DynamicCast_bSuccess_8 = Parms.K2Node_DynamicCast_bSuccess_8;

	if (K2Node_DynamicCast_bSuccess_9 != nullptr)
		*K2Node_DynamicCast_bSuccess_9 = Parms.K2Node_DynamicCast_bSuccess_9;

	if (K2Node_Event_next != nullptr)
		*K2Node_Event_next = Parms.K2Node_Event_next;

	if (K2Node_Event_SpawnPointID != nullptr)
		*K2Node_Event_SpawnPointID = Parms.K2Node_Event_SpawnPointID;

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_GetChildAt_ReturnValue_3 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_3 = Parms.CallFunc_GetChildAt_ReturnValue_3;

	if (K2Node_DynamicCast_bSuccess_10 != nullptr)
		*K2Node_DynamicCast_bSuccess_10 = Parms.K2Node_DynamicCast_bSuccess_10;

	if (CallFunc_GetChildAt_ReturnValue_4 != nullptr)
		*CallFunc_GetChildAt_ReturnValue_4 = Parms.CallFunc_GetChildAt_ReturnValue_4;

	if (K2Node_DynamicCast_bSuccess_11 != nullptr)
		*K2Node_DynamicCast_bSuccess_11 = Parms.K2Node_DynamicCast_bSuccess_11;

	if (K2Node_DynamicCast_bSuccess_12 != nullptr)
		*K2Node_DynamicCast_bSuccess_12 = Parms.K2Node_DynamicCast_bSuccess_12;

	if (K2Node_MakeStruct_BPNetExecParams_1 != nullptr)
		*K2Node_MakeStruct_BPNetExecParams_1 = std::move(Parms.K2Node_MakeStruct_BPNetExecParams_1);

	if (K2Node_DynamicCast_bSuccess_13 != nullptr)
		*K2Node_DynamicCast_bSuccess_13 = Parms.K2Node_DynamicCast_bSuccess_13;

	if (K2Node_DynamicCast_bSuccess_14 != nullptr)
		*K2Node_DynamicCast_bSuccess_14 = Parms.K2Node_DynamicCast_bSuccess_14;

	if (K2Node_ComponentBoundEvent_ReturnValue_2 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_2 = Parms.K2Node_ComponentBoundEvent_ReturnValue_2;

	if (K2Node_ComponentBoundEvent_Index_2 != nullptr)
		*K2Node_ComponentBoundEvent_Index_2 = Parms.K2Node_ComponentBoundEvent_Index_2;

	if (K2Node_ComponentBoundEvent_ReturnValue_1 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_1 = Parms.K2Node_ComponentBoundEvent_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_Index_1 != nullptr)
		*K2Node_ComponentBoundEvent_Index_1 = Parms.K2Node_ComponentBoundEvent_Index_1;

	if (CallFunc_GetToggledState_ReturnValue_2 != nullptr)
		*CallFunc_GetToggledState_ReturnValue_2 = Parms.CallFunc_GetToggledState_ReturnValue_2;

	if (K2Node_ComponentBoundEvent_ReturnValue != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue = Parms.K2Node_ComponentBoundEvent_ReturnValue;

	if (K2Node_ComponentBoundEvent_Index != nullptr)
		*K2Node_ComponentBoundEvent_Index = Parms.K2Node_ComponentBoundEvent_Index;

	if (CallFunc_Greater_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue_1 = Parms.CallFunc_Greater_IntInt_ReturnValue_1;

	if (K2Node_DynamicCast_bSuccess_15 != nullptr)
		*K2Node_DynamicCast_bSuccess_15 = Parms.K2Node_DynamicCast_bSuccess_15;

	if (CallFunc_GetAllChildren_ReturnValue_1 != nullptr)
		*CallFunc_GetAllChildren_ReturnValue_1 = std::move(Parms.CallFunc_GetAllChildren_ReturnValue_1);

	if (K2Node_DynamicCast_bSuccess_16 != nullptr)
		*K2Node_DynamicCast_bSuccess_16 = Parms.K2Node_DynamicCast_bSuccess_16;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (K2Node_MakeStruct_BPNetExecParams_2 != nullptr)
		*K2Node_MakeStruct_BPNetExecParams_2 = std::move(Parms.K2Node_MakeStruct_BPNetExecParams_2);

	if (CallFunc_GetAllChildren_ReturnValue_2 != nullptr)
		*CallFunc_GetAllChildren_ReturnValue_2 = std::move(Parms.CallFunc_GetAllChildren_ReturnValue_2);

	if (K2Node_DynamicCast_bSuccess_17 != nullptr)
		*K2Node_DynamicCast_bSuccess_17 = Parms.K2Node_DynamicCast_bSuccess_17;

	if (K2Node_DynamicCast_bSuccess_18 != nullptr)
		*K2Node_DynamicCast_bSuccess_18 = Parms.K2Node_DynamicCast_bSuccess_18;

	if (K2Node_MakeStruct_FormatArgumentData_1 != nullptr)
		*K2Node_MakeStruct_FormatArgumentData_1 = std::move(Parms.K2Node_MakeStruct_FormatArgumentData_1);

	if (K2Node_MakeArray_Array_1 != nullptr)
		*K2Node_MakeArray_Array_1 = std::move(Parms.K2Node_MakeArray_Array_1);

	if (K2Node_DynamicCast_AsShooter_Player_Controller_1 != nullptr)
		*K2Node_DynamicCast_AsShooter_Player_Controller_1 = Parms.K2Node_DynamicCast_AsShooter_Player_Controller_1;

	if (K2Node_DynamicCast_bSuccess_19 != nullptr)
		*K2Node_DynamicCast_bSuccess_19 = Parms.K2Node_DynamicCast_bSuccess_19;

	if (CallFunc_MakeRotator_Yaw_ImplicitCast != nullptr)
		*CallFunc_MakeRotator_Yaw_ImplicitCast = Parms.CallFunc_MakeRotator_Yaw_ImplicitCast;

	if (CallFunc_BPFLerpFast_InMax_ImplicitCast != nullptr)
		*CallFunc_BPFLerpFast_InMax_ImplicitCast = Parms.CallFunc_BPFLerpFast_InMax_ImplicitCast;

	if (CallFunc_BPFLerpFast_InMax_ImplicitCast_1 != nullptr)
		*CallFunc_BPFLerpFast_InMax_ImplicitCast_1 = Parms.CallFunc_BPFLerpFast_InMax_ImplicitCast_1;

	return Parms.ReturnValue;

}

}


