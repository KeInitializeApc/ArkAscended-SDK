#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C
// (None)

class UClass* UDataListButtonHairLength_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonHairLength_Widget_ASA_C");

	return Clss;
}


// DataListButtonHairLength_Widget_ASA_C DataListButtonHairLength_Widget_ASA.Default__DataListButtonHairLength_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonHairLength_Widget_ASA_C* UDataListButtonHairLength_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonHairLength_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonHairLength_Widget_ASA_C*>(UDataListButtonHairLength_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExtraSetupWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalUserWidget*           UserWidget                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              CallFunc_GetQuantityMeshes_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class USliderClamp_Widget_C*       K2Node_DynamicCast_AsSlider_Clamp_Widget                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)

class USliderClamp_Widget_C* UDataListButtonHairLength_Widget_ASA_C::ExtraSetupWidget(class UPrimalUserWidget* UserWidget, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonHairLength_Widget_ASA_C", "ExtraSetupWidget");

	Params::UDataListButtonHairLength_Widget_ASA_C_ExtraSetupWidget_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.GetQuantityMeshes
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// TArray<struct FHairStyleDefinition>DefinitionsLocal                                                 (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// int32                              CallFunc_SelectInt_ReturnValue                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

int32 UDataListButtonHairLength_Widget_ASA_C::GetQuantityMeshes(class UPrimalGameData* CallFunc_BPGetGameData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonHairLength_Widget_ASA_C", "GetQuantityMeshes");

	Params::UDataListButtonHairLength_Widget_ASA_C_GetQuantityMeshes_Params Parms{};

	Parms.CallFunc_BPGetGameData_ReturnValue = CallFunc_BPGetGameData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst)
// class FText                        ReturnText                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<struct FHairStyleDefinition>DefinitionsLocal                                                 (ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetQuantityMeshes_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        CallFunc_SetupTextValue_ReturnText                               (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class FText UDataListButtonHairLength_Widget_ASA_C::SetupTextValue(class FText* ReturnText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonHairLength_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonHairLength_Widget_ASA_C_SetupTextValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReturnText != nullptr)
		*ReturnText = Parms.ReturnText;

	return Parms.ReturnValue;

}


// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.RefreshHairData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HairIndex                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               IsFemale                                                         (ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UDataListButtonHairLength_Widget_ASA_C::RefreshHairData(int32 HairIndex, bool IsFemale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonHairLength_Widget_ASA_C", "RefreshHairData");

	Params::UDataListButtonHairLength_Widget_ASA_C_RefreshHairData_Params Parms{};

	Parms.HairIndex = HairIndex;
	Parms.IsFemale = IsFemale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DataListButtonHairLength_Widget_ASA.DataListButtonHairLength_Widget_ASA_C.ExecuteUbergraph_DataListButtonHairLength_Widget_ASA
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// int32                              K2Node_CustomEvent_HairIndex                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_IsFemale                                      (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class USliderClamp_Widget_C*       K2Node_DynamicCast_AsSlider_Clamp_Widget                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// int32                              CallFunc_GetQuantityMeshes_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// class FText                        CallFunc_SetupTextValue_ReturnText                               (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class FText UDataListButtonHairLength_Widget_ASA_C::ExecuteUbergraph_DataListButtonHairLength_Widget_ASA(int32* EntryPoint, class UWidget** CallFunc_GetChildAt_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonHairLength_Widget_ASA_C", "ExecuteUbergraph_DataListButtonHairLength_Widget_ASA");

	Params::UDataListButtonHairLength_Widget_ASA_C_ExecuteUbergraph_DataListButtonHairLength_Widget_ASA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}

}


