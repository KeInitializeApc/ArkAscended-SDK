#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MainMenuUI.MainMenuUI_C
// (None)

class UClass* UMainMenuUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MainMenuUI_C");

	return Clss;
}


// MainMenuUI_C MainMenuUI.Default__MainMenuUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMainMenuUI_C* UMainMenuUI_C::GetDefaultObj()
{
	static class UMainMenuUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMainMenuUI_C*>(UMainMenuUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MainMenuUI.MainMenuUI_C.OverrideBGImage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  BGOverrideTexture                                                (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InstantChange                                                    (Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsVisible_ReturnValue                                   (DisableEditOnInstance, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_BreakColor_R                                            (Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_G                                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_B                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_A                                            (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)

double UMainMenuUI_C::OverrideBGImage(bool* K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "OverrideBGImage");

	Params::UMainMenuUI_C_OverrideBGImage_Params Parms{};

	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, ExportObject, Net, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)

struct FMargin UMainMenuUI_C::UpdateLeftTextPosition(bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "UpdateLeftTextPosition");

	Params::UMainMenuUI_C_UpdateLeftTextPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_SlotAsCanvasSlot_ReturnValue != nullptr)
		*CallFunc_SlotAsCanvasSlot_ReturnValue = Parms.CallFunc_SlotAsCanvasSlot_ReturnValue;

	return Parms.ReturnValue;

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__ScorchedEarthStoreButton_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMainMenuUI_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__CreditsButton_K2Node_ComponentBoundEvent_116_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMainMenuUI_C::BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "BndEvt__WebButton_K2Node_ComponentBoundEvent_110_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MainMenuUI.MainMenuUI_C.ExecuteUbergraph_MainMenuUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (Edit, ConstParm, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_2                            (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (Edit, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (BlueprintReadOnly, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue_1                                   (Edit, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (Edit, ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UMainMenuUI_C::ExecuteUbergraph_MainMenuUI(int32* EntryPoint, bool* K2Node_DynamicCast_bSuccess, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, bool* CallFunc_Greater_IntInt_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "ExecuteUbergraph_MainMenuUI");

	Params::UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params Parms{};

	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue = CallFunc_GetUpsellIndex_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_1 = CallFunc_GetUpsellIndex_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_2 = CallFunc_GetUpsellIndex_ReturnValue_2;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue = CallFunc_OpenUrl_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue_1 = CallFunc_OpenUrl_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_Greater_IntInt_ReturnValue != nullptr)
		*CallFunc_Greater_IntInt_ReturnValue = Parms.CallFunc_Greater_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


