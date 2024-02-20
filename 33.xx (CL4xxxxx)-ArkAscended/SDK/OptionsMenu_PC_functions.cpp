#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass OptionsMenu_PC.OptionsMenu_C
// (None)

class UClass* UOptionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptionsMenu_C");

	return Clss;
}


// OptionsMenu_C OptionsMenu_PC.Default__OptionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOptionsMenu_C* UOptionsMenu_C::GetDefaultObj()
{
	static class UOptionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptionsMenu_C*>(UOptionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UOptionsMenu_C::Get_ChangesText_1_Visibility(enum class ESlateVisibility ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ChangesText_1_Visibility");

	Params::UOptionsMenu_C_Get_ChangesText_1_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ChangesText_1_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOptionsMenu_C::Get_ChangesText_1_bIsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ChangesText_1_bIsEnabled");

	Params::UOptionsMenu_C_Get_ChangesText_1_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetOptions_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UOptionsMenu_C::Get_ResetOptions_Visibility(enum class ESlateVisibility ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetOptions_Visibility");

	Params::UOptionsMenu_C_Get_ResetOptions_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetActiveWidgetIndex_ReturnValue_1 != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue_1 = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetGraphics_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UOptionsMenu_C::Get_ResetGraphics_Visibility(enum class ESlateVisibility ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetGraphics_Visibility");

	Params::UOptionsMenu_C_Get_ResetGraphics_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetAudio_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_ResetAudio_Visibility(enum class ESlateVisibility ReturnValue, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetAudio_Visibility");

	Params::UOptionsMenu_C_Get_ResetAudio_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResetKeybinding_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_ResetKeybinding_Visibility(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResetKeybinding_Visibility");

	Params::UOptionsMenu_C_Get_ResetKeybinding_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_RtxTooltipRoot_Visibility
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (Edit, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_RtxTooltipRoot_Visibility(enum class ESlateVisibility ReturnValue, class FText CallFunc_GetText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_RtxTooltipRoot_Visibility");

	Params::UOptionsMenu_C_Get_RtxTooltipRoot_Visibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateDLSSFeatures_Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNoErrors                                                        (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FText                        ReflexText                                                       (Edit, ConstParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FText                        SuperResolutionText                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class FText                        FrameGenerationText                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// enum class EUStreamlineFeatureSupportCallFunc_QueryReflexSupport_ReturnValue                          (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class EUDLSSSupport           CallFunc_QueryDLSSSupport_ReturnValue                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// enum class EUStreamlineFeatureSupportCallFunc_QueryDLSSGSupport_ReturnValue                           (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetNewlineCharacter_ReturnValue                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class FText                        CallFunc_Format_ReturnValue                                      (ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// enum class EUStreamlineFeatureSupportCallFunc_QueryReflexSupport_ReturnValue_1                        (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class EUDLSSSupport           CallFunc_QueryDLSSSupport_ReturnValue_1                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, Interp)
// enum class EUStreamlineFeatureSupportCallFunc_QueryDLSSGSupport_ReturnValue_1                         (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, Transient, SubobjectReference, RepNotify, Interp)

bool UOptionsMenu_C::UpdateDLSSFeatures_Status(bool* bNoErrors, class FText ReflexText, class FText SuperResolutionText, enum class EUStreamlineFeatureSupport CallFunc_QueryReflexSupport_ReturnValue, enum class EUDLSSSupport* CallFunc_QueryDLSSSupport_ReturnValue, const class FString& CallFunc_GetNewlineCharacter_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Format_ReturnValue, enum class EUStreamlineFeatureSupport CallFunc_QueryReflexSupport_ReturnValue_1, enum class EUDLSSSupport* CallFunc_QueryDLSSSupport_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateDLSSFeatures_Status");

	Params::UOptionsMenu_C_UpdateDLSSFeatures_Status_Params Parms{};

	Parms.ReflexText = ReflexText;
	Parms.SuperResolutionText = SuperResolutionText;
	Parms.CallFunc_QueryReflexSupport_ReturnValue = CallFunc_QueryReflexSupport_ReturnValue;
	Parms.CallFunc_GetNewlineCharacter_ReturnValue = CallFunc_GetNewlineCharacter_ReturnValue;
	Parms.CallFunc_QueryReflexSupport_ReturnValue_1 = CallFunc_QueryReflexSupport_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bNoErrors != nullptr)
		*bNoErrors = Parms.bNoErrors;

	if (CallFunc_QueryDLSSSupport_ReturnValue != nullptr)
		*CallFunc_QueryDLSSSupport_ReturnValue = Parms.CallFunc_QueryDLSSSupport_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Format_ReturnValue != nullptr)
		*CallFunc_Format_ReturnValue = Parms.CallFunc_Format_ReturnValue;

	if (CallFunc_QueryDLSSSupport_ReturnValue_1 != nullptr)
		*CallFunc_QueryDLSSSupport_ReturnValue_1 = Parms.CallFunc_QueryDLSSSupport_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_AntiAlias_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_AntiAlias_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_AntiAlias_bIsEnabled");

	Params::UOptionsMenu_C_Get_AntiAlias_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ResolutionScaleSlider_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_ResolutionScaleSlider_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool* CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ResolutionScaleSlider_bIsEnabled");

	Params::UOptionsMenu_C_Get_ResolutionScaleSlider_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	if (CallFunc_GreaterEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_GreaterEqual_IntInt_ReturnValue = Parms.CallFunc_GreaterEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_SuperResolution_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsDLSSSupported_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UOptionsMenu_C::Get_SuperResolution_bIsEnabled(bool ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_SuperResolution_bIsEnabled");

	Params::UOptionsMenu_C_Get_SuperResolution_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaReflexLowLatency_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsStreamlineFeatureSupported_ReturnValue                (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)

bool UOptionsMenu_C::Get_UseNvidiaReflexLowLatency_bIsEnabled(bool ReturnValue, bool* CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseNvidiaReflexLowLatency_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseNvidiaReflexLowLatency_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseFrameGeneration_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue                                (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetBoolValue_ReturnValue_1                              (ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Config, SubobjectReference)
// bool                               CallFunc_IsStreamlineFeatureSupported_ReturnValue                (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)

bool UOptionsMenu_C::Get_UseFrameGeneration_bIsEnabled(bool ReturnValue, bool CallFunc_GetBoolValue_ReturnValue, bool CallFunc_GetBoolValue_ReturnValue_1, bool* CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseFrameGeneration_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseFrameGeneration_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue = CallFunc_GetBoolValue_ReturnValue;
	Parms.CallFunc_GetBoolValue_ReturnValue_1 = CallFunc_GetBoolValue_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetIsEnabled_ReturnValue != nullptr)
		*CallFunc_GetIsEnabled_ReturnValue = Parms.CallFunc_GetIsEnabled_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_UseNvidiaDlss_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// bool                               CallFunc_GetDLSSSupported_ReturnValue                            (Edit, ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::Get_UseNvidiaDlss_bIsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_UseNvidiaDlss_bIsEnabled");

	Params::UOptionsMenu_C_Get_UseNvidiaDlss_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.CanShowNvidiaPanel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsPC_ReturnValue                                        (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsNvidiaGraphicCard_ReturnValue                         (Edit, ConstParm, Parm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::CanShowNvidiaPanel(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "CanShowNvidiaPanel");

	Params::UOptionsMenu_C_CanShowNvidiaPanel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue_1                          (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled(bool ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled");

	Params::UOptionsMenu_C_Get_DisableTPVCameraInterpolationCheckbox_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateChangedValueButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHasChangedAnyValue                                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::UpdateChangedValueButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateChangedValueButton");

	Params::UOptionsMenu_C_UpdateChangedValueButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.OnKeyDownEvent
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyboardEvent                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class UASAUIWidget_HorizontalListSelector_Sub_Style4_C*LocalSubMenu                                                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        LocalKey                                                         (ExportObject, OutParm, EditConst, GlobalConfig, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// struct FEventReply                 CallFunc_OnKeyDownEvent_ReturnValue                              (Edit, BlueprintReadOnly, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget                                     (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class UWidget*                     CallFunc_SwitchButton_Widget_1                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_2                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_3                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue_4                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class UWidget*                     CallFunc_SwitchButton_Widget_2                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class UWidget*                     CallFunc_SwitchButton_Widget_3                                   (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference, NonTransactional)

class UASAUIWidget_HorizontalListSelector_Sub_Style4_C* UOptionsMenu_C::OnKeyDownEvent(const struct FKeyEvent& InKeyboardEvent, const struct FEventReply& ReturnValue, struct FKey* LocalKey, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_OnKeyDownEvent_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, class UWidget** CallFunc_SwitchButton_Widget, class UWidget** CallFunc_SwitchButton_Widget_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, class UWidget** CallFunc_SwitchButton_Widget_2, class UWidget** CallFunc_SwitchButton_Widget_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OnKeyDownEvent");

	Params::UOptionsMenu_C_OnKeyDownEvent_Params Parms{};

	Parms.InKeyboardEvent = InKeyboardEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_OnKeyDownEvent_ReturnValue = CallFunc_OnKeyDownEvent_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_1 = CallFunc_EqualEqual_KeyKey_ReturnValue_1;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_2 = CallFunc_EqualEqual_KeyKey_ReturnValue_2;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_3 = CallFunc_EqualEqual_KeyKey_ReturnValue_3;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue_4 = CallFunc_EqualEqual_KeyKey_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (LocalKey != nullptr)
		*LocalKey = std::move(Parms.LocalKey);

	if (CallFunc_SwitchButton_Widget != nullptr)
		*CallFunc_SwitchButton_Widget = Parms.CallFunc_SwitchButton_Widget;

	if (CallFunc_SwitchButton_Widget_1 != nullptr)
		*CallFunc_SwitchButton_Widget_1 = Parms.CallFunc_SwitchButton_Widget_1;

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_SwitchButton_Widget_2 != nullptr)
		*CallFunc_SwitchButton_Widget_2 = Parms.CallFunc_SwitchButton_Widget_2;

	if (CallFunc_SwitchButton_Widget_3 != nullptr)
		*CallFunc_SwitchButton_Widget_3 = Parms.CallFunc_SwitchButton_Widget_3;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.NotIsNewCameraEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsNewCameraEnabled_ReturnValue                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::NotIsNewCameraEnabled(bool ReturnValue, bool CallFunc_IsNewCameraEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "NotIsNewCameraEnabled");

	Params::UOptionsMenu_C_NotIsNewCameraEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsNewCameraEnabled_ReturnValue = CallFunc_IsNewCameraEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.UpdateGamepadControlsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimalGlobalUIData*         UIDataLocal                                                      (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2D*                  LocalBGImage                                                     (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UPrimalGameData*             CallFunc_BPGetGameData_ReturnValue                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UObject*                     CallFunc_PureClassDefaultObject_ReturnValue                      (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class UPrimalGlobalUIData*         K2Node_DynamicCast_AsPrimal_Global_UIData                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue_1                           (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

bool UOptionsMenu_C::UpdateGamepadControlsTab(class UPrimalGlobalUIData** UIDataLocal, class UTexture2D** LocalBGImage, const class FString& CallFunc_GetPlatformName_ReturnValue, class UObject** CallFunc_PureClassDefaultObject_ReturnValue, const class FString& CallFunc_GetPlatformName_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "UpdateGamepadControlsTab");

	Params::UOptionsMenu_C_UpdateGamepadControlsTab_Params Parms{};

	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_GetPlatformName_ReturnValue_1 = CallFunc_GetPlatformName_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (UIDataLocal != nullptr)
		*UIDataLocal = Parms.UIDataLocal;

	if (LocalBGImage != nullptr)
		*LocalBGImage = Parms.LocalBGImage;

	if (CallFunc_PureClassDefaultObject_ReturnValue != nullptr)
		*CallFunc_PureClassDefaultObject_ReturnValue = Parms.CallFunc_PureClassDefaultObject_ReturnValue;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Get_ForceTPVCameraOffsetCheckbox_bIsEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsNewCameraEnabled_ReturnValue                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UOptionsMenu_C::Get_ForceTPVCameraOffsetCheckbox_bIsEnabled(bool ReturnValue, bool CallFunc_IsNewCameraEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Get_ForceTPVCameraOffsetCheckbox_bIsEnabled");

	Params::UOptionsMenu_C_Get_ForceTPVCameraOffsetCheckbox_bIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_IsNewCameraEnabled_ReturnValue = CallFunc_IsNewCameraEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.IsNewCameraEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              CallFunc_GetSelectedIndex_ReturnValue                            (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, SubobjectReference)

int32 UOptionsMenu_C::IsNewCameraEnabled(bool ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "IsNewCameraEnabled");

	Params::UOptionsMenu_C_IsNewCameraEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__GraphicsQualityComboBox_K2Node_ComponentBoundEvent_11_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ViewDistanceComboBox_K2Node_ComponentBoundEvent_7_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__AntiAliasingComboBox_K2Node_ComponentBoundEvent_13_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__PostProcessingComboBox_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__ShadowsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__TexturesComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ResetCameraLateralOffset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_BackButton_K2Node_ComponentBoundEvent_7_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_8_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_10_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_11_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Header_GridPanel_K2Node_ComponentBoundEvent_12_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_16_OnSelectionChanged_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_17_OnSelectionChanged_1__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_18_OnSelectionChanged_2__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_19_OnSelectionChanged_3__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_MotionBlurCheckbox_K2Node_ComponentBoundEvent_20_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FilmGrainCheckbox_K2Node_ComponentBoundEvent_23_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseDFAOCheckbox_K2Node_ComponentBoundEvent_25_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_SSAOCheckbox_K2Node_ComponentBoundEvent_27_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TrueSkyQualitySlider_K2Node_ComponentBoundEvent_29_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_GroundClutterDensitySlider_K2Node_ComponentBoundEvent_32_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_0_OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_1_OnClosingEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TerrainShadowComboBox_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_K2Node_ComponentBoundEvent_3_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairSizeSlider_K2Node_ComponentBoundEvent_4_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature(class FText ReturnValue, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairOpacitySlider_K2Node_ComponentBoundEvent_5_ReturnValue__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_HDRandOcio_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.ClosedEvent_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ClosedEvent_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ClosedEvent_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_2_K2Node_ComponentBoundEvent_21_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UOptionsMenu_C::BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CrosshairColorSlider_1_K2Node_ComponentBoundEvent_26_ChangedColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function OptionsMenu_PC.OptionsMenu_C.OptionsMenuValueChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::OptionsMenuValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "OptionsMenuValueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_ResolutionsComboBox_K2Node_ComponentBoundEvent_28_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UOptionsMenu_C::BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WidthTextBox_K2Node_ComponentBoundEvent_31_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UOptionsMenu_C::BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_HeightTextBox_K2Node_ComponentBoundEvent_33_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WindowModeComboBox_K2Node_ComponentBoundEvent_34_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_WorldTileBufferComboBox_K2Node_ComponentBoundEvent_35_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapCheckbox_K2Node_ComponentBoundEvent_37_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UOptionsMenu_C::BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FPSCapTextBox_K2Node_ComponentBoundEvent_38_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_K2Node_ComponentBoundEvent_43_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_ClientNetSpeedComboBox_K2Node_ComponentBoundEvent_44_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_TextChatFilterComboBox_K2Node_ComponentBoundEvent_45_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseGamepadAimAssist_K2Node_ComponentBoundEvent_46_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_VoiceChatFilterComboBox_K2Node_ComponentBoundEvent_47_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsChecked                                                       (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

bool UOptionsMenu_C::BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_UseAutoDetectSettingsCheckbox_K2Node_ComponentBoundEvent_48_OnCheckBoxComponentStateChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UOptionsMenu_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "Tick");

	Params::UOptionsMenu_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenu_PC.OptionsMenu_C.ResetOptionsMenuValueChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::ResetOptionsMenuValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ResetOptionsMenuValueChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_AutoDetectSettings_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_CameraModeComboBox_1_K2Node_ComponentBoundEvent_39_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_Submenu_Header_K2Node_ComponentBoundEvent_40_OnSelectionChanged_4__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_SuperResolutionNvidiaCombo_K2Node_ComponentBoundEvent_41_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_RayReconstructionCombo_K2Node_ComponentBoundEvent_42_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_GlobalIlluminationQuality_K2Node_ComponentBoundEvent_50_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_EffectsQuality_K2Node_ComponentBoundEvent_51_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_FoliageQuality_K2Node_ComponentBoundEvent_52_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UOptionsMenu_C::BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature");

	Params::UOptionsMenu_C_BndEvt__OptionsMenu_AdvancedGraphics_K2Node_ComponentBoundEvent_53_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

}


// Function OptionsMenu_PC.OptionsMenu_C.BndEvt__OptionsMenu_HDRandOcioConsole_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UOptionsMenu_C::BndEvt__OptionsMenu_HDRandOcioConsole_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "BndEvt__OptionsMenu_HDRandOcioConsole_K2Node_ComponentBoundEvent_54_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenu_C::CustomEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "CustomEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function OptionsMenu_PC.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_1                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              Temp_int_Array_Index_Variable_2                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_21                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_21                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_20                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_20                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_19                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_19                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_18                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_18                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_17                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_17                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NoDestructor)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_16                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_16                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NoDestructor)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_7                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_6                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_5                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_4                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_3                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_2                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_UseConsoleVideoOptions_ReturnValue                      (BlueprintVisible, ExportObject, Net, Parm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_15                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_15                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NoDestructor)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_2                               (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue_1                         (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
// class FText                        K2Node_ComponentBoundEvent_ReturnValue                           (Edit, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Add_DoubleFloat_ReturnValue                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleFloat_ReturnValue                        (Edit, ConstParm, BlueprintVisible, Net, Parm, OutParm, ReturnParm, SubobjectReference)
// double                             CallFunc_Conv_StringToDouble_ReturnValue_1                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_1                       (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUI*                   CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class UVisualSettings_MainMenuUI_ASA_C*K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_1                     (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPrimalUI*                   CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue_1                           (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable_3                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UPrimalUI*                   CallFunc_Array_Get_Item_1                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue                                       (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_1                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color_1                               (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FLinearColor                K2Node_ComponentBoundEvent_Color                                 (Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_14                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_14                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional, EditorOnly)
// class FText                        K2Node_ComponentBoundEvent_Text_2                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_2                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod_1                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_13                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_13                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_12                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_12                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// bool                               K2Node_ComponentBoundEvent_bIsChecked_1                          (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_11                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_11                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_10                       (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_10                      (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_9                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_9                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_8                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_8                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_7                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_7                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// bool                               K2Node_ComponentBoundEvent_bIsChecked                            (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FBPNetExecParams            K2Node_MakeStruct_BPNetExecParams                                (Edit, ConstParm, ExportObject, DisableEditOnTemplate, Config, SubobjectReference)
// TArray<class UDataListButtonVariable_Widget_ASA_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets_2                     (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_GetPlatformName_ReturnValue_2                           (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue_2                       (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_6                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_6                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              Temp_int_Array_Index_Variable_4                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class UDataListButtonVariable_Widget_ASA_C*CallFunc_Array_Get_Item_2                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CanShowNvidiaPanel_ReturnValue                          (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_5                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_5                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_4                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_4                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_GetPlatformName_ReturnValue_3                           (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, NonTransactional)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_3                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_3                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_2                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_2                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem_1                        (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType_1                       (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      K2Node_ComponentBoundEvent_SelectedItem                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             K2Node_ComponentBoundEvent_SelectionType                         (ConstParm, Parm, OutParm, ReturnParm, EditConst, GlobalConfig, SubobjectReference)
// class UShooterGameUserSettings*    CallFunc_GetUserSettings_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// int32                              CallFunc_GetDLSSModeIndex_ReturnValue                            (Edit, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ConstParm, Net, EditFixedSize, ReturnParm, Transient, Config, SubobjectReference)
// class UPrimalUI*                   CallFunc_Create_ReturnValue_1                                    (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference, Interp)
// class UVisualSettings_MainMenuUI_ASA_C*K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_3                     (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// class UPrimalUI*                   CallFunc_Array_Get_Item_3                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// TArray<class UPrimalUI*>           CallFunc_GetAllWidgetsOfClass_FoundWidgets_4                     (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UPrimalUI*                   CallFunc_Array_Get_Item_4                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_2                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class AShooterPlayerController*    CallFunc_GetPC_ReturnValue_3                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, NonTransactional)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// float                              CallFunc_SetRenderOpacity_InOpacity_ImplicitCast                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, GlobalConfig, SubobjectReference)

float UOptionsMenu_C::ExecuteUbergraph_OptionsMenu(class FText* K2Node_ComponentBoundEvent_ReturnValue_7, int32* K2Node_ComponentBoundEvent_Index_7, class FText* K2Node_ComponentBoundEvent_ReturnValue_6, int32* K2Node_ComponentBoundEvent_Index_6, class FText* K2Node_ComponentBoundEvent_ReturnValue_5, int32* K2Node_ComponentBoundEvent_Index_5, class FText* K2Node_ComponentBoundEvent_ReturnValue_4, int32* K2Node_ComponentBoundEvent_Index_4, class FText* K2Node_ComponentBoundEvent_ReturnValue_3, int32* K2Node_ComponentBoundEvent_Index_3, class FText* K2Node_ComponentBoundEvent_ReturnValue_2, int32* K2Node_ComponentBoundEvent_Index_2, bool CallFunc_UseConsoleVideoOptions_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_2, class FText* K2Node_ComponentBoundEvent_ReturnValue_1, int32* K2Node_ComponentBoundEvent_Index_1, class FString* CallFunc_Conv_TextToString_ReturnValue, double* CallFunc_Conv_StringToDouble_ReturnValue, class FText* K2Node_ComponentBoundEvent_ReturnValue, int32* K2Node_ComponentBoundEvent_Index, class FString* CallFunc_Conv_TextToString_ReturnValue_1, double* CallFunc_Conv_StringToDouble_ReturnValue_1, const class FString& CallFunc_GetPlatformName_ReturnValue, class UVisualSettings_MainMenuUI_ASA_C* K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA, const class FString& CallFunc_GetPlatformName_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue, const struct FLinearColor& K2Node_ComponentBoundEvent_Color_1, bool* CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& K2Node_ComponentBoundEvent_Color, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_2, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, bool* K2Node_ComponentBoundEvent_bIsChecked_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool* K2Node_ComponentBoundEvent_bIsChecked, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, int32* CallFunc_GetActiveWidgetIndex_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, const class FString& CallFunc_GetPlatformName_ReturnValue_2, const class FString& CallFunc_GetPlatformName_ReturnValue_3, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, int32* CallFunc_GetDLSSModeIndex_ReturnValue, class UVisualSettings_MainMenuUI_ASA_C* K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OptionsMenu_C", "ExecuteUbergraph_OptionsMenu");

	Params::UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params Parms{};

	Parms.CallFunc_UseConsoleVideoOptions_ReturnValue = CallFunc_UseConsoleVideoOptions_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Color_2 = K2Node_ComponentBoundEvent_Color_2;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA = K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA;
	Parms.CallFunc_GetPlatformName_ReturnValue_1 = CallFunc_GetPlatformName_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Color_1 = K2Node_ComponentBoundEvent_Color_1;
	Parms.K2Node_ComponentBoundEvent_Color = K2Node_ComponentBoundEvent_Color;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_2 = K2Node_ComponentBoundEvent_CommitMethod_2;
	Parms.K2Node_ComponentBoundEvent_CommitMethod_1 = K2Node_ComponentBoundEvent_CommitMethod_1;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_MakeStruct_BPNetExecParams = K2Node_MakeStruct_BPNetExecParams;
	Parms.CallFunc_GetPlatformName_ReturnValue_2 = CallFunc_GetPlatformName_ReturnValue_2;
	Parms.CallFunc_GetPlatformName_ReturnValue_3 = CallFunc_GetPlatformName_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1 = K2Node_DynamicCast_AsVisual_Settings_Main_Menu_UI_ASA_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_ComponentBoundEvent_ReturnValue_7 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_7 = Parms.K2Node_ComponentBoundEvent_ReturnValue_7;

	if (K2Node_ComponentBoundEvent_Index_7 != nullptr)
		*K2Node_ComponentBoundEvent_Index_7 = Parms.K2Node_ComponentBoundEvent_Index_7;

	if (K2Node_ComponentBoundEvent_ReturnValue_6 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_6 = Parms.K2Node_ComponentBoundEvent_ReturnValue_6;

	if (K2Node_ComponentBoundEvent_Index_6 != nullptr)
		*K2Node_ComponentBoundEvent_Index_6 = Parms.K2Node_ComponentBoundEvent_Index_6;

	if (K2Node_ComponentBoundEvent_ReturnValue_5 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_5 = Parms.K2Node_ComponentBoundEvent_ReturnValue_5;

	if (K2Node_ComponentBoundEvent_Index_5 != nullptr)
		*K2Node_ComponentBoundEvent_Index_5 = Parms.K2Node_ComponentBoundEvent_Index_5;

	if (K2Node_ComponentBoundEvent_ReturnValue_4 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_4 = Parms.K2Node_ComponentBoundEvent_ReturnValue_4;

	if (K2Node_ComponentBoundEvent_Index_4 != nullptr)
		*K2Node_ComponentBoundEvent_Index_4 = Parms.K2Node_ComponentBoundEvent_Index_4;

	if (K2Node_ComponentBoundEvent_ReturnValue_3 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_3 = Parms.K2Node_ComponentBoundEvent_ReturnValue_3;

	if (K2Node_ComponentBoundEvent_Index_3 != nullptr)
		*K2Node_ComponentBoundEvent_Index_3 = Parms.K2Node_ComponentBoundEvent_Index_3;

	if (K2Node_ComponentBoundEvent_ReturnValue_2 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_2 = Parms.K2Node_ComponentBoundEvent_ReturnValue_2;

	if (K2Node_ComponentBoundEvent_Index_2 != nullptr)
		*K2Node_ComponentBoundEvent_Index_2 = Parms.K2Node_ComponentBoundEvent_Index_2;

	if (K2Node_ComponentBoundEvent_ReturnValue_1 != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue_1 = Parms.K2Node_ComponentBoundEvent_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_Index_1 != nullptr)
		*K2Node_ComponentBoundEvent_Index_1 = Parms.K2Node_ComponentBoundEvent_Index_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_Conv_StringToDouble_ReturnValue != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue = Parms.CallFunc_Conv_StringToDouble_ReturnValue;

	if (K2Node_ComponentBoundEvent_ReturnValue != nullptr)
		*K2Node_ComponentBoundEvent_ReturnValue = Parms.K2Node_ComponentBoundEvent_ReturnValue;

	if (K2Node_ComponentBoundEvent_Index != nullptr)
		*K2Node_ComponentBoundEvent_Index = Parms.K2Node_ComponentBoundEvent_Index;

	if (CallFunc_Conv_TextToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue_1);

	if (CallFunc_Conv_StringToDouble_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToDouble_ReturnValue_1 = Parms.CallFunc_Conv_StringToDouble_ReturnValue_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (K2Node_ComponentBoundEvent_bIsChecked_1 != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked_1 = Parms.K2Node_ComponentBoundEvent_bIsChecked_1;

	if (K2Node_ComponentBoundEvent_bIsChecked != nullptr)
		*K2Node_ComponentBoundEvent_bIsChecked = Parms.K2Node_ComponentBoundEvent_bIsChecked;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_GetActiveWidgetIndex_ReturnValue != nullptr)
		*CallFunc_GetActiveWidgetIndex_ReturnValue = Parms.CallFunc_GetActiveWidgetIndex_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (CallFunc_GetDLSSModeIndex_ReturnValue != nullptr)
		*CallFunc_GetDLSSModeIndex_ReturnValue = Parms.CallFunc_GetDLSSModeIndex_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	return Parms.ReturnValue;

}

}


