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
// class UTexture2D*                  BGOverrideTexture                                                (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InstantChange                                                    (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference, Interp)
// float                              CallFunc_BreakColor_R                                            (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_G                                            (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_B                                            (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// float                              CallFunc_BreakColor_A                                            (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

double UMainMenuUI_C::OverrideBGImage(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float* CallFunc_BreakColor_R, float* CallFunc_BreakColor_G, float* CallFunc_BreakColor_B, float* CallFunc_BreakColor_A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "OverrideBGImage");

	Params::UMainMenuUI_C_OverrideBGImage_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BreakColor_R != nullptr)
		*CallFunc_BreakColor_R = Parms.CallFunc_BreakColor_R;

	if (CallFunc_BreakColor_G != nullptr)
		*CallFunc_BreakColor_G = Parms.CallFunc_BreakColor_G;

	if (CallFunc_BreakColor_B != nullptr)
		*CallFunc_BreakColor_B = Parms.CallFunc_BreakColor_B;

	if (CallFunc_BreakColor_A != nullptr)
		*CallFunc_BreakColor_A = Parms.CallFunc_BreakColor_A;

	return Parms.ReturnValue;

}


// Function MainMenuUI.MainMenuUI_C.UpdateLeftTextPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCTAVisible                                                     (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference, Interp)
// struct FMargin                     K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)

class UCanvasPanelSlot* UMainMenuUI_C::UpdateLeftTextPosition(bool* Temp_bool_Variable, struct FMargin* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "UpdateLeftTextPosition");

	Params::UMainMenuUI_C_UpdateLeftTextPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = std::move(Parms.K2Node_Select_Default);

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, SubobjectReference)
// class AShooterGame_Menu*           K2Node_DynamicCast_AsShooter_Game_Menu                           (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2D*                  CallFunc_GetMainMenuBackgroundTexture_ReturnValue                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue                              (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_1                            (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_1                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_1                                  (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue_2                      (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle_2                                  (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_GetUpsellIndex_ReturnValue_2                            (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, RepNotify, Interp)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ConstParm, BlueprintVisible, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_OpenUrl_ReturnValue_1                                   (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference, Interp)
// class UCreditsUI_C*                CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// bool                               CallFunc_Play_ReturnValue                                        (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

bool UMainMenuUI_C::ExecuteUbergraph_MainMenuUI(class AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle, bool* K2Node_SwitchInteger_CmpSuccess, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle_1, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle_2, bool* K2Node_SwitchInteger_CmpSuccess_1, bool* CallFunc_IsValid_ReturnValue_1, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MainMenuUI_C", "ExecuteUbergraph_MainMenuUI");

	Params::UMainMenuUI_C_ExecuteUbergraph_MainMenuUI_Params Parms{};

	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_MakeStruct_ButtonStyle != nullptr)
		*K2Node_MakeStruct_ButtonStyle = std::move(Parms.K2Node_MakeStruct_ButtonStyle);

	if (K2Node_SwitchInteger_CmpSuccess != nullptr)
		*K2Node_SwitchInteger_CmpSuccess = Parms.K2Node_SwitchInteger_CmpSuccess;

	if (K2Node_MakeStruct_ButtonStyle_1 != nullptr)
		*K2Node_MakeStruct_ButtonStyle_1 = std::move(Parms.K2Node_MakeStruct_ButtonStyle_1);

	if (K2Node_MakeStruct_ButtonStyle_2 != nullptr)
		*K2Node_MakeStruct_ButtonStyle_2 = std::move(Parms.K2Node_MakeStruct_ButtonStyle_2);

	if (K2Node_SwitchInteger_CmpSuccess_1 != nullptr)
		*K2Node_SwitchInteger_CmpSuccess_1 = Parms.K2Node_SwitchInteger_CmpSuccess_1;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	return Parms.ReturnValue;

}

}


