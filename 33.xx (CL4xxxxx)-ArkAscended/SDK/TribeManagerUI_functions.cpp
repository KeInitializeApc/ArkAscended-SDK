#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TribeManagerUI.TribeManagerUI_C
// (None)

class UClass* UTribeManagerUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TribeManagerUI_C");

	return Clss;
}


// TribeManagerUI_C TribeManagerUI.Default__TribeManagerUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTribeManagerUI_C* UTribeManagerUI_C::GetDefaultObj()
{
	static class UTribeManagerUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTribeManagerUI_C*>(UTribeManagerUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TribeManagerUI.TribeManagerUI_C.Get_TribeWarPanel_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

enum class ESlateVisibility UTribeManagerUI_C::Get_TribeWarPanel_Visibility(enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "Get_TribeWarPanel_Visibility");

	Params::UTribeManagerUI_C_Get_TribeWarPanel_Visibility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.CheckToBool
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataListButtonVariable_Widget_ASA_C*Slider                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
// bool                               Byte                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

class FString UTribeManagerUI_C::CheckToBool(class UDataListButtonVariable_Widget_ASA_C** Slider, bool* Byte, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "CheckToBool");

	Params::UTribeManagerUI_C_CheckToBool_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Slider != nullptr)
		*Slider = Parms.Slider;

	if (Byte != nullptr)
		*Byte = Parms.Byte;

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.SliderToByte
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDataListButtonVariable_Widget_ASA_C*Slider                                                           (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, GlobalConfig)
// uint8                              Byte                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)

uint8 UTribeManagerUI_C::SliderToByte(class UDataListButtonVariable_Widget_ASA_C** Slider, uint8* Byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "SliderToByte");

	Params::UTribeManagerUI_C_SliderToByte_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Slider != nullptr)
		*Slider = Parms.Slider;

	if (Byte != nullptr)
		*Byte = Parms.Byte;

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.SetupSwitchButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     TextureEffectToHide                                              (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// class UWidget*                     TextureEffectToShow                                              (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class UPanelWidget*                ButtonToShow                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// class UPanelWidget*                ButtonToHide                                                     (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)

struct FSlateColor UTribeManagerUI_C::SetupSwitchButtons(class UWidget* TextureEffectToHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "SetupSwitchButtons");

	Params::UTribeManagerUI_C_SetupSwitchButtons_Params Parms{};

	Parms.TextureEffectToHide = TextureEffectToHide;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToGroups_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToTribes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToAlliances_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToGovernance_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToWarfare_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BndEvt__TribeManagerUI_GoToTribeLog_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexSelected
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UTribeManagerUI_C::BPRankGroupIndexSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BPRankGroupIndexSelected");

	Params::UTribeManagerUI_C_BPRankGroupIndexSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.BPRankGroupIndexApplied
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

int32 UTribeManagerUI_C::BPRankGroupIndexApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "BPRankGroupIndexApplied");

	Params::UTribeManagerUI_C_BPRankGroupIndexApplied_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TribeManagerUI.TribeManagerUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTribeManagerUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TribeManagerUI.TribeManagerUI_C.ExecuteUbergraph_TribeManagerUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_CheckToBool_Byte                                        (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_index_1                                             (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class AShooterPlayerState*         CallFunc_GetPlayerState_ReturnValue                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference)
// int32                              K2Node_Event_index                                               (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AShooterPlayerState*         CallFunc_GetPlayerState_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// uint8                              CallFunc_SliderToByte_Byte                                       (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_1                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_2                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_3                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_4                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_5                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_6                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_7                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_8                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_9                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_10                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue_11                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, NonTransactional, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_4                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_5                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_5                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_6                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp, NonTransactional)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_7                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_6                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, NonTransactional)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_7                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_8                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_9                            (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_8                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_9                          (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_10                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, Interp, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_11                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_10                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, Interp, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_11                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, NonTransactional, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_12                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_13                           (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_12                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_13                         (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference, Interp, NonTransactional, EditorOnly)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// uint8                              CallFunc_SliderToByte_Byte_1                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp)
// uint8                              CallFunc_SliderToByte_Byte_2                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// uint8                              CallFunc_SliderToByte_Byte_3                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// uint8                              CallFunc_SliderToByte_Byte_4                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// uint8                              CallFunc_SliderToByte_Byte_5                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// uint8                              CallFunc_SliderToByte_Byte_6                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// uint8                              CallFunc_SliderToByte_Byte_7                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_8                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_9                                     (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_10                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_11                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_12                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional, EditorOnly)
// uint8                              CallFunc_SliderToByte_Byte_13                                    (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional, EditorOnly)
// bool                               CallFunc_CheckToBool_Byte_1                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_CheckToBool_Byte_2                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_CheckToBool_Byte_3                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_CheckToBool_Byte_4                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               CallFunc_CheckToBool_Byte_5                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp, NonTransactional)
// bool                               CallFunc_CheckToBool_Byte_6                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, NonTransactional)
// bool                               CallFunc_CheckToBool_Byte_7                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, EditorOnly)
// bool                               CallFunc_CheckToBool_Byte_8                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, EditorOnly)
// bool                               CallFunc_CheckToBool_Byte_9                                      (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp, EditorOnly)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// class AShooterPlayerState*         CallFunc_GetPlayerState_ReturnValue_2                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_IsTribeAdmin_ReturnValue                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference)
// int32                              Temp_int_Variable                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CheckToBool_Byte_10                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, RepNotify, Interp, EditorOnly)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (BlueprintReadOnly, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class AShooterPlayerState*         CallFunc_GetPlayerState_ReturnValue_3                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, EditConst, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_IsTribeAdmin_ReturnValue_1                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, EditConst, InstancedReference, SubobjectReference, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Left_ReturnValue                                        (ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_CheckToBool_Byte_11                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst, InstancedReference, SubobjectReference, NonTransactional, EditorOnly)
// struct FTribeRankGroup             K2Node_MakeStruct_TribeRankGroup                                 (ConstParm, BlueprintVisible, EditFixedSize, OutParm, EditConst, InstancedReference, SubobjectReference)

bool UTribeManagerUI_C::ExecuteUbergraph_TribeManagerUI(int32* EntryPoint, class AShooterPlayerState* CallFunc_GetPlayerState_ReturnValue, class AShooterPlayerState* CallFunc_GetPlayerState_ReturnValue_1, class FString* CallFunc_Conv_BoolToString_ReturnValue, class FString* CallFunc_Conv_BoolToString_ReturnValue_1, class FString* CallFunc_Conv_BoolToString_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, class FString* CallFunc_Conv_BoolToString_ReturnValue_3, class FString* CallFunc_Conv_BoolToString_ReturnValue_4, class FString* CallFunc_Conv_BoolToString_ReturnValue_5, class FString* CallFunc_Conv_BoolToString_ReturnValue_6, class FString* CallFunc_Conv_BoolToString_ReturnValue_7, class FString* CallFunc_Conv_BoolToString_ReturnValue_8, class FString* CallFunc_Conv_BoolToString_ReturnValue_9, class FString* CallFunc_Conv_BoolToString_ReturnValue_10, class FString* CallFunc_Conv_BoolToString_ReturnValue_11, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, int32 CallFunc_Conv_ByteToInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue_5, int32 CallFunc_Conv_ByteToInt_ReturnValue_6, int32 CallFunc_Conv_ByteToInt_ReturnValue_7, int32 CallFunc_Conv_ByteToInt_ReturnValue_8, int32 CallFunc_Conv_ByteToInt_ReturnValue_9, int32 CallFunc_Conv_ByteToInt_ReturnValue_10, int32 CallFunc_Conv_ByteToInt_ReturnValue_11, int32 CallFunc_Conv_ByteToInt_ReturnValue_12, int32 CallFunc_Conv_ByteToInt_ReturnValue_13, int32* CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AShooterPlayerState* CallFunc_GetPlayerState_ReturnValue_2, int32* Temp_int_Variable, class UWidget** CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AShooterPlayerState* CallFunc_GetPlayerState_ReturnValue_3, class FString* CallFunc_Left_ReturnValue, struct FTribeRankGroup* K2Node_MakeStruct_TribeRankGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TribeManagerUI_C", "ExecuteUbergraph_TribeManagerUI");

	Params::UTribeManagerUI_C_ExecuteUbergraph_TribeManagerUI_Params Parms{};

	Parms.CallFunc_GetPlayerState_ReturnValue = CallFunc_GetPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue_1 = CallFunc_GetPlayerState_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_4 = CallFunc_Conv_ByteToInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_5 = CallFunc_Conv_ByteToInt_ReturnValue_5;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_6 = CallFunc_Conv_ByteToInt_ReturnValue_6;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_7 = CallFunc_Conv_ByteToInt_ReturnValue_7;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_8 = CallFunc_Conv_ByteToInt_ReturnValue_8;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_9 = CallFunc_Conv_ByteToInt_ReturnValue_9;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_10 = CallFunc_Conv_ByteToInt_ReturnValue_10;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_11 = CallFunc_Conv_ByteToInt_ReturnValue_11;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_12 = CallFunc_Conv_ByteToInt_ReturnValue_12;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_13 = CallFunc_Conv_ByteToInt_ReturnValue_13;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue_2 = CallFunc_GetPlayerState_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerState_ReturnValue_3 = CallFunc_GetPlayerState_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_Conv_BoolToString_ReturnValue != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue);

	if (CallFunc_Conv_BoolToString_ReturnValue_1 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_1 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_1);

	if (CallFunc_Conv_BoolToString_ReturnValue_2 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_2 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_2);

	if (CallFunc_Conv_BoolToString_ReturnValue_3 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_3 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_3);

	if (CallFunc_Conv_BoolToString_ReturnValue_4 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_4 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_4);

	if (CallFunc_Conv_BoolToString_ReturnValue_5 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_5 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_5);

	if (CallFunc_Conv_BoolToString_ReturnValue_6 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_6 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_6);

	if (CallFunc_Conv_BoolToString_ReturnValue_7 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_7 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_7);

	if (CallFunc_Conv_BoolToString_ReturnValue_8 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_8 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_8);

	if (CallFunc_Conv_BoolToString_ReturnValue_9 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_9 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_9);

	if (CallFunc_Conv_BoolToString_ReturnValue_10 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_10 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_10);

	if (CallFunc_Conv_BoolToString_ReturnValue_11 != nullptr)
		*CallFunc_Conv_BoolToString_ReturnValue_11 = std::move(Parms.CallFunc_Conv_BoolToString_ReturnValue_11);

	if (CallFunc_GetChildrenCount_ReturnValue != nullptr)
		*CallFunc_GetChildrenCount_ReturnValue = Parms.CallFunc_GetChildrenCount_ReturnValue;

	if (Temp_int_Variable != nullptr)
		*Temp_int_Variable = Parms.Temp_int_Variable;

	if (CallFunc_GetChildAt_ReturnValue != nullptr)
		*CallFunc_GetChildAt_ReturnValue = Parms.CallFunc_GetChildAt_ReturnValue;

	if (CallFunc_Left_ReturnValue != nullptr)
		*CallFunc_Left_ReturnValue = std::move(Parms.CallFunc_Left_ReturnValue);

	if (K2Node_MakeStruct_TribeRankGroup != nullptr)
		*K2Node_MakeStruct_TribeRankGroup = std::move(Parms.K2Node_MakeStruct_TribeRankGroup);

	return Parms.ReturnValue;

}

}


