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
// class UTexture2D*                  BGOverrideTexture                                                (Net, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               InstantChange                                                    (ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Config, GlobalConfig, InstancedReference, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsVisible_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_BreakColor_R                                            (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_G                                            (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_B                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_BreakColor_A                                            (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (Edit, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, SubobjectReference)

float UMainMenuUI_C::OverrideBGImage(class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, bool* CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool* CallFunc_IsVisible_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "OverrideBGImage");

	Params::UMainMenuUI_C_OverrideBGImage_Params Parms{};

	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsVisible_ReturnValue != nullptr)
		*CallFunc_IsVisible_ReturnValue = Parms.CallFunc_IsVisible_ReturnValue;

	if (CallFunc_IsVisible_ReturnValue_1 != nullptr)
		*CallFunc_IsVisible_ReturnValue_1 = Parms.CallFunc_IsVisible_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable                                               (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)

struct FMargin UMainMenuUI_C::UpdateLeftTextPosition(bool* IsCTAVisible, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, class UCanvasPanelSlot** CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "UpdateLeftTextPosition");

	Params::UMainMenuUI_C_UpdateLeftTextPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (IsCTAVisible != nullptr)
		*IsCTAVisible = Parms.IsCTAVisible;

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
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, ConstParm, BlueprintReadOnly, Net, Parm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue                              (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_1                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, InstancedReference, SubobjectReference, RepNotify, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (ConstParm, BlueprintVisible, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_2                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (Net, EditFixedSize, Parm, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (Edit, ExportObject, OutParm, InstancedReference, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue_1                                   (Edit, ExportObject, OutParm, InstancedReference, SubobjectReference, Interp)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (ExportObject, BlueprintReadOnly, OutParm, InstancedReference, SubobjectReference)

double UMainMenuUI_C::ExecuteUbergraph_MainMenuUI(int32 EntryPoint, class UTexture2D* CallFunc_GetMainMenuBackgroundTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, int32 CallFunc_GetUpsellIndex_ReturnValue_1, bool* K2Node_SwitchInteger_CmpSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, int32 CallFunc_GetUpsellIndex_ReturnValue_2, bool* K2Node_SwitchInteger_CmpSuccess_1, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool* CallFunc_OpenUrl_ReturnValue, bool* CallFunc_OpenUrl_ReturnValue_1, class UCreditsUI_C* CallFunc_Create_ReturnValue, bool* CallFunc_Play_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "ExecuteUbergraph_MainMenuUI");

	Params::UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetMainMenuBackgroundTexture_ReturnValue = CallFunc_GetMainMenuBackgroundTexture_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue = CallFunc_GetUpsellIndex_ReturnValue;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_1 = CallFunc_GetUpsellIndex_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_1 = CallFunc_MakeBrushFromTexture_ReturnValue_1;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue_2 = CallFunc_MakeBrushFromTexture_ReturnValue_2;
	Parms.CallFunc_GetUpsellIndex_ReturnValue_2 = CallFunc_GetUpsellIndex_ReturnValue_2;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (K2Node_SwitchInteger_CmpSuccess_1 != nullptr)
		*K2Node_SwitchInteger_CmpSuccess_1 = Parms.K2Node_SwitchInteger_CmpSuccess_1;

	if (CallFunc_OpenUrl_ReturnValue != nullptr)
		*CallFunc_OpenUrl_ReturnValue = Parms.CallFunc_OpenUrl_ReturnValue;

	if (CallFunc_OpenUrl_ReturnValue_1 != nullptr)
		*CallFunc_OpenUrl_ReturnValue_1 = Parms.CallFunc_OpenUrl_ReturnValue_1;

	if (CallFunc_Play_ReturnValue != nullptr)
		*CallFunc_Play_ReturnValue = Parms.CallFunc_Play_ReturnValue;

	return Parms.ReturnValue;

}

}


