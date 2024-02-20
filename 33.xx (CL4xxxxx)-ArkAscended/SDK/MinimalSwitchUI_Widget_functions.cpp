#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C
// (None)

class UClass* UMinimalSwitchUI_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimalSwitchUI_Widget_C");

	return Clss;
}


// MinimalSwitchUI_Widget_C MinimalSwitchUI_Widget.Default__MinimalSwitchUI_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimalSwitchUI_Widget_C* UMinimalSwitchUI_Widget_C::GetDefaultObj()
{
	static class UMinimalSwitchUI_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimalSwitchUI_Widget_C*>(UMinimalSwitchUI_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.FixConsoleIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             Local_UWidgetIcons                                               (BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UImage*                      K2Node_DynamicCast_AsImage                                       (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (Edit, ConstParm, BlueprintVisible, ExportObject, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BPGetGlobalUIData_bIsPsOrXbUi                           (Edit, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// class UPrimalGlobalUIData*         CallFunc_BPGetGlobalUIData_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_GetIconForKeyName_ReturnValue                           (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UMinimalSwitchUI_Widget_C::FixConsoleIcons(const TArray<class UWidget*>& Local_UWidgetIcons, const TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UImage* K2Node_DynamicCast_AsImage, bool* CallFunc_BPGetGlobalUIData_bIsPsOrXbUi, class UPrimalGlobalUIData** CallFunc_BPGetGlobalUIData_ReturnValue, class UTexture2D** CallFunc_GetIconForKeyName_ReturnValue, bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSwitchUI_Widget_C", "FixConsoleIcons");

	Params::UMinimalSwitchUI_Widget_C_FixConsoleIcons_Params Parms{};

	Parms.Local_UWidgetIcons = Local_UWidgetIcons;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_DynamicCast_AsImage = K2Node_DynamicCast_AsImage;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BPGetGlobalUIData_bIsPsOrXbUi != nullptr)
		*CallFunc_BPGetGlobalUIData_bIsPsOrXbUi = Parms.CallFunc_BPGetGlobalUIData_bIsPsOrXbUi;

	if (CallFunc_BPGetGlobalUIData_ReturnValue != nullptr)
		*CallFunc_BPGetGlobalUIData_ReturnValue = Parms.CallFunc_BPGetGlobalUIData_ReturnValue;

	if (CallFunc_GetIconForKeyName_ReturnValue != nullptr)
		*CallFunc_GetIconForKeyName_ReturnValue = Parms.CallFunc_GetIconForKeyName_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.UpdateTooltipMoreInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// class FText                        K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)

class UShooterGameUserSettings* UMinimalSwitchUI_Widget_C::UpdateTooltipMoreInfo(bool* Temp_bool_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSwitchUI_Widget_C", "UpdateTooltipMoreInfo");

	Params::UMinimalSwitchUI_Widget_C_UpdateTooltipMoreInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	return Parms.ReturnValue;

}


// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UMinimalSwitchUI_Widget_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSwitchUI_Widget_C", "Tick");

	Params::UMinimalSwitchUI_Widget_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMinimalSwitchUI_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSwitchUI_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MinimalSwitchUI_Widget.MinimalSwitchUI_Widget_C.ExecuteUbergraph_MinimalSwitchUI_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class AShooterPlayerController*    K2Node_DynamicCast_AsShooter_Player_Controller                   (ConstParm, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// class UShooterGameUserSettings*    CallFunc_GetShooterGameUserSettings_ReturnValue                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Transient, Config, SubobjectReference)

bool UMinimalSwitchUI_Widget_C::ExecuteUbergraph_MinimalSwitchUI_Widget(class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, class AShooterPlayerController* K2Node_DynamicCast_AsShooter_Player_Controller, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MinimalSwitchUI_Widget_C", "ExecuteUbergraph_MinimalSwitchUI_Widget");

	Params::UMinimalSwitchUI_Widget_C_ExecuteUbergraph_MinimalSwitchUI_Widget_Params Parms{};

	Parms.K2Node_DynamicCast_AsShooter_Player_Controller = K2Node_DynamicCast_AsShooter_Player_Controller;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


