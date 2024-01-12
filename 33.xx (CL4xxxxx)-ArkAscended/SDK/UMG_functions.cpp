#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class UMG.Visual
// (None)

class UClass* UVisual::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Visual");

	return Clss;
}


// Visual UMG.Default__Visual
// (Public, ClassDefaultObject, ArchetypeObject)

class UVisual* UVisual::GetDefaultObj()
{
	static class UVisual* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisual*>(UVisual::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.Widget
// (None)

class UClass* UWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Widget");

	return Clss;
}


// Widget UMG.Default__Widget
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidget* UWidget::GetDefaultObj()
{
	static class UWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidget*>(UWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESlateVisibility UWidget::SetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetVisibility");

	Params::UWidget_SetVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)

void UWidget::SetUserFocus(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetUserFocus");

	Params::UWidget_SetUserFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InToolTipText                                                    (ConstParm, BlueprintVisible, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UWidget::SetToolTipText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::UWidget_SetToolTipText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UWidget* UWidget::SetToolTip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTip");

	Params::UWidget_SetToolTip_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (ConstParm, Parm, ZeroConstructor, Transient, Config)

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::UWidget_SetRenderTranslation_Params Parms{};

	Parms.Translation = Translation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pivot                                                            (BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FVector2D UWidget::SetRenderTransformPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::UWidget_SetRenderTransformPivot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Edit, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UWidget::SetRenderTransformAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformAngle");

	Params::UWidget_SetRenderTransformAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform            InTransform                                                      (Edit, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FWidgetTransform UWidget::SetRenderTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::UWidget_SetRenderTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Shear                                                            (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetRenderShear(struct FVector2D* Shear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::UWidget_SetRenderShear_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Shear != nullptr)
		*Shear = std::move(Parms.Shear);

}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Scale                                                            (Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::UWidget_SetRenderScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetRenderOpacity(float* InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderOpacity");

	Params::UWidget_SetRenderOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOpacity != nullptr)
		*InOpacity = Parms.InOpacity;

}


// Function UMG.Widget.SetNavigationRuleExplicit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// class UWidget*                     InWidget                                                         (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetNavigationRuleExplicit(enum class EUINavigation* Direction, class UWidget** InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleExplicit");

	Params::UWidget_SetNavigationRuleExplicit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	if (InWidget != nullptr)
		*InWidget = Parms.InWidget;

}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 InCustomDelegate                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetNavigationRuleCustomBoundary(enum class EUINavigation* Direction, FDelegateProperty_* InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustomBoundary");

	Params::UWidget_SetNavigationRuleCustomBoundary_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	if (InCustomDelegate != nullptr)
		*InCustomDelegate = Parms.InCustomDelegate;

}


// Function UMG.Widget.SetNavigationRuleCustom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 InCustomDelegate                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetNavigationRuleCustom(enum class EUINavigation* Direction, FDelegateProperty_* InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustom");

	Params::UWidget_SetNavigationRuleCustom_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

	if (InCustomDelegate != nullptr)
		*InCustomDelegate = Parms.InCustomDelegate;

}


// Function UMG.Widget.SetNavigationRuleBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// enum class EUINavigationRule       Rule                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetNavigationRuleBase(enum class EUINavigation* Direction, enum class EUINavigationRule Rule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleBase");

	Params::UWidget_SetNavigationRuleBase_Params Parms{};

	Parms.Rule = Rule;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// enum class EUINavigationRule       Rule                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        WidgetToFocus                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetNavigationRule(enum class EUINavigation* Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::UWidget_SetNavigationRule_Params Parms{};

	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Direction != nullptr)
		*Direction = Parms.Direction;

}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetKeyboardFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsEnabled                                                     (Edit, BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetIsEnabled(bool* bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::UWidget_SetIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInIsEnabled != nullptr)
		*bInIsEnabled = Parms.bInIsEnabled;

}


// Function UMG.Widget.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetFocus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMouseCursor            InCursor                                                         (OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetCursor(enum class EMouseCursor* InCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetCursor");

	Params::UWidget_SetCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCursor != nullptr)
		*InCursor = Parms.InCursor;

}


// Function UMG.Widget.SetClipping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetClipping         InClipping                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetClipping(enum class EWidgetClipping InClipping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetClipping");

	Params::UWidget_SetClipping_Params Parms{};

	Parms.InClipping = InClipping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigationRule       Rule                                                             (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        WidgetToFocus                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::UWidget_SetAllNavigationRules_Params Parms{};

	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ResetCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ResetCursor");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidget::RemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "RemoveFromParent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnReply__DelegateSignature");

	Params::UWidget_OnReply__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnPointerEvent__DelegateSignature");

	Params::UWidget_OnPointerEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UWidget::K2_RemoveFieldValueChangedDelegate(struct FFieldNotificationId* FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_RemoveFieldValueChangedDelegate");

	Params::UWidget_K2_RemoveFieldValueChangedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FieldId != nullptr)
		*FieldId = std::move(Parms.FieldId);

}


// Function UMG.Widget.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::K2_BroadcastFieldValueChanged(struct FFieldNotificationId* FieldId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_BroadcastFieldValueChanged");

	Params::UWidget_K2_BroadcastFieldValueChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FieldId != nullptr)
		*FieldId = std::move(Parms.FieldId);

}


// Function UMG.Widget.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UWidget::K2_AddFieldValueChangedDelegate(struct FFieldNotificationId* FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_AddFieldValueChangedDelegate");

	Params::UWidget_K2_AddFieldValueChangedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FieldId != nullptr)
		*FieldId = std::move(Parms.FieldId);

}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::IsVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsVisible");

	Params::UWidget_IsVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::IsRendered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsRendered");

	Params::UWidget_IsRendered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::IsInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsInViewport");

	Params::UWidget_IsInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::IsHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsHovered");

	Params::UWidget_IsHovered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::InvalidateLayoutAndVolatility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "InvalidateLayoutAndVolatility");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasUserFocusedDescendants(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::UWidget_HasUserFocusedDescendants_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasUserFocus(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::UWidget_HasUserFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCaptureByUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              UserIndex                                                        (Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              PointerIndex                                                     (BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasMouseCaptureByUser(int32* UserIndex, int32* PointerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCaptureByUser");

	Params::UWidget_HasMouseCaptureByUser_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (UserIndex != nullptr)
		*UserIndex = Parms.UserIndex;

	if (PointerIndex != nullptr)
		*PointerIndex = Parms.PointerIndex;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasMouseCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::UWidget_HasMouseCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::UWidget_HasKeyboardFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasFocusedDescendants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::UWidget_HasFocusedDescendants_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::HasAnyUserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::UWidget_HasAnyUserFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetWidget__DelegateSignature");

	Params::UWidget_GetWidget__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESlateVisibility UWidget::GetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetVisibility");

	Params::UWidget_GetVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetTickSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometry UWidget::GetTickSpaceGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetTickSpaceGeometry");

	Params::UWidget_GetTickSpaceGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UWidget::GetText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetText__DelegateSignature");

	Params::UWidget_GetText__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");

	Params::UWidget_GetSlateVisibility__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateColor__DelegateSignature");

	Params::UWidget_GetSlateColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateBrush__DelegateSignature");

	Params::UWidget_GetSlateBrush__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidget::GetRenderTransformAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderTransformAngle");

	Params::UWidget_GetRenderTransformAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetRenderOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidget::GetRenderOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderOpacity");

	Params::UWidget_GetRenderOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPanelWidget* UWidget::GetParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetParent");

	Params::UWidget_GetParent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetPaintSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometry UWidget::GetPaintSpaceGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetPaintSpaceGeometry");

	Params::UWidget_GetPaintSpaceGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetOwningPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class APlayerController* UWidget::GetOwningPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::UWidget_GetOwningPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetOwningLocalPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class ULocalPlayer* UWidget::GetOwningLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningLocalPlayer");

	Params::UWidget_GetOwningLocalPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetMouseCursor__DelegateSignature");

	Params::UWidget_GetMouseCursor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetLinearColor__DelegateSignature");

	Params::UWidget_GetLinearColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetIsThisAndParentsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::GetIsThisAndParentsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsThisAndParentsEnabled");

	Params::UWidget_GetIsThisAndParentsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::GetIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::UWidget_GetIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UWidget::GetInt32__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetInt32__DelegateSignature");

	Params::UWidget_GetInt32__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetGameInstance
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameInstance*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UGameInstance* UWidget::GetGameInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetGameInstance");

	Params::UWidget_GetGameInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidget::GetFloat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetFloat__DelegateSignature");

	Params::UWidget_GetFloat__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidget::GetDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::UWidget_GetDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetClipping         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EWidgetClipping UWidget::GetClipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetClipping");

	Params::UWidget_GetClipping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");

	Params::UWidget_GetCheckBoxState__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometry UWidget::GetCachedGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::UWidget_GetCachedGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::GetBool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetBool__DelegateSignature");

	Params::UWidget_GetBool__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetAccessibleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UWidget::GetAccessibleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleText");

	Params::UWidget_GetAccessibleText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetAccessibleSummaryText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UWidget::GetAccessibleSummaryText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleSummaryText");

	Params::UWidget_GetAccessibleSummaryText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");

	Params::UWidget_GenerateWidgetForString__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");

	Params::UWidget_GenerateWidgetForObject__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Edit, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidget::ForceVolatile(bool* bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::UWidget_ForceVolatile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bForce != nullptr)
		*bForce = Parms.bForce;

}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ForceLayoutPrepass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceLayoutPrepass");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UserWidget
// (None)

class UClass* UUserWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidget");

	return Clss;
}


// UserWidget UMG.Default__UserWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidget* UUserWidget::GetDefaultObj()
{
	static class UUserWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidget*>(UUserWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::UnregisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnregisterInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationStarted");

	Params::UUserWidget_UnbindFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationFinished");

	Params::UUserWidget_UnbindFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)

void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");

	Params::UUserWidget_UnbindAllFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)

void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");

	Params::UUserWidget_UnbindAllFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UUserWidget::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Tick");

	Params::UUserWidget_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EInputEvent             EventType                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UUserWidget::StopListeningForInputAction(class FName* ActionName, enum class EInputEvent* EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UUserWidget_StopListeningForInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

	if (EventType != nullptr)
		*EventType = Parms.EventType;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::StopListeningForAllInputActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForAllInputActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAnimationsAndLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimationsAndLatentActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.StopAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UWidgetAnimation* UUserWidget::StopAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UUserWidget_StopAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAllAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAllAnimations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// bool                               bRemoveDPIScale                                                  (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool* bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UUserWidget_SetPositionInViewport_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bRemoveDPIScale != nullptr)
		*bRemoveDPIScale = Parms.bRemoveDPIScale;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UWidgetAnimation* UUserWidget::SetPlaybackSpeed(float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UUserWidget_SetPlaybackSpeed_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPadding");

	Params::UUserWidget_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           LocalPlayerController                                            (ConstParm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetOwningPlayer(class APlayerController** LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetOwningPlayer");

	Params::UUserWidget_SetOwningPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LocalPlayerController != nullptr)
		*LocalPlayerController = Parms.LocalPlayerController;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UWidgetAnimation* UUserWidget::SetNumLoopsToPlay(int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UUserWidget_SetNumLoopsToPlay_Params Parms{};

	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetInputActionPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UUserWidget_SetInputActionPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UUserWidget_SetInputActionBlocking_Params Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor UUserWidget::SetForegroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetForegroundColor");

	Params::UUserWidget_SetForegroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)

struct FVector2D UUserWidget::SetDesiredSizeInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetDesiredSizeInViewport");

	Params::UUserWidget_SetDesiredSizeInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UUserWidget_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InTime                                                           (Edit, ExportObject, Net, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidgetAnimation* UUserWidget::SetAnimationCurrentTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnimationCurrentTime");

	Params::UUserWidget_SetAnimationCurrentTime_Params Parms{};

	Parms.InTime = InTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    Anchors                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, DisableEditOnInstance)

struct FAnchors UUserWidget::SetAnchorsInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnchorsInViewport");

	Params::UUserWidget_SetAnchorsInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Alignment                                                        (BlueprintVisible, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UUserWidget_SetAlignmentInViewport_Params Parms{};

	Parms.Alignment = Alignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UWidgetAnimation* UUserWidget::ReverseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UUserWidget_ReverseAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.RemoveFromViewport
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::RemoveFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveFromViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RemoveExtensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExtensionType                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UClass* UUserWidget::RemoveExtensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtensions");

	Params::UUserWidget_RemoveExtensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.RemoveExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidgetExtension*        InExtension                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::RemoveExtension(class UUserWidgetExtension* InExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtension");

	Params::UUserWidget_RemoveExtension_Params Parms{};

	Parms.InExtension = InExtension;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::RegisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RegisterInputComponent");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UUserWidget_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  SoundToPlay                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UUserWidget_PlaySound_Params Parms{};

	Parms.SoundToPlay = SoundToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimationTimeRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              EndAtTime                                                        (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationTimeRange");

	Params::UUserWidget_PlayAnimationTimeRange_Params Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimationReverse
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationReverse");

	Params::UUserWidget_PlayAnimationReverse_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimationForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationForward");

	Params::UUserWidget_PlayAnimationForward_Params Parms{};

	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUMGSequencePlayer* UUserWidget::PlayAnimation(float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UUserWidget_PlayAnimation_Params Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UUserWidget::PauseAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UUserWidget_PauseAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UUserWidget_OnTouchStarted_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UUserWidget_OnTouchMoved_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               GestureEvent                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry* MyGeometry, const struct FPointerEvent& GestureEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UUserWidget_OnTouchGesture_Params Parms{};

	Parms.GestureEvent = GestureEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchForceChanged
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchForceChanged");

	Params::UUserWidget_OnTouchForceChanged_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry* MyGeometry, const struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UUserWidget_OnTouchEnded_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUserWidget::OnRemovedFromFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnRemovedFromFocusPath");

	Params::UUserWidget_OnRemovedFromFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UUserWidget_OnPreviewMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UUserWidget_OnPreviewKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPaintContext UUserWidget::OnPaint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UUserWidget_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UUserWidget_OnMouseWheel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMouseMove(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UUserWidget_OnMouseMove_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::OnMouseLeave(struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UUserWidget_OnMouseLeave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUserWidget::OnMouseEnter(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UUserWidget_OnMouseEnter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

}


// Function UMG.UserWidget.OnMouseCaptureLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnMouseCaptureLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseCaptureLost");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UUserWidget_OnMouseButtonUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry* MyGeometry, struct FPointerEvent* MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UUserWidget_OnMouseButtonDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (MouseEvent != nullptr)
		*MouseEvent = std::move(Parms.MouseEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InMouseEvent                                                     (ExportObject, Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UUserWidget_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FMotionEvent                InMotionEvent                                                    (Net, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry* MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UUserWidget_OnMotionDetected_Params Parms{};

	Parms.InMotionEvent = InMotionEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnKeyUp(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UUserWidget_OnKeyUp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UUserWidget_OnKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FCharacterEvent             InCharacterEvent                                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnKeyChar(struct FGeometry* MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UUserWidget_OnKeyChar_Params Parms{};

	Parms.InCharacterEvent = InCharacterEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UUserWidget_OnFocusReceived_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUserWidget::OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UUserWidget_OnFocusLost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::OnDrop(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UUserWidget_OnDrop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::OnDragOver(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UUserWidget_OnDragOver_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UDragDropOperation* UUserWidget::OnDragLeave(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UUserWidget_OnDragLeave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UDragDropOperation* UUserWidget::OnDragEnter(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UUserWidget_OnDragEnter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UDragDropOperation* UUserWidget::OnDragDetected(struct FGeometry* MyGeometry, struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UUserWidget_OnDragDetected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UDragDropOperation* UUserWidget::OnDragCancelled(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UUserWidget_OnDragCancelled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UUserWidget_OnAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UUserWidget_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UUserWidget_OnAnalogValueChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUserWidget::OnAddedToFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAddedToFocusPath");

	Params::UUserWidget_OnAddedToFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EInputEvent             EventType                                                        (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bConsume                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 Callback                                                         (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

FDelegateProperty_ UUserWidget::ListenForInputAction(class FName* ActionName, enum class EInputEvent* EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UUserWidget_ListenForInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

	if (EventType != nullptr)
		*EventType = Parms.EventType;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsPlayingAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UUserWidget_IsPlayingAnimation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsListeningForInputAction(class FName* ActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UUserWidget_IsListeningForInputAction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ActionName != nullptr)
		*ActionName = Parms.ActionName;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsInteractable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UUserWidget_IsInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsAnyAnimationPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UUserWidget_IsAnyAnimationPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsAnimationPlayingForward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UUserWidget_IsAnimationPlayingForward_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::IsAnimationPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UUserWidget_IsAnimationPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UUserWidget_GetOwningPlayerPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningPlayerCameraManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerCameraManager");

	Params::UUserWidget_GetOwningPlayerCameraManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::GetIsVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UUserWidget_GetIsVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetExtensions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// TArray<class UUserWidgetExtension*>ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UUserWidgetExtension*> UUserWidget::GetExtensions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtensions");

	Params::UUserWidget_GetExtensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetExtension
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUserWidgetExtension*        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidgetExtension* UUserWidget::GetExtension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtension");

	Params::UUserWidget_GetExtension_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UUserWidget::GetAnimationCurrentTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UUserWidget_GetAnimationCurrentTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UUserWidget_GetAnchorsInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UUserWidget_GetAlignmentInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.FlushAnimations
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::FlushAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "FlushAnimations");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.UserWidget.CancelLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::CancelLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "CancelLatentActions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationStarted");

	Params::UUserWidget_BindToAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationFinished");

	Params::UUserWidget_BindToAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.BindToAnimationEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Edit, Net, EditFixedSize, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EWidgetAnimationEvent   AnimationEvent                                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        UserTag                                                          (ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FName UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationEvent");

	Params::UUserWidget_BindToAnimationEvent_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.AddToViewport
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

int32 UUserWidget::AddToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UUserWidget_AddToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserWidget::AddToPlayerScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UUserWidget_AddToPlayerScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.AddExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExtensionType                                                  (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUserWidgetExtension*        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidgetExtension* UUserWidget::AddExtension()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddExtension");

	Params::UUserWidget_AddExtension_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Image
// (None)

class UClass* UImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Image");

	return Clss;
}


// Image UMG.Default__Image
// (Public, ClassDefaultObject, ArchetypeObject)

class UImage* UImage::GetDefaultObj()
{
	static class UImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UImage*>(UImage::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UImage::SetOpacity(float* InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetOpacity");

	Params::UImage_SetOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOpacity != nullptr)
		*InOpacity = Parms.InOpacity;

}


// Function UMG.Image.SetDesiredSizeOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FVector2D UImage::SetDesiredSizeOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetDesiredSizeOverride");

	Params::UImage_SetDesiredSizeOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::UImage_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushTintColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 TintColor                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor UImage::SetBrushTintColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushTintColor");

	Params::UImage_SetBrushTintColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushResourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ResourceObject                                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)

class UObject* UImage::SetBrushResourceObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushResourceObject");

	Params::UImage_SetBrushResourceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromTextureDynamic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::UImage_SetBrushFromTextureDynamic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::UImage_SetBrushFromTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromSoftTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftTexture");

	Params::UImage_SetBrushFromSoftTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromSoftMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>SoftMaterial                                                     (EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

TSoftObjectPtr<class UMaterialInterface> UImage::SetBrushFromSoftMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftMaterial");

	Params::UImage_SetBrushFromSoftMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class UMaterialInterface* UImage::SetBrushFromMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::UImage_SetBrushFromMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromAtlasInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISlateTextureAtlasInterface>AtlasRegion                                                      (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromAtlasInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAtlasInterface");

	Params::UImage_SetBrushFromAtlasInterface_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromAsset
// (Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UImage::SetBrushFromAsset(class USlateBrushAsset** Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::UImage_SetBrushFromAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

}


// Function UMG.Image.SetBrush
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FSlateBrush UImage::SetBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrush");

	Params::UImage_SetBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::UImage_GetDynamicMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.TextLayoutWidget
// (None)

class UClass* UTextLayoutWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextLayoutWidget");

	return Clss;
}


// TextLayoutWidget UMG.Default__TextLayoutWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextLayoutWidget* UTextLayoutWidget::GetDefaultObj()
{
	static class UTextLayoutWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextLayoutWidget*>(UTextLayoutWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextLayoutWidget.SetJustification
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextJustify UTextLayoutWidget::SetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLayoutWidget", "SetJustification");

	Params::UTextLayoutWidget_SetJustification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.RichTextBlock
// (None)

class UClass* URichTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlock");

	return Clss;
}


// RichTextBlock UMG.Default__RichTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlock* URichTextBlock::GetDefaultObj()
{
	static class URichTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlock*>(URichTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.RichTextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (ConstParm, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextTransformPolicy");

	Params::URichTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  NewTextStyleSet                                                  (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextStyleSet");

	Params::URichTextBlock_SetTextStyleSet_Params Parms{};

	Parms.NewTextStyleSet = NewTextStyleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextOverflowPolicy URichTextBlock::SetTextOverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextOverflowPolicy");

	Params::URichTextBlock_SetTextOverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.SetText
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText URichTextBlock::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetText");

	Params::URichTextBlock_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float URichTextBlock::SetMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetMinDesiredWidth");

	Params::URichTextBlock_SetMinDesiredWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.SetDefaultTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InDefaultTextStyle                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultTextStyle");

	Params::URichTextBlock_SetDefaultTextStyle_Params Parms{};

	Parms.InDefaultTextStyle = InDefaultTextStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetDefaultStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultStrikeBrush");

	Params::URichTextBlock_SetDefaultStrikeBrush_Params Parms{};

	Parms.InStrikeBrush = InStrikeBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowOffset");

	Params::URichTextBlock_SetDefaultShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowColorAndOpacity");

	Params::URichTextBlock_SetDefaultShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDefaultMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* URichTextBlock::SetDefaultMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultMaterial");

	Params::URichTextBlock_SetDefaultMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateFontInfo URichTextBlock::SetDefaultFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultFont");

	Params::URichTextBlock_SetDefaultFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");

	Params::URichTextBlock_SetDefaultColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetDecorators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              InDecoratorClasses                                               (ExportObject, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetDecorators(const TArray<class UClass*>& InDecoratorClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDecorators");

	Params::URichTextBlock_SetDecorators_Params Parms{};

	Parms.InDecoratorClasses = InDecoratorClasses;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetAutoWrapText");

	Params::URichTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.RefreshTextLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URichTextBlock::RefreshTextLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "RefreshTextLayout");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetTextStyleSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDataTable* URichTextBlock::GetTextStyleSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetTextStyleSet");

	Params::URichTextBlock_GetTextStyleSet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText URichTextBlock::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetText");

	Params::URichTextBlock_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* URichTextBlock::GetDefaultDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDefaultDynamicMaterial");

	Params::URichTextBlock_GetDefaultDynamicMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      DecoratorClass                                                   (ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)
// class URichTextBlockDecorator*     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(class UClass* DecoratorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDecoratorByClass");

	Params::URichTextBlock_GetDecoratorByClass_Params Parms{};

	Parms.DecoratorClass = DecoratorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// (Final, Native, Public)
// Parameters:

void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "ClearAllDefaultStyleOverrides");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.RichTextBlockDecorator
// (None)

class UClass* URichTextBlockDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlockDecorator");

	return Clss;
}


// RichTextBlockDecorator UMG.Default__RichTextBlockDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlockDecorator* URichTextBlockDecorator::GetDefaultObj()
{
	static class URichTextBlockDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlockDecorator*>(URichTextBlockDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.RichTextBlockImageDecorator
// (None)

class UClass* URichTextBlockImageDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichTextBlockImageDecorator");

	return Clss;
}


// RichTextBlockImageDecorator UMG.Default__RichTextBlockImageDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class URichTextBlockImageDecorator* URichTextBlockImageDecorator::GetDefaultObj()
{
	static class URichTextBlockImageDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<URichTextBlockImageDecorator*>(URichTextBlockImageDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.PanelWidget
// (None)

class UClass* UPanelWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PanelWidget");

	return Clss;
}


// PanelWidget UMG.Default__PanelWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UPanelWidget* UPanelWidget::GetDefaultObj()
{
	static class UPanelWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UPanelWidget*>(UPanelWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPanelWidget::RemoveChildAt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::UPanelWidget_RemoveChildAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPanelWidget::RemoveChild(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::UPanelWidget_RemoveChild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPanelWidget::HasChild(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::UPanelWidget_HasChild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UPanelWidget::HasAnyChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::UPanelWidget_HasAnyChildren_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UPanelWidget::GetChildrenCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::UPanelWidget_GetChildrenCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UPanelWidget::GetChildIndex(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::UPanelWidget_GetChildIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UPanelWidget::GetChildAt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::UPanelWidget_GetChildAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetAllChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UWidget*> UPanelWidget::GetAllChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetAllChildren");

	Params::UPanelWidget_GetAllChildren_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.ClearChildren
// (Native, Public, BlueprintCallable)
// Parameters:

void UPanelWidget::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "ClearChildren");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UPanelSlot*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPanelSlot* UPanelWidget::AddChild(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::UPanelWidget_AddChild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.ContentWidget
// (None)

class UClass* UContentWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ContentWidget");

	return Clss;
}


// ContentWidget UMG.Default__ContentWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UContentWidget* UContentWidget::GetDefaultObj()
{
	static class UContentWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UContentWidget*>(UContentWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UPanelSlot*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPanelSlot* UContentWidget::SetContent(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::UContentWidget_SetContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UPanelSlot* UContentWidget::GetContentSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::UContentWidget_GetContentSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UContentWidget::GetContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContent");

	Params::UContentWidget_GetContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Button
// (None)

class UClass* UButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button");

	return Clss;
}


// Button UMG.Default__Button
// (Public, ClassDefaultObject, ArchetypeObject)

class UButton* UButton::GetDefaultObj()
{
	static class UButton* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton*>(UButton::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Button.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonTouchMethod UButton::SetTouchMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetTouchMethod");

	Params::UButton_SetTouchMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                InStyle                                                          (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FButtonStyle UButton::SetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetStyle");

	Params::UButton_SetStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonPressMethod UButton::SetPressMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetPressMethod");

	Params::UButton_SetPressMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::UButton_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonClickMethod UButton::SetClickMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetClickMethod");

	Params::UButton_SetClickMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FLinearColor UButton::SetBackgroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetBackgroundColor");

	Params::UButton_SetBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.MimickClicked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFromGamepad                                                     (Edit, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

bool UButton::MimickClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "MimickClicked");

	Params::UButton_MimickClicked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UButton::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "IsPressed");

	Params::UButton_IsPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ScrollBox
// (None)

class UClass* UScrollBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBox");

	return Clss;
}


// ScrollBox UMG.Default__ScrollBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBox* UScrollBox::GetDefaultObj()
{
	static class UScrollBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBox*>(UScrollBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBox.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetWheelScrollMultiplier");

	Params::UScrollBox_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollWhenFocusChanges");

	Params::UScrollBox_SetScrollWhenFocusChanges_Params Parms{};

	Parms.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewScrollOffset                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollOffset");

	Params::UScrollBox_SetScrollOffset_Params Parms{};

	Parms.NewScrollOffset = NewScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        NewScrollBarVisibility                                           (ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollBarVisibility");

	Params::UScrollBox_SetScrollBarVisibility_Params Parms{};

	Parms.NewScrollBarVisibility = NewScrollBarVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollbarThickness
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   NewScrollbarThickness                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarThickness");

	Params::UScrollBox_SetScrollbarThickness_Params Parms{};

	Parms.NewScrollbarThickness = NewScrollbarThickness;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetScrollbarPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     NewScrollbarPadding                                              (Edit, ConstParm, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollbarPadding(const struct FMargin& NewScrollbarPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarPadding");

	Params::UScrollBox_SetScrollbarPadding_Params Parms{};

	Parms.NewScrollbarPadding = NewScrollbarPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOrientation            NewOrientation                                                   (Edit, ConstParm, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetOrientation(enum class EOrientation NewOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetOrientation");

	Params::UScrollBox_SetOrientation_Params Parms{};

	Parms.NewOrientation = NewOrientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetNavigationDestination
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDescendantScrollDestinationNewNavigationDestination                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetNavigationDestination");

	Params::UScrollBox_SetNavigationDestination_Params Parms{};

	Parms.NewNavigationDestination = NewNavigationDestination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetConsumeMouseWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConsumeMouseWheel      NewConsumeMouseWheel                                             (Edit, ConstParm, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetConsumeMouseWheel");

	Params::UScrollBox_SetConsumeMouseWheel_Params Parms{};

	Parms.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAnimateWheelScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldAnimateWheelScrolling                                     (BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAnimateWheelScrolling");

	Params::UScrollBox_SetAnimateWheelScrolling_Params Parms{};

	Parms.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAlwaysShowScrollbar                                           (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetAlwaysShowScrollbar(bool* NewAlwaysShowScrollbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");

	Params::UScrollBox_SetAlwaysShowScrollbar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewAlwaysShowScrollbar != nullptr)
		*NewAlwaysShowScrollbar = Parms.NewAlwaysShowScrollbar;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAllowOverscroll                                               (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UScrollBox::SetAllowOverscroll(bool* NewAllowOverscroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAllowOverscroll");

	Params::UScrollBox_SetAllowOverscroll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewAllowOverscroll != nullptr)
		*NewAllowOverscroll = Parms.NewAllowOverscroll;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// bool                               AnimateScroll                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// enum class EDescendantScrollDestinationScrollDestination                                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
// float                              Padding                                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UScrollBox::ScrollWidgetIntoView(class UWidget** WidgetToFind, bool* AnimateScroll, enum class EDescendantScrollDestination* ScrollDestination, float* Padding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::UScrollBox_ScrollWidgetIntoView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (WidgetToFind != nullptr)
		*WidgetToFind = Parms.WidgetToFind;

	if (AnimateScroll != nullptr)
		*AnimateScroll = Parms.AnimateScroll;

	if (ScrollDestination != nullptr)
		*ScrollDestination = Parms.ScrollDestination;

	if (Padding != nullptr)
		*Padding = Parms.Padding;

}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToEnd");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetViewOffsetFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetViewOffsetFraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewOffsetFraction");

	Params::UScrollBox_GetViewOffsetFraction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetViewFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetViewFraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewFraction");

	Params::UScrollBox_GetViewFraction_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetScrollOffsetOfEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");

	Params::UScrollBox_GetScrollOffsetOfEnd_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::UScrollBox_GetScrollOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetScrollMax()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollMax");

	Params::UScrollBox_GetScrollMax_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollContentSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UScrollBox::GetScrollContentSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollContentSize");

	Params::UScrollBox_GetScrollContentSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetPhysicalScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UScrollBox::GetPhysicalScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetPhysicalScrollOffset");

	Params::UScrollBox_GetPhysicalScrollOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.EndInertialScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::EndInertialScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "EndInertialScrolling");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.Border
// (None)

class UClass* UBorder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border");

	return Clss;
}


// Border UMG.Default__Border
// (Public, ClassDefaultObject, ArchetypeObject)

class UBorder* UBorder::GetDefaultObj()
{
	static class UBorder* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder*>(UBorder::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UBorder::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetVerticalAlignment");

	Params::UBorder_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetShowEffectWhenDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShowEffectWhenDisabled                                        (Edit, ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

bool UBorder::SetShowEffectWhenDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetShowEffectWhenDisabled");

	Params::UBorder_SetShowEffectWhenDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UBorder::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetPadding");

	Params::UBorder_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UBorder::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetHorizontalAlignment");

	Params::UBorder_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InScale                                                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, InstancedReference, SubobjectReference)

void UBorder::SetDesiredSizeScale(struct FVector2D* InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::UBorder_SetDesiredSizeScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InScale != nullptr)
		*InScale = std::move(Parms.InScale);

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InContentColorAndOpacity                                         (ConstParm, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FLinearColor UBorder::SetContentColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetContentColorAndOpacity");

	Params::UBorder_SetContentColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2D* UBorder::SetBrushFromTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::UBorder_SetBrushFromTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class UMaterialInterface* UBorder::SetBrushFromMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::UBorder_SetBrushFromMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UBorder::SetBrushFromAsset(class USlateBrushAsset** Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::UBorder_SetBrushFromAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Asset != nullptr)
		*Asset = Parms.Asset;

}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FLinearColor UBorder::SetBrushColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushColor");

	Params::UBorder_SetBrushColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FSlateBrush UBorder::SetBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrush");

	Params::UBorder_SetBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::UBorder_GetDynamicMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.EditableText
// (None)

class UClass* UEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableText");

	return Clss;
}


// EditableText UMG.Default__EditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableText* UEditableText::GetDefaultObj()
{
	static class UEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableText*>(UEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.EditableText.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextOverflowPolicy UEditableText::SetTextOverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetTextOverflowPolicy");

	Params::UEditableText_SetTextOverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableText::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetText");

	Params::UEditableText_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetMinimumDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UEditableText::SetMinimumDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetMinimumDesiredWidth");

	Params::UEditableText_SetMinimumDesiredWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextJustify UEditableText::SetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetJustification");

	Params::UEditableText_SetJustification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UEditableText::SetIsReadOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsReadOnly");

	Params::UEditableText_SetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsPassword                                                    (Edit, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UEditableText::SetIsPassword()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsPassword");

	Params::UEditableText_SetIsPassword_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UEditableText::SetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetHintText");

	Params::UEditableText_SetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UEditableText::SetFontOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontOutlineMaterial");

	Params::UEditableText_SetFontOutlineMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UEditableText::SetFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontMaterial");

	Params::UEditableText_SetFontMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateFontInfo UEditableText::SetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFont");

	Params::UEditableText_SetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UEditableText::OnEditableTextCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UEditableText::OnEditableTextChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetText");

	Params::UEditableText_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ETextJustify UEditableText::GetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetJustification");

	Params::UEditableText_GetJustification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableText::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetHintText");

	Params::UEditableText_GetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateFontInfo UEditableText::GetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetFont");

	Params::UEditableText_GetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.PrimalWordList
// (None)

class UClass* UPrimalWordList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalWordList");

	return Clss;
}


// PrimalWordList UMG.Default__PrimalWordList
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrimalWordList* UPrimalWordList::GetDefaultObj()
{
	static class UPrimalWordList* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalWordList*>(UPrimalWordList::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.NotifyFieldValueChanged
// (None)

class UClass* INotifyFieldValueChanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotifyFieldValueChanged");

	return Clss;
}


// NotifyFieldValueChanged UMG.Default__NotifyFieldValueChanged
// (Public, ClassDefaultObject, ArchetypeObject)

class INotifyFieldValueChanged* INotifyFieldValueChanged::GetDefaultObj()
{
	static class INotifyFieldValueChanged* Default = nullptr;

	if (!Default)
		Default = static_cast<INotifyFieldValueChanged*>(INotifyFieldValueChanged::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ListViewBase
// (None)

class UClass* UListViewBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListViewBase");

	return Clss;
}


// ListViewBase UMG.Default__ListViewBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UListViewBase* UListViewBase::GetDefaultObj()
{
	static class UListViewBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UListViewBase*>(UListViewBase::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ListViewBase.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetWheelScrollMultiplier");

	Params::UListViewBase_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrollOffset                                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UListViewBase::SetScrollOffset(float InScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollOffset");

	Params::UListViewBase_SetScrollOffset_Params Parms{};

	Parms.InScrollOffset = InScrollOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESlateVisibility UListViewBase::SetScrollBarVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollBarVisibility");

	Params::UListViewBase_SetScrollBarVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListViewBase.ScrollToTop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToTop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.ScrollToBottom
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToBottom");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.RequestRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RequestRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RequestRefresh");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.RegenerateAllEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RegenerateAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RegenerateAllEntries");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UListViewBase::GetScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetScrollOffset");

	Params::UListViewBase_GetScrollOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");

	Params::UListViewBase_GetDisplayedEntryWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ListView
// (None)

class UClass* UListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListView");

	return Clss;
}


// ListView UMG.Default__ListView
// (Public, ClassDefaultObject, ArchetypeObject)

class UListView* UListView::GetDefaultObj()
{
	static class UListView* Default = nullptr;

	if (!Default)
		Default = static_cast<UListView*>(UListView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ListView.SetSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESelectionMode          SelectionMode                                                    (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

enum class ESelectionMode UListView::SetSelectionMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectionMode");

	Params::UListView_SetSelectionMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UListView::SetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectedIndex");

	Params::UListView_SetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.ScrollIndexIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UListView::ScrollIndexIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ScrollIndexIntoView");

	Params::UListView_ScrollIndexIntoView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)

class UObject* UListView::RemoveItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "RemoveItem");

	Params::UListView_RemoveItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.OnListItemOuterEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      ItemOuter                                                        (BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

void UListView::OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason* EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemOuterEndPlayed");

	Params::UListView_OnListItemOuterEndPlayed_Params Parms{};

	Parms.ItemOuter = ItemOuter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EndPlayReason != nullptr)
		*EndPlayReason = Parms.EndPlayReason;

}


// Function UMG.ListView.OnListItemEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// enum class EEndPlayReason          EndPlayReason                                                    (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class AActor* UListView::OnListItemEndPlayed(enum class EEndPlayReason* EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemEndPlayed");

	Params::UListView_OnListItemEndPlayed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EndPlayReason != nullptr)
		*EndPlayReason = Parms.EndPlayReason;

	return Parms.ReturnValue;

}


// Function UMG.ListView.NavigateToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UListView::NavigateToIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "NavigateToIndex");

	Params::UListView_NavigateToIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UListView::IsRefreshPending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "IsRefreshPending");

	Params::UListView_IsRefreshPending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UListView::GetNumItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetNumItems");

	Params::UListView_GetNumItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetListItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UObject*> UListView::GetListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetListItems");

	Params::UListView_GetListItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UListView::GetItemAt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetItemAt");

	Params::UListView_GetItemAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UListView::GetIndexForItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetIndexForItem");

	Params::UListView_GetIndexForItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.ClearListItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListView::ClearListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ClearListItems");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_SetSelectedItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)

class UObject* UListView::BP_SetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetSelectedItem");

	Params::UListView_BP_SetSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_SetListItems
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             InListItems                                                      (Edit, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UListView::BP_SetListItems(const TArray<class UObject*>& InListItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetListItems");

	Params::UListView_BP_SetListItems_Params Parms{};

	Parms.InListItems = InListItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_SetItemSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// bool                               bSelected                                                        (BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UListView::BP_SetItemSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetItemSelection");

	Params::UListView_BP_SetItemSelection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_ScrollItemIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)

class UObject* UListView::BP_ScrollItemIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ScrollItemIntoView");

	Params::UListView_BP_ScrollItemIntoView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_NavigateToItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)

class UObject* UListView::BP_NavigateToItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_NavigateToItem");

	Params::UListView_BP_NavigateToItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_IsItemVisible
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UListView::BP_IsItemVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_IsItemVisible");

	Params::UListView_BP_IsItemVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetSelectedItems
// (Final, Native, Private, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>             Items                                                            (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UListView::BP_GetSelectedItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItems");

	Params::UListView_BP_GetSelectedItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetSelectedItem
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UListView::BP_GetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItem");

	Params::UListView_BP_GetSelectedItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetNumItemsSelected
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UListView::BP_GetNumItemsSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetNumItemsSelected");

	Params::UListView_BP_GetNumItemsSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_ClearSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_CancelScrollIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_CancelScrollIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_CancelScrollIntoView");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)

class UObject* UListView::AddItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "AddItem");

	Params::UListView_AddItem_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ListViewDesignerPreviewItem
// (None)

class UClass* UListViewDesignerPreviewItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListViewDesignerPreviewItem");

	return Clss;
}


// ListViewDesignerPreviewItem UMG.Default__ListViewDesignerPreviewItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UListViewDesignerPreviewItem* UListViewDesignerPreviewItem::GetDefaultObj()
{
	static class UListViewDesignerPreviewItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UListViewDesignerPreviewItem*>(UListViewDesignerPreviewItem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.SlateAccessibleWidgetData
// (None)

class UClass* USlateAccessibleWidgetData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateAccessibleWidgetData");

	return Clss;
}


// SlateAccessibleWidgetData UMG.Default__SlateAccessibleWidgetData
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateAccessibleWidgetData* USlateAccessibleWidgetData::GetDefaultObj()
{
	static class USlateAccessibleWidgetData* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateAccessibleWidgetData*>(USlateAccessibleWidgetData::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UserWidgetBlueprint
// (Blueprint)

class UClass* UUserWidgetBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidgetBlueprint");

	return Clss;
}


// UserWidgetBlueprint UMG.Default__UserWidgetBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidgetBlueprint* UUserWidgetBlueprint::GetDefaultObj()
{
	static class UUserWidgetBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidgetBlueprint*>(UUserWidgetBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UserWidgetExtension
// (None)

class UClass* UUserWidgetExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserWidgetExtension");

	return Clss;
}


// UserWidgetExtension UMG.Default__UserWidgetExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserWidgetExtension* UUserWidgetExtension::GetDefaultObj()
{
	static class UUserWidgetExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserWidgetExtension*>(UUserWidgetExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintGeneratedClassExtension
// (None)

class UClass* UWidgetBlueprintGeneratedClassExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClassExtension");

	return Clss;
}


// WidgetBlueprintGeneratedClassExtension UMG.Default__WidgetBlueprintGeneratedClassExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintGeneratedClassExtension* UWidgetBlueprintGeneratedClassExtension::GetDefaultObj()
{
	static class UWidgetBlueprintGeneratedClassExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintGeneratedClassExtension*>(UWidgetBlueprintGeneratedClassExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetFieldNotificationExtension
// (None)

class UClass* UWidgetFieldNotificationExtension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetFieldNotificationExtension");

	return Clss;
}


// WidgetFieldNotificationExtension UMG.Default__WidgetFieldNotificationExtension
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetFieldNotificationExtension* UWidgetFieldNotificationExtension::GetDefaultObj()
{
	static class UWidgetFieldNotificationExtension* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetFieldNotificationExtension*>(UWidgetFieldNotificationExtension::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetNavigation
// (None)

class UClass* UWidgetNavigation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetNavigation");

	return Clss;
}


// WidgetNavigation UMG.Default__WidgetNavigation
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetNavigation* UWidgetNavigation::GetDefaultObj()
{
	static class UWidgetNavigation* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetNavigation*>(UWidgetNavigation::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformPropertySystem
// (None)

class UClass* UMovieScene2DTransformPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformPropertySystem");

	return Clss;
}


// MovieScene2DTransformPropertySystem UMG.Default__MovieScene2DTransformPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformPropertySystem* UMovieScene2DTransformPropertySystem::GetDefaultObj()
{
	static class UMovieScene2DTransformPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformPropertySystem*>(UMovieScene2DTransformPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformSection
// (None)

class UClass* UMovieScene2DTransformSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformSection");

	return Clss;
}


// MovieScene2DTransformSection UMG.Default__MovieScene2DTransformSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformSection* UMovieScene2DTransformSection::GetDefaultObj()
{
	static class UMovieScene2DTransformSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformSection*>(UMovieScene2DTransformSection::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieScene2DTransformTrack
// (None)

class UClass* UMovieScene2DTransformTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieScene2DTransformTrack");

	return Clss;
}


// MovieScene2DTransformTrack UMG.Default__MovieScene2DTransformTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieScene2DTransformTrack* UMovieScene2DTransformTrack::GetDefaultObj()
{
	static class UMovieScene2DTransformTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieScene2DTransformTrack*>(UMovieScene2DTransformTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginPropertySystem
// (None)

class UClass* UMovieSceneMarginPropertySystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginPropertySystem");

	return Clss;
}


// MovieSceneMarginPropertySystem UMG.Default__MovieSceneMarginPropertySystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginPropertySystem* UMovieSceneMarginPropertySystem::GetDefaultObj()
{
	static class UMovieSceneMarginPropertySystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginPropertySystem*>(UMovieSceneMarginPropertySystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginSection
// (None)

class UClass* UMovieSceneMarginSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginSection");

	return Clss;
}


// MovieSceneMarginSection UMG.Default__MovieSceneMarginSection
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginSection* UMovieSceneMarginSection::GetDefaultObj()
{
	static class UMovieSceneMarginSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginSection*>(UMovieSceneMarginSection::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneMarginTrack
// (None)

class UClass* UMovieSceneMarginTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneMarginTrack");

	return Clss;
}


// MovieSceneMarginTrack UMG.Default__MovieSceneMarginTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneMarginTrack* UMovieSceneMarginTrack::GetDefaultObj()
{
	static class UMovieSceneMarginTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneMarginTrack*>(UMovieSceneMarginTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneWidgetMaterialSystem
// (None)

class UClass* UMovieSceneWidgetMaterialSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWidgetMaterialSystem");

	return Clss;
}


// MovieSceneWidgetMaterialSystem UMG.Default__MovieSceneWidgetMaterialSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWidgetMaterialSystem* UMovieSceneWidgetMaterialSystem::GetDefaultObj()
{
	static class UMovieSceneWidgetMaterialSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWidgetMaterialSystem*>(UMovieSceneWidgetMaterialSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.MovieSceneWidgetMaterialTrack
// (None)

class UClass* UMovieSceneWidgetMaterialTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWidgetMaterialTrack");

	return Clss;
}


// MovieSceneWidgetMaterialTrack UMG.Default__MovieSceneWidgetMaterialTrack
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWidgetMaterialTrack* UMovieSceneWidgetMaterialTrack::GetDefaultObj()
{
	static class UMovieSceneWidgetMaterialTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWidgetMaterialTrack*>(UMovieSceneWidgetMaterialTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.UMGSequencePlayer
// (None)

class UClass* UUMGSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMGSequencePlayer");

	return Clss;
}


// UMGSequencePlayer UMG.Default__UMGSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UUMGSequencePlayer* UUMGSequencePlayer::GetDefaultObj()
{
	static class UUMGSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMGSequencePlayer*>(UUMGSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UMGSequencePlayer.SetUserTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InUserTag                                                        (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class FName UUMGSequencePlayer::SetUserTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "SetUserTag");

	Params::UUMGSequencePlayer_SetUserTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UMGSequencePlayer.GetUserTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UUMGSequencePlayer::GetUserTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "GetUserTag");

	Params::UUMGSequencePlayer_GetUserTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.UMGSequenceTickManager
// (None)

class UClass* UUMGSequenceTickManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMGSequenceTickManager");

	return Clss;
}


// UMGSequenceTickManager UMG.Default__UMGSequenceTickManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UUMGSequenceTickManager* UUMGSequenceTickManager::GetDefaultObj()
{
	static class UUMGSequenceTickManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMGSequenceTickManager*>(UUMGSequenceTickManager::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetAnimation
// (None)

class UClass* UWidgetAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimation");

	return Clss;
}


// WidgetAnimation UMG.Default__WidgetAnimation
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimation* UWidgetAnimation::GetDefaultObj()
{
	static class UWidgetAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimation*>(UWidgetAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimation::UnbindFromAnimationStarted(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationStarted");

	Params::UWidgetAnimation_UnbindFromAnimationStarted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimation::UnbindFromAnimationFinished(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationFinished");

	Params::UWidgetAnimation_UnbindFromAnimationFinished_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UUserWidget* UWidgetAnimation::UnbindAllFromAnimationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationStarted");

	Params::UWidgetAnimation_UnbindAllFromAnimationStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UUserWidget* UWidgetAnimation::UnbindAllFromAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationFinished");

	Params::UWidgetAnimation_UnbindAllFromAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetAnimation::GetStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::UWidgetAnimation_GetStartTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetAnimation::GetEndTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::UWidgetAnimation_GetEndTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimation::BindToAnimationStarted(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationStarted");

	Params::UWidgetAnimation_BindToAnimationStarted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimation::BindToAnimationFinished(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationFinished");

	Params::UWidgetAnimation_BindToAnimationFinished_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetAnimationDelegateBinding
// (None)

class UClass* UWidgetAnimationDelegateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimationDelegateBinding");

	return Clss;
}


// WidgetAnimationDelegateBinding UMG.Default__WidgetAnimationDelegateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimationDelegateBinding* UWidgetAnimationDelegateBinding::GetDefaultObj()
{
	static class UWidgetAnimationDelegateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimationDelegateBinding*>(UWidgetAnimationDelegateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetAnimationPlayCallbackProxy
// (None)

class UClass* UWidgetAnimationPlayCallbackProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetAnimationPlayCallbackProxy");

	return Clss;
}


// WidgetAnimationPlayCallbackProxy UMG.Default__WidgetAnimationPlayCallbackProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::GetDefaultObj()
{
	static class UWidgetAnimationPlayCallbackProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetAnimationPlayCallbackProxy*>(UWidgetAnimationPlayCallbackProxy::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              EndAtTime                                                        (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UWidgetAnimation*            InAnimation                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params Parms{};

	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Class UMG.PropertyBinding
// (None)

class UClass* UPropertyBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBinding");

	return Clss;
}


// PropertyBinding UMG.Default__PropertyBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBinding* UPropertyBinding::GetDefaultObj()
{
	static class UPropertyBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBinding*>(UPropertyBinding::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.BoolBinding
// (None)

class UClass* UBoolBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoolBinding");

	return Clss;
}


// BoolBinding UMG.Default__BoolBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoolBinding* UBoolBinding::GetDefaultObj()
{
	static class UBoolBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoolBinding*>(UBoolBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UBoolBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::UBoolBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.BrushBinding
// (None)

class UClass* UBrushBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BrushBinding");

	return Clss;
}


// BrushBinding UMG.Default__BrushBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UBrushBinding* UBrushBinding::GetDefaultObj()
{
	static class UBrushBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UBrushBinding*>(UBrushBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UBrushBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::UBrushBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.CheckedStateBinding
// (None)

class UClass* UCheckedStateBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckedStateBinding");

	return Clss;
}


// CheckedStateBinding UMG.Default__CheckedStateBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckedStateBinding* UCheckedStateBinding::GetDefaultObj()
{
	static class UCheckedStateBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckedStateBinding*>(UCheckedStateBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ECheckBoxState UCheckedStateBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::UCheckedStateBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ColorBinding
// (None)

class UClass* UColorBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ColorBinding");

	return Clss;
}


// ColorBinding UMG.Default__ColorBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UColorBinding* UColorBinding::GetDefaultObj()
{
	static class UColorBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UColorBinding*>(UColorBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateColor UColorBinding::GetSlateValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::UColorBinding_GetSlateValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FLinearColor UColorBinding::GetLinearValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::UColorBinding_GetLinearValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.FloatBinding
// (None)

class UClass* UFloatBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FloatBinding");

	return Clss;
}


// FloatBinding UMG.Default__FloatBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFloatBinding* UFloatBinding::GetDefaultObj()
{
	static class UFloatBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFloatBinding*>(UFloatBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UFloatBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::UFloatBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Int32Binding
// (None)

class UClass* UInt32Binding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Int32Binding");

	return Clss;
}


// Int32Binding UMG.Default__Int32Binding
// (Public, ClassDefaultObject, ArchetypeObject)

class UInt32Binding* UInt32Binding::GetDefaultObj()
{
	static class UInt32Binding* Default = nullptr;

	if (!Default)
		Default = static_cast<UInt32Binding*>(UInt32Binding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UInt32Binding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::UInt32Binding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.MouseCursorBinding
// (None)

class UClass* UMouseCursorBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MouseCursorBinding");

	return Clss;
}


// MouseCursorBinding UMG.Default__MouseCursorBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UMouseCursorBinding* UMouseCursorBinding::GetDefaultObj()
{
	static class UMouseCursorBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UMouseCursorBinding*>(UMouseCursorBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EMouseCursor UMouseCursorBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::UMouseCursorBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.TextBinding
// (None)

class UClass* UTextBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBinding");

	return Clss;
}


// TextBinding UMG.Default__TextBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBinding* UTextBinding::GetDefaultObj()
{
	static class UTextBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBinding*>(UTextBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UTextBinding::GetTextValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::UTextBinding_GetTextValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UTextBinding::GetStringValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::UTextBinding_GetStringValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.VisibilityBinding
// (None)

class UClass* UVisibilityBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VisibilityBinding");

	return Clss;
}


// VisibilityBinding UMG.Default__VisibilityBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UVisibilityBinding* UVisibilityBinding::GetDefaultObj()
{
	static class UVisibilityBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UVisibilityBinding*>(UVisibilityBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ESlateVisibility UVisibilityBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::UVisibilityBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetBinding
// (None)

class UClass* UWidgetBinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBinding");

	return Clss;
}


// WidgetBinding UMG.Default__WidgetBinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBinding* UWidgetBinding::GetDefaultObj()
{
	static class UWidgetBinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBinding*>(UWidgetBinding::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidgetBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::UWidgetBinding_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.AsyncTaskDownloadImage
// (None)

class UClass* UAsyncTaskDownloadImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AsyncTaskDownloadImage");

	return Clss;
}


// AsyncTaskDownloadImage UMG.Default__AsyncTaskDownloadImage
// (Public, ClassDefaultObject, ArchetypeObject)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::GetDefaultObj()
{
	static class UAsyncTaskDownloadImage* Default = nullptr;

	if (!Default)
		Default = static_cast<UAsyncTaskDownloadImage*>(UAsyncTaskDownloadImage::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, EditConst)
// class UAsyncTaskDownloadImage*     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(class FString* URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::UAsyncTaskDownloadImage_DownloadImage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (URL != nullptr)
		*URL = std::move(Parms.URL);

	return Parms.ReturnValue;

}


// Class UMG.GameViewportSubsystem
// (None)

class UClass* UGameViewportSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameViewportSubsystem");

	return Clss;
}


// GameViewportSubsystem UMG.Default__GameViewportSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGameViewportSubsystem* UGameViewportSubsystem::GetDefaultObj()
{
	static class UGameViewportSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameViewportSubsystem*>(UGameViewportSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// struct FVector2D                   Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// bool                               bRemoveDPIScale                                                  (BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(const struct FVector2D& Position, bool* bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotPosition");

	Params::UGameViewportSubsystem_SetWidgetSlotPosition_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bRemoveDPIScale != nullptr)
		*bRemoveDPIScale = Parms.bRemoveDPIScale;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotDesiredSize");

	Params::UGameViewportSubsystem_SetWidgetSlotDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlot");

	Params::UGameViewportSubsystem_SetWidgetSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.RemoveWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UWidget* UGameViewportSubsystem::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "RemoveWidget");

	Params::UGameViewportSubsystem_RemoveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.IsWidgetAdded
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UGameViewportSubsystem::IsWidgetAdded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "IsWidgetAdded");

	Params::UGameViewportSubsystem_IsWidgetAdded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.GetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "GetWidgetSlot");

	Params::UGameViewportSubsystem_GetWidgetSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.AddWidgetForPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class ULocalPlayer*                Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::AddWidgetForPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidgetForPlayer");

	Params::UGameViewportSubsystem_AddWidgetForPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.AddWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FGameViewportWidgetSlot UGameViewportSubsystem::AddWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidget");

	Params::UGameViewportSubsystem_AddWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.UserListEntry
// (None)

class UClass* IUserListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserListEntry");

	return Clss;
}


// UserListEntry UMG.Default__UserListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class IUserListEntry* IUserListEntry::GetDefaultObj()
{
	static class IUserListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<IUserListEntry*>(IUserListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Edit, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");

	Params::IUserListEntry_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

bool IUserListEntry::BP_OnItemExpansionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");

	Params::IUserListEntry_BP_OnItemExpansionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserListEntry.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void IUserListEntry::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Class UMG.UserListEntryLibrary
// (None)

class UClass* UUserListEntryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserListEntryLibrary");

	return Clss;
}


// UserListEntryLibrary UMG.Default__UserListEntryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserListEntryLibrary* UUserListEntryLibrary::GetDefaultObj()
{
	static class UUserListEntryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserListEntryLibrary*>(UUserListEntryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserListEntryLibrary.IsListItemSelected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserListEntryLibrary::IsListItemSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemSelected");

	Params::UUserListEntryLibrary_IsListItemSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UUserListEntryLibrary::IsListItemExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemExpanded");

	Params::UUserListEntryLibrary_IsListItemExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserListEntryLibrary.GetOwningListView
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// class UListViewBase*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UListViewBase* UUserListEntryLibrary::GetOwningListView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "GetOwningListView");

	Params::UUserListEntryLibrary_GetOwningListView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.UserObjectListEntry
// (None)

class UClass* IUserObjectListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserObjectListEntry");

	return Clss;
}


// UserObjectListEntry UMG.Default__UserObjectListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class IUserObjectListEntry* IUserObjectListEntry::GetDefaultObj()
{
	static class IUserObjectListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<IUserObjectListEntry*>(IUserObjectListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserObjectListEntry.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* IUserObjectListEntry::OnListItemObjectSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntry", "OnListItemObjectSet");

	Params::IUserObjectListEntry_OnListItemObjectSet_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class UMG.UserObjectListEntryLibrary
// (None)

class UClass* UUserObjectListEntryLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UserObjectListEntryLibrary");

	return Clss;
}


// UserObjectListEntryLibrary UMG.Default__UserObjectListEntryLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UUserObjectListEntryLibrary* UUserObjectListEntryLibrary::GetDefaultObj()
{
	static class UUserObjectListEntryLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UUserObjectListEntryLibrary*>(UUserObjectListEntryLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserObjectListEntry>UserObjectListEntry                                              (Edit, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UUserObjectListEntryLibrary::GetListItemObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");

	Params::UUserObjectListEntryLibrary_GetListItemObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.BackgroundBlur
// (None)

class UClass* UBackgroundBlur::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlur");

	return Clss;
}


// BackgroundBlur UMG.Default__BackgroundBlur
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlur* UBackgroundBlur::GetDefaultObj()
{
	static class UBackgroundBlur* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlur*>(UBackgroundBlur::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UBackgroundBlur::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetVerticalAlignment");

	Params::UBackgroundBlur_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UBackgroundBlur::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetPadding");

	Params::UBackgroundBlur_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

struct FSlateBrush UBackgroundBlur::SetLowQualityFallbackBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");

	Params::UBackgroundBlur_SetLowQualityFallbackBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UBackgroundBlur::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetHorizontalAlignment");

	Params::UBackgroundBlur_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetCornerRadius
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    InCornerRadius                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector4 UBackgroundBlur::SetCornerRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetCornerRadius");

	Params::UBackgroundBlur_SetCornerRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStrength                                                       (ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UBackgroundBlur::SetBlurStrength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurStrength");

	Params::UBackgroundBlur_SetBlurStrength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBlurRadius                                                     (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UBackgroundBlur::SetBlurRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurRadius");

	Params::UBackgroundBlur_SetBlurRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInApplyAlphaToBlur                                              (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UBackgroundBlur::SetApplyAlphaToBlur()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");

	Params::UBackgroundBlur_SetApplyAlphaToBlur_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.PanelSlot
// (None)

class UClass* UPanelSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PanelSlot");

	return Clss;
}


// PanelSlot UMG.Default__PanelSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UPanelSlot* UPanelSlot::GetDefaultObj()
{
	static class UPanelSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UPanelSlot*>(UPanelSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.BackgroundBlurSlot
// (None)

class UClass* UBackgroundBlurSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BackgroundBlurSlot");

	return Clss;
}


// BackgroundBlurSlot UMG.Default__BackgroundBlurSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UBackgroundBlurSlot* UBackgroundBlurSlot::GetDefaultObj()
{
	static class UBackgroundBlurSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UBackgroundBlurSlot*>(UBackgroundBlurSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UBackgroundBlurSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");

	Params::UBackgroundBlurSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UBackgroundBlurSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetPadding");

	Params::UBackgroundBlurSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UBackgroundBlurSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");

	Params::UBackgroundBlurSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.BorderSlot
// (None)

class UClass* UBorderSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BorderSlot");

	return Clss;
}


// BorderSlot UMG.Default__BorderSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UBorderSlot* UBorderSlot::GetDefaultObj()
{
	static class UBorderSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderSlot*>(UBorderSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UBorderSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetVerticalAlignment");

	Params::UBorderSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UBorderSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetPadding");

	Params::UBorderSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UBorderSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetHorizontalAlignment");

	Params::UBorderSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ButtonSlot
// (None)

class UClass* UButtonSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonSlot");

	return Clss;
}


// ButtonSlot UMG.Default__ButtonSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UButtonSlot* UButtonSlot::GetDefaultObj()
{
	static class UButtonSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonSlot*>(UButtonSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UButtonSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetVerticalAlignment");

	Params::UButtonSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UButtonSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetPadding");

	Params::UButtonSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UButtonSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetHorizontalAlignment");

	Params::UButtonSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.CanvasPanel
// (None)

class UClass* UCanvasPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanvasPanel");

	return Clss;
}


// CanvasPanel UMG.Default__CanvasPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UCanvasPanel* UCanvasPanel::GetDefaultObj()
{
	static class UCanvasPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanvasPanel*>(UCanvasPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CanvasPanel.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UCanvasPanel::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "SetColorAndOpacity");

	Params::UCanvasPanel_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::UCanvasPanel_AddChildToCanvas_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.CanvasPanelSlot
// (None)

class UClass* UCanvasPanelSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanvasPanelSlot");

	return Clss;
}


// CanvasPanelSlot UMG.Default__CanvasPanelSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UCanvasPanelSlot* UCanvasPanelSlot::GetDefaultObj()
{
	static class UCanvasPanelSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UCanvasPanelSlot*>(UCanvasPanelSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InZOrder                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UCanvasPanelSlot::SetZOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetZOrder");

	Params::UCanvasPanelSlot_SetZOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::UCanvasPanelSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FVector2D UCanvasPanelSlot::SetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::UCanvasPanelSlot_SetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InOffset                                                         (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FMargin UCanvasPanelSlot::SetOffsets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetOffsets");

	Params::UCanvasPanelSlot_SetOffsets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMinimumAnchors                                                 (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UCanvasPanelSlot::SetMinimum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMinimum");

	Params::UCanvasPanelSlot_SetMinimum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMaximumAnchors                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UCanvasPanelSlot::SetMaximum()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMaximum");

	Params::UCanvasPanelSlot_SetMaximum_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnchorData                 InLayoutData                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FAnchorData UCanvasPanelSlot::SetLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetLayout");

	Params::UCanvasPanelSlot_SetLayout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbAutoSize                                                      (BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UCanvasPanelSlot::SetAutoSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAutoSize");

	Params::UCanvasPanelSlot_SetAutoSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    InAnchors                                                        (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FAnchors UCanvasPanelSlot::SetAnchors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAnchors");

	Params::UCanvasPanelSlot_SetAnchors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InAlignment                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UCanvasPanelSlot::SetAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAlignment");

	Params::UCanvasPanelSlot_SetAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UCanvasPanelSlot::GetZOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::UCanvasPanelSlot_GetZOrder_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UCanvasPanelSlot::GetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::UCanvasPanelSlot_GetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::UCanvasPanelSlot_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::UCanvasPanelSlot_GetOffsets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::UCanvasPanelSlot_GetLayout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCanvasPanelSlot::GetAutoSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::UCanvasPanelSlot_GetAutoSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::UCanvasPanelSlot_GetAnchors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::UCanvasPanelSlot_GetAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.CheckBox
// (None)

class UClass* UCheckBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheckBox");

	return Clss;
}


// CheckBox UMG.Default__CheckBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UCheckBox* UCheckBox::GetDefaultObj()
{
	static class UCheckBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheckBox*>(UCheckBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CheckBox.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonTouchMethod UCheckBox::SetTouchMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetTouchMethod");

	Params::UCheckBox_SetTouchMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (ConstParm, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonPressMethod UCheckBox::SetPressMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetPressMethod");

	Params::UCheckBox_SetPressMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UCheckBox::SetIsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetIsChecked");

	Params::UCheckBox_SetIsChecked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

enum class EButtonClickMethod UCheckBox::SetClickMethod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetClickMethod");

	Params::UCheckBox_SetClickMethod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class ECheckBoxState UCheckBox::SetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetCheckedState");

	Params::UCheckBox_SetCheckedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCheckBox::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::UCheckBox_IsPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UCheckBox::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::UCheckBox_IsChecked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class ECheckBoxState UCheckBox::GetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::UCheckBox_GetCheckedState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.CircularThrobber
// (None)

class UClass* UCircularThrobber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircularThrobber");

	return Clss;
}


// CircularThrobber UMG.Default__CircularThrobber
// (Public, ClassDefaultObject, ArchetypeObject)

class UCircularThrobber* UCircularThrobber::GetDefaultObj()
{
	static class UCircularThrobber* Default = nullptr;

	if (!Default)
		Default = static_cast<UCircularThrobber*>(UCircularThrobber::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCircularThrobber::SetRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetRadius");

	Params::UCircularThrobber_SetRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPeriod                                                         (BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UCircularThrobber::SetPeriod()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetPeriod");

	Params::UCircularThrobber_SetPeriod_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UCircularThrobber::SetNumberOfPieces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetNumberOfPieces");

	Params::UCircularThrobber_SetNumberOfPieces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ComboBox
// (None)

class UClass* UComboBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBox");

	return Clss;
}


// ComboBox UMG.Default__ComboBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBox* UComboBox::GetDefaultObj()
{
	static class UComboBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBox*>(UComboBox::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ComboBoxKey
// (None)

class UClass* UComboBoxKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxKey");

	return Clss;
}


// ComboBoxKey UMG.Default__ComboBoxKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxKey* UComboBoxKey::GetDefaultObj()
{
	static class UComboBoxKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxKey*>(UComboBoxKey::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ComboBoxKey.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FName UComboBoxKey::SetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "SetSelectedOption");

	Params::UComboBoxKey_SetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxKey.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UComboBoxKey::RemoveOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "RemoveOption");

	Params::UComboBoxKey_RemoveOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        SelectedItem                                                     (Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESelectInfo UComboBoxKey::OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxKey::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.ComboBoxKey.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UComboBoxKey::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "IsOpen");

	Params::UComboBoxKey_IsOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxKey.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UComboBoxKey::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GetSelectedOption");

	Params::UComboBoxKey_GetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FName                        Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UComboBoxKey::GenerateWidgetEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GenerateWidgetEvent__DelegateSignature");

	Params::UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxKey.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FName UComboBoxKey::AddOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "AddOption");

	Params::UComboBoxKey_AddOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ComboBoxString
// (None)

class UClass* UComboBoxString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComboBoxString");

	return Clss;
}


// ComboBoxString UMG.Default__ComboBoxString
// (Public, ClassDefaultObject, ArchetypeObject)

class UComboBoxString* UComboBoxString::GetDefaultObj()
{
	static class UComboBoxString* Default = nullptr;

	if (!Default)
		Default = static_cast<UComboBoxString*>(UComboBoxString::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FString UComboBoxString::SetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::UComboBoxString_SetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// enum class ESelectInfo             SelectInfo                                                       (Edit, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESelectInfo UComboBoxString::SetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedIndex");

	Params::UComboBoxString_SetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UComboBoxString::RemoveOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::UComboBoxString_RemoveOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::RefreshOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RefreshOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      SelectedItem                                                     (Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESelectInfo UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnOpeningEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction UMG.ComboBoxString.OnClosingEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnClosingEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnClosingEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.ComboBoxString.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UComboBoxString::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "IsOpen");

	Params::UComboBoxString_IsOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UComboBoxString::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::UComboBoxString_GetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UComboBoxString::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedIndex");

	Params::UComboBoxString_GetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UComboBoxString::GetOptionCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::UComboBoxString_GetOptionCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UComboBoxString::GetOptionAtIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::UComboBoxString_GetOptionAtIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UComboBoxString::FindOptionIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::UComboBoxString_FindOptionIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearSelection");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearOptions");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FString UComboBoxString::AddOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::UComboBoxString_AddOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.DynamicEntryBoxBase
// (None)

class UClass* UDynamicEntryBoxBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicEntryBoxBase");

	return Clss;
}


// DynamicEntryBoxBase UMG.Default__DynamicEntryBoxBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicEntryBoxBase* UDynamicEntryBoxBase::GetDefaultObj()
{
	static class UDynamicEntryBoxBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicEntryBoxBase*>(UDynamicEntryBoxBase::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRadialBoxSettings          InSettings                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

struct FRadialBoxSettings UDynamicEntryBoxBase::SetRadialSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetRadialSettings");

	Params::UDynamicEntryBoxBase_SetRadialSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InEntrySpacing                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D UDynamicEntryBoxBase::SetEntrySpacing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetEntrySpacing");

	Params::UDynamicEntryBoxBase_SetEntrySpacing_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBoxBase.GetNumEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UDynamicEntryBoxBase::GetNumEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetNumEntries");

	Params::UDynamicEntryBoxBase_GetNumEntries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetAllEntries");

	Params::UDynamicEntryBoxBase_GetAllEntries_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.DynamicEntryBox
// (None)

class UClass* UDynamicEntryBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicEntryBox");

	return Clss;
}


// DynamicEntryBox UMG.Default__DynamicEntryBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicEntryBox* UDynamicEntryBox::GetDefaultObj()
{
	static class UDynamicEntryBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicEntryBox*>(UDynamicEntryBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DynamicEntryBox.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDeleteWidgets                                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UDynamicEntryBox::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "Reset");

	Params::UDynamicEntryBox_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBox.RemoveEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 EntryWidget                                                      (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UUserWidget* UDynamicEntryBox::RemoveEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "RemoveEntry");

	Params::UDynamicEntryBox_RemoveEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UClass*                      EntryClass                                                       (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");

	Params::UDynamicEntryBox_BP_CreateEntryOfClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntry");

	Params::UDynamicEntryBox_BP_CreateEntry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.EditableTextBox
// (None)

class UClass* UEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditableTextBox");

	return Clss;
}


// EditableTextBox UMG.Default__EditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditableTextBox* UEditableTextBox::GetDefaultObj()
{
	static class UEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditableTextBox*>(UEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.EditableTextBox.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextOverflowPolicy UEditableTextBox::SetTextOverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetTextOverflowPolicy");

	Params::UEditableTextBox_SetTextOverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableTextBox::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::UEditableTextBox_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextJustify UEditableTextBox::SetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetJustification");

	Params::UEditableTextBox_SetJustification_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsReadOnly");

	Params::UEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPassword                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsPassword");

	Params::UEditableTextBox_SetIsPassword_Params Parms{};

	Parms.bIsPassword = bIsPassword;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableTextBox::SetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetHintText");

	Params::UEditableTextBox_SetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UEditableTextBox::SetForegroundColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetForegroundColor");

	Params::UEditableTextBox_SetForegroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::UEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UEditableTextBox::HasError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::UEditableTextBox_HasError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UEditableTextBox::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::UEditableTextBox_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableTextBox::ClearError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "ClearError");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.ExpandableArea
// (None)

class UClass* UExpandableArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExpandableArea");

	return Clss;
}


// ExpandableArea UMG.Default__ExpandableArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UExpandableArea* UExpandableArea::GetDefaultObj()
{
	static class UExpandableArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UExpandableArea*>(UExpandableArea::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate)

bool UExpandableArea::SetIsExpanded_Animated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded_Animated");

	Params::UExpandableArea_SetIsExpanded_Animated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate)

bool UExpandableArea::SetIsExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded");

	Params::UExpandableArea_SetIsExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UExpandableArea::GetIsExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::UExpandableArea_GetIsExpanded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.GridPanel
// (None)

class UClass* UGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridPanel");

	return Clss;
}


// GridPanel UMG.Default__GridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridPanel* UGridPanel::GetDefaultObj()
{
	static class UGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridPanel*>(UGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GridPanel.SetRowFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RowIndex                                                         (ConstParm, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Coefficient                                                      (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UGridPanel::SetRowFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetRowFill");

	Params::UGridPanel_SetRowFill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GridPanel.SetColumnFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ColumnIndex                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              Coefficient                                                      (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UGridPanel::SetColumnFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetColumnFill");

	Params::UGridPanel_SetColumnFill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// int32                              InRow                                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InColumn                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UGridSlot*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::UGridPanel_AddChildToGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.GridSlot
// (None)

class UClass* UGridSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GridSlot");

	return Clss;
}


// GridSlot UMG.Default__GridSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UGridSlot* UGridSlot::GetDefaultObj()
{
	static class UGridSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UGridSlot*>(UGridSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UGridSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetVerticalAlignment");

	Params::UGridSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRowSpan                                                        (ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UGridSlot::SetRowSpan(int32 InRowSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRowSpan");

	Params::UGridSlot_SetRowSpan_Params Parms{};

	Parms.InRowSpan = InRowSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UGridSlot::SetRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRow");

	Params::UGridSlot_SetRow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UGridSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetPadding");

	Params::UGridSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.GridSlot.SetNudge
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InNudge                                                          (Edit, ConstParm, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetNudge");

	Params::UGridSlot_SetNudge_Params Parms{};

	Parms.InNudge = InNudge;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InLayer                                                          (ConstParm, BlueprintVisible, ExportObject, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UGridSlot::SetLayer(int32 InLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetLayer");

	Params::UGridSlot_SetLayer_Params Parms{};

	Parms.InLayer = InLayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UGridSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetHorizontalAlignment");

	Params::UGridSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumnSpan                                                     (Edit, ConstParm, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UGridSlot::SetColumnSpan(int32 InColumnSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumnSpan");

	Params::UGridSlot_SetColumnSpan_Params Parms{};

	Parms.InColumnSpan = InColumnSpan;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UGridSlot::SetColumn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::UGridSlot_SetColumn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.HorizontalBox
// (None)

class UClass* UHorizontalBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalBox");

	return Clss;
}


// HorizontalBox UMG.Default__HorizontalBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UHorizontalBox* UHorizontalBox::GetDefaultObj()
{
	static class UHorizontalBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalBox*>(UHorizontalBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UHorizontalBoxSlot*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::UHorizontalBox_AddChildToHorizontalBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.HorizontalBoxSlot
// (None)

class UClass* UHorizontalBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalBoxSlot");

	return Clss;
}


// HorizontalBoxSlot UMG.Default__HorizontalBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UHorizontalBoxSlot* UHorizontalBoxSlot::GetDefaultObj()
{
	static class UHorizontalBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalBoxSlot*>(UHorizontalBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UHorizontalBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");

	Params::UHorizontalBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::UHorizontalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UHorizontalBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetPadding");

	Params::UHorizontalBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UHorizontalBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");

	Params::UHorizontalBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.InputKeySelector
// (None)

class UClass* UInputKeySelector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputKeySelector");

	return Clss;
}


// InputKeySelector UMG.Default__InputKeySelector
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputKeySelector* UInputKeySelector::GetDefaultObj()
{
	static class UInputKeySelector* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputKeySelector*>(UInputKeySelector::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ESlateVisibility UInputKeySelector::SetTextBlockVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetTextBlockVisibility");

	Params::UInputKeySelector_SetTextBlockVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputChord                 InSelectedKey                                                    (BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FInputChord UInputKeySelector::SetSelectedKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetSelectedKey");

	Params::UInputKeySelector_SetSelectedKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InNoKeySpecifiedText                                             (Edit, EditFixedSize, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UInputKeySelector::SetNoKeySpecifiedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetNoKeySpecifiedText");

	Params::UInputKeySelector_SetNoKeySpecifiedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InKeySelectionText                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UInputKeySelector::SetKeySelectionText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetKeySelectionText");

	Params::UInputKeySelector_SetKeySelectionText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetEscapeKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FKey>                InKeys                                                           (Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

TArray<struct FKey> UInputKeySelector::SetEscapeKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetEscapeKeys");

	Params::UInputKeySelector_SetEscapeKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowModifierKeys                                             (ExportObject, Net, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UInputKeySelector::SetAllowModifierKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowModifierKeys");

	Params::UInputKeySelector_SetAllowModifierKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowGamepadKeys                                              (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UInputKeySelector::SetAllowGamepadKeys()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowGamepadKeys");

	Params::UInputKeySelector_SetAllowGamepadKeys_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

struct FInputChord UInputKeySelector::OnKeySelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");

	Params::UInputKeySelector_OnKeySelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnIsSelectingKeyChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UInputKeySelector::GetIsSelectingKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::UInputKeySelector_GetIsSelectingKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.InvalidationBox
// (None)

class UClass* UInvalidationBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InvalidationBox");

	return Clss;
}


// InvalidationBox UMG.Default__InvalidationBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UInvalidationBox* UInvalidationBox::GetDefaultObj()
{
	static class UInvalidationBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UInvalidationBox*>(UInvalidationBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               CanCache                                                         (Edit, BlueprintReadOnly, Net, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "SetCanCache");

	Params::UInvalidationBox_SetCanCache_Params Parms{};

	Parms.CanCache = CanCache;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInvalidationBox::InvalidateCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "InvalidateCache");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UInvalidationBox::GetCanCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::UInvalidationBox_GetCanCache_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.MenuAnchor
// (None)

class UClass* UMenuAnchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuAnchor");

	return Clss;
}


// MenuAnchor UMG.Default__MenuAnchor
// (Public, ClassDefaultObject, ArchetypeObject)

class UMenuAnchor* UMenuAnchor::GetDefaultObj()
{
	static class UMenuAnchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuAnchor*>(UMenuAnchor::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusOnOpen                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UMenuAnchor::ToggleOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ToggleOpen");

	Params::UMenuAnchor_ToggleOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMenuAnchor::ShouldOpenDueToClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::UMenuAnchor_ShouldOpenDueToClick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.SetPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMenuPlacement          InPlacement                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class EMenuPlacement UMenuAnchor::SetPlacement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "SetPlacement");

	Params::UMenuAnchor_SetPlacement_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.SetIgnoreClicksOutside
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Ignore                                                           (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UMenuAnchor::SetIgnoreClicksOutside()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "SetIgnoreClicksOutside");

	Params::UMenuAnchor_SetIgnoreClicksOutside_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusMenu                                                       (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UMenuAnchor::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Open");

	Params::UMenuAnchor_Open_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMenuAnchor::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::UMenuAnchor_IsOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMenuAnchor::HasOpenSubMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::UMenuAnchor_HasOpenSubMenus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetUserWidget__DelegateSignature");

	Params::UMenuAnchor_GetUserWidget__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::UMenuAnchor_GetMenuPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.GetIsMenuAnchorOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMenuAnchor::GetIsMenuAnchorOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIsMenuAnchorOpen");

	Params::UMenuAnchor_GetIsMenuAnchorOpen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.GetIgnoreClicksOutside
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UMenuAnchor::GetIgnoreClicksOutside()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIgnoreClicksOutside");

	Params::UMenuAnchor_GetIgnoreClicksOutside_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.FitInWindow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFit                                                             (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UMenuAnchor::FitInWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "FitInWindow");

	Params::UMenuAnchor_FitInWindow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMenuAnchor::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Close");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.MultiLineEditableText
// (None)

class UClass* UMultiLineEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiLineEditableText");

	return Clss;
}


// MultiLineEditableText UMG.Default__MultiLineEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiLineEditableText* UMultiLineEditableText::GetDefaultObj()
{
	static class UMultiLineEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiLineEditableText*>(UMultiLineEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MultiLineEditableText.SetWidgetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InWidgetStyle                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UMultiLineEditableText::SetWidgetStyle(struct FTextBlockStyle* InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetWidgetStyle");

	Params::UMultiLineEditableText_SetWidgetStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InWidgetStyle != nullptr)
		*InWidgetStyle = std::move(Parms.InWidgetStyle);

}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableText::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::UMultiLineEditableText_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetIsReadOnly");

	Params::UMultiLineEditableText_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UMultiLineEditableText::SetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetHintText");

	Params::UMultiLineEditableText_SetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UMultiLineEditableText::SetFontOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontOutlineMaterial");

	Params::UMultiLineEditableText_SetFontOutlineMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UMultiLineEditableText::SetFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontMaterial");

	Params::UMultiLineEditableText_SetFontMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateFontInfo UMultiLineEditableText::SetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFont");

	Params::UMultiLineEditableText_SetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::UMultiLineEditableText_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableText::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetHintText");

	Params::UMultiLineEditableText_GetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateFontInfo UMultiLineEditableText::GetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetFont");

	Params::UMultiLineEditableText_GetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.MultiLineEditableTextBox
// (None)

class UClass* UMultiLineEditableTextBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiLineEditableTextBox");

	return Clss;
}


// MultiLineEditableTextBox UMG.Default__MultiLineEditableTextBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UMultiLineEditableTextBox* UMultiLineEditableTextBox::GetDefaultObj()
{
	static class UMultiLineEditableTextBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiLineEditableTextBox*>(UMultiLineEditableTextBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.MultiLineEditableTextBox.SetTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InTextStyle                                                      (Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FTextBlockStyle UMultiLineEditableTextBox::SetTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetTextStyle");

	Params::UMultiLineEditableTextBox_SetTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableTextBox::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::UMultiLineEditableTextBox_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");

	Params::UMultiLineEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Edit, ConstParm, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class FText UMultiLineEditableTextBox::SetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetHintText");

	Params::UMultiLineEditableTextBox_SetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (Edit, ConstParm, BlueprintReadOnly, Net, OutParm)

void UMultiLineEditableTextBox::SetForegroundColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetForegroundColor");

	Params::UMultiLineEditableTextBox_SetForegroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UMultiLineEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::UMultiLineEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FText UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableTextBox::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::UMultiLineEditableTextBox_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UMultiLineEditableTextBox::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetHintText");

	Params::UMultiLineEditableTextBox_GetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.NamedSlot
// (None)

class UClass* UNamedSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedSlot");

	return Clss;
}


// NamedSlot UMG.Default__NamedSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UNamedSlot* UNamedSlot::GetDefaultObj()
{
	static class UNamedSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UNamedSlot*>(UNamedSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.NamedSlotInterface
// (None)

class UClass* INamedSlotInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedSlotInterface");

	return Clss;
}


// NamedSlotInterface UMG.Default__NamedSlotInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class INamedSlotInterface* INamedSlotInterface::GetDefaultObj()
{
	static class INamedSlotInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<INamedSlotInterface*>(INamedSlotInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.NativeWidgetHost
// (None)

class UClass* UNativeWidgetHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NativeWidgetHost");

	return Clss;
}


// NativeWidgetHost UMG.Default__NativeWidgetHost
// (Public, ClassDefaultObject, ArchetypeObject)

class UNativeWidgetHost* UNativeWidgetHost::GetDefaultObj()
{
	static class UNativeWidgetHost* Default = nullptr;

	if (!Default)
		Default = static_cast<UNativeWidgetHost*>(UNativeWidgetHost::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.Overlay
// (None)

class UClass* UOverlay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overlay");

	return Clss;
}


// Overlay UMG.Default__Overlay
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlay* UOverlay::GetDefaultObj()
{
	static class UOverlay* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlay*>(UOverlay::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Overlay.ReplaceOverlayChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UOverlay::ReplaceOverlayChildAt(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "ReplaceOverlayChildAt");

	Params::UOverlay_ReplaceOverlayChildAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UOverlaySlot*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::UOverlay_AddChildToOverlay_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.OverlaySlot
// (None)

class UClass* UOverlaySlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OverlaySlot");

	return Clss;
}


// OverlaySlot UMG.Default__OverlaySlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UOverlaySlot* UOverlaySlot::GetDefaultObj()
{
	static class UOverlaySlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlaySlot*>(UOverlaySlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UOverlaySlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetVerticalAlignment");

	Params::UOverlaySlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UOverlaySlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetPadding");

	Params::UOverlaySlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UOverlaySlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetHorizontalAlignment");

	Params::UOverlaySlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ProgressBar
// (None)

class UClass* UProgressBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProgressBar");

	return Clss;
}


// ProgressBar UMG.Default__ProgressBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UProgressBar* UProgressBar::GetDefaultObj()
{
	static class UProgressBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UProgressBar*>(UProgressBar::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ProgressBar.SetPercentInterpolationKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InterpKey                                                        (Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UProgressBar::SetPercentInterpolationKey(int32* InterpKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetPercentInterpolationKey");

	Params::UProgressBar_SetPercentInterpolationKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InterpKey != nullptr)
		*InterpKey = Parms.InterpKey;

}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InterpKey                                                        (Edit, BlueprintVisible, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UProgressBar::SetPercent(int32* InterpKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetPercent");

	Params::UProgressBar_SetPercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InterpKey != nullptr)
		*InterpKey = Parms.InterpKey;

	return Parms.ReturnValue;

}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsMarquee                                                     (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::UProgressBar_SetIsMarquee_Params Parms{};

	Parms.InbIsMarquee = InbIsMarquee;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UProgressBar::SetFillColorAndOpacity(struct FLinearColor* InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetFillColorAndOpacity");

	Params::UProgressBar_SetFillColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColor != nullptr)
		*InColor = std::move(Parms.InColor);

}


// Function UMG.ProgressBar.SetEnginePercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

float UProgressBar::SetEnginePercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetEnginePercent");

	Params::UProgressBar_SetEnginePercent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.RetainerBox
// (None)

class UClass* URetainerBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RetainerBox");

	return Clss;
}


// RetainerBox UMG.Default__RetainerBox
// (Public, ClassDefaultObject, ArchetypeObject)

class URetainerBox* URetainerBox::GetDefaultObj()
{
	static class URetainerBox* Default = nullptr;

	if (!Default)
		Default = static_cast<URetainerBox*>(URetainerBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParameter                                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void URetainerBox::SetTextureParameter(class FName* TextureParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetTextureParameter");

	Params::URetainerBox_SetTextureParameter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TextureParameter != nullptr)
		*TextureParameter = Parms.TextureParameter;

}


// Function UMG.RetainerBox.SetRetainRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRetainRendering                                               (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void URetainerBox::SetRetainRendering(bool* bInRetainRendering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRetainRendering");

	Params::URetainerBox_SetRetainRendering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInRetainRendering != nullptr)
		*bInRetainRendering = Parms.bInRetainRendering;

}


// Function UMG.RetainerBox.SetRenderingPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RenderPhase                                                      (Edit, BlueprintVisible, ExportObject, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              TotalPhases                                                      (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void URetainerBox::SetRenderingPhase(int32* RenderPhase, int32* TotalPhases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRenderingPhase");

	Params::URetainerBox_SetRenderingPhase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RenderPhase != nullptr)
		*RenderPhase = Parms.RenderPhase;

	if (TotalPhases != nullptr)
		*TotalPhases = Parms.TotalPhases;

}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          EffectMaterial                                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void URetainerBox::SetEffectMaterial(class UMaterialInterface** EffectMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetEffectMaterial");

	Params::URetainerBox_SetEffectMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EffectMaterial != nullptr)
		*EffectMaterial = Parms.EffectMaterial;

}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URetainerBox::RequestRender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "RequestRender");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::URetainerBox_GetEffectMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.SafeZone
// (None)

class UClass* USafeZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZone");

	return Clss;
}


// SafeZone UMG.Default__SafeZone
// (Public, ClassDefaultObject, ArchetypeObject)

class USafeZone* USafeZone::GetDefaultObj()
{
	static class USafeZone* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZone*>(USafeZone::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SafeZone.SetSidesToPad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InPadLeft                                                        (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               InPadRight                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               InPadTop                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               InPadBottom                                                      (ExportObject, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USafeZone::SetSidesToPad(bool* InPadLeft, bool* InPadRight, bool* InPadTop, bool* InPadBottom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZone", "SetSidesToPad");

	Params::USafeZone_SetSidesToPad_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadLeft != nullptr)
		*InPadLeft = Parms.InPadLeft;

	if (InPadRight != nullptr)
		*InPadRight = Parms.InPadRight;

	if (InPadTop != nullptr)
		*InPadTop = Parms.InPadTop;

	if (InPadBottom != nullptr)
		*InPadBottom = Parms.InPadBottom;

}


// Class UMG.SafeZoneSlot
// (None)

class UClass* USafeZoneSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SafeZoneSlot");

	return Clss;
}


// SafeZoneSlot UMG.Default__SafeZoneSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class USafeZoneSlot* USafeZoneSlot::GetDefaultObj()
{
	static class USafeZoneSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<USafeZoneSlot*>(USafeZoneSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.ScaleBox
// (None)

class UClass* UScaleBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleBox");

	return Clss;
}


// ScaleBox UMG.Default__ScaleBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleBox* UScaleBox::GetDefaultObj()
{
	static class UScaleBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleBox*>(UScaleBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InUserSpecifiedScale                                             (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UScaleBox::SetUserSpecifiedScale(float* InUserSpecifiedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::UScaleBox_SetUserSpecifiedScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InUserSpecifiedScale != nullptr)
		*InUserSpecifiedScale = Parms.InUserSpecifiedScale;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretchDirection       InStretchDirection                                               (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UScaleBox::SetStretchDirection(enum class EStretchDirection* InStretchDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::UScaleBox_SetStretchDirection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStretchDirection != nullptr)
		*InStretchDirection = Parms.InStretchDirection;

}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretch                InStretch                                                        (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UScaleBox::SetStretch(enum class EStretch* InStretch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::UScaleBox_SetStretch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InStretch != nullptr)
		*InStretch = Parms.InStretch;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIgnoreInheritedScale                                          (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UScaleBox::SetIgnoreInheritedScale(bool* bInIgnoreInheritedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetIgnoreInheritedScale");

	Params::UScaleBox_SetIgnoreInheritedScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInIgnoreInheritedScale != nullptr)
		*bInIgnoreInheritedScale = Parms.bInIgnoreInheritedScale;

}


// Class UMG.ScaleBoxSlot
// (None)

class UClass* UScaleBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScaleBoxSlot");

	return Clss;
}


// ScaleBoxSlot UMG.Default__ScaleBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UScaleBoxSlot* UScaleBoxSlot::GetDefaultObj()
{
	static class UScaleBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UScaleBoxSlot*>(UScaleBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UScaleBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");

	Params::UScaleBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UScaleBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetPadding");

	Params::UScaleBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UScaleBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");

	Params::UScaleBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.ScrollBar
// (None)

class UClass* UScrollBar::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBar");

	return Clss;
}


// ScrollBar UMG.Default__ScrollBar
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBar* UScrollBar::GetDefaultObj()
{
	static class UScrollBar* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBar*>(UScrollBar::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOffsetFraction                                                 (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              InThumbSizeFraction                                              (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UScrollBar::SetState(float* InOffsetFraction, float* InThumbSizeFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBar", "SetState");

	Params::UScrollBar_SetState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOffsetFraction != nullptr)
		*InOffsetFraction = Parms.InOffsetFraction;

	if (InThumbSizeFraction != nullptr)
		*InThumbSizeFraction = Parms.InThumbSizeFraction;

}


// Class UMG.ScrollBoxSlot
// (None)

class UClass* UScrollBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScrollBoxSlot");

	return Clss;
}


// ScrollBoxSlot UMG.Default__ScrollBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UScrollBoxSlot* UScrollBoxSlot::GetDefaultObj()
{
	static class UScrollBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UScrollBoxSlot*>(UScrollBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.ScrollBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UScrollBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetVerticalAlignment");

	Params::UScrollBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UScrollBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetPadding");

	Params::UScrollBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UScrollBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");

	Params::UScrollBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.SizeBox
// (None)

class UClass* USizeBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SizeBox");

	return Clss;
}


// SizeBox UMG.Default__SizeBox
// (Public, ClassDefaultObject, ArchetypeObject)

class USizeBox* USizeBox::GetDefaultObj()
{
	static class USizeBox* Default = nullptr;

	if (!Default)
		Default = static_cast<USizeBox*>(USizeBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InWidthOverride                                                  (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetWidthOverride");

	Params::USizeBox_SetWidthOverride_Params Parms{};

	Parms.InWidthOverride = InWidthOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float USizeBox::SetMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredWidth");

	Params::USizeBox_SetMinDesiredWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredHeight                                               (Edit, ConstParm, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredHeight");

	Params::USizeBox_SetMinDesiredHeight_Params Parms{};

	Parms.InMinDesiredHeight = InMinDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinAspectRatio                                                 (ConstParm, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinAspectRatio");

	Params::USizeBox_SetMinAspectRatio_Params Parms{};

	Parms.InMinAspectRatio = InMinAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredWidth                                                (ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredWidth");

	Params::USizeBox_SetMaxDesiredWidth_Params Parms{};

	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredHeight                                               (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredHeight");

	Params::USizeBox_SetMaxDesiredHeight_Params Parms{};

	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxAspectRatio                                                 (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxAspectRatio");

	Params::USizeBox_SetMaxAspectRatio_Params Parms{};

	Parms.InMaxAspectRatio = InMaxAspectRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHeightOverride                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetHeightOverride");

	Params::USizeBox_SetHeightOverride_Params Parms{};

	Parms.InHeightOverride = InHeightOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearWidthOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredWidth");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredHeight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinAspectRatio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredWidth");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredHeight");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxAspectRatio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearHeightOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearHeightOverride");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SizeBoxSlot
// (None)

class UClass* USizeBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SizeBoxSlot");

	return Clss;
}


// SizeBoxSlot UMG.Default__SizeBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class USizeBoxSlot* USizeBoxSlot::GetDefaultObj()
{
	static class USizeBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<USizeBoxSlot*>(USizeBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment USizeBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetVerticalAlignment");

	Params::USizeBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void USizeBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetPadding");

	Params::USizeBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment USizeBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");

	Params::USizeBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Slider
// (None)

class UClass* USlider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Slider");

	return Clss;
}


// Slider UMG.Default__Slider
// (Public, ClassDefaultObject, ArchetypeObject)

class USlider* USlider::GetDefaultObj()
{
	static class USlider* Default = nullptr;

	if (!Default)
		Default = static_cast<USlider*>(USlider::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USlider::SetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetValue");

	Params::USlider_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USlider::SetStepSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetStepSize");

	Params::USlider_SetStepSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor USlider::SetSliderHandleColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderHandleColor");

	Params::USlider_SetSliderHandleColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor USlider::SetSliderBarColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderBarColor");

	Params::USlider_SetSliderBarColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USlider::SetMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMinValue");

	Params::USlider_SetMinValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USlider::SetMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMaxValue");

	Params::USlider_SetMaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool USlider::SetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetLocked");

	Params::USlider_SetLocked_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool USlider::SetIndentHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetIndentHandle");

	Params::USlider_SetIndentHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetValue");

	Params::USlider_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Slider.GetNormalizedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USlider::GetNormalizedValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetNormalizedValue");

	Params::USlider_GetNormalizedValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Spacer
// (None)

class UClass* USpacer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Spacer");

	return Clss;
}


// Spacer UMG.Default__Spacer
// (Public, ClassDefaultObject, ArchetypeObject)

class USpacer* USpacer::GetDefaultObj()
{
	static class USpacer* Default = nullptr;

	if (!Default)
		Default = static_cast<USpacer*>(USpacer::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spacer", "SetSize");

	Params::USpacer_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class UMG.SpinBox
// (None)

class UClass* USpinBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpinBox");

	return Clss;
}


// SpinBox UMG.Default__SpinBox
// (Public, ClassDefaultObject, ArchetypeObject)

class USpinBox* USpinBox::GetDefaultObj()
{
	static class USpinBox* Default = nullptr;

	if (!Default)
		Default = static_cast<USpinBox*>(USpinBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetValue");

	Params::USpinBox_SetValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMinValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::USpinBox_SetMinValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMinSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::USpinBox_SetMinSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMinFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinFractionalDigits");

	Params::USpinBox_SetMinFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMaxValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::USpinBox_SetMaxValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::USpinBox_SetMaxSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetMaxFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxFractionalDigits");

	Params::USpinBox_SetMaxFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateColor USpinBox::SetForegroundColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetForegroundColor");

	Params::USpinBox_SetForegroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.SetDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetDelta(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetDelta");

	Params::USpinBox_SetDelta_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetAlwaysUsesDeltaSnap");

	Params::USpinBox_SetAlwaysUsesDeltaSnap_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextCommit USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Edit, ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxBeginSliderMovement__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetValue");

	Params::USpinBox_GetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::USpinBox_GetMinValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::USpinBox_GetMinSliderValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USpinBox::GetMinFractionalDigits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinFractionalDigits");

	Params::USpinBox_GetMinFractionalDigits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::USpinBox_GetMaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::USpinBox_GetMaxSliderValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 USpinBox::GetMaxFractionalDigits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxFractionalDigits");

	Params::USpinBox_GetMaxFractionalDigits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USpinBox::GetDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetDelta");

	Params::USpinBox_GetDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USpinBox::GetAlwaysUsesDeltaSnap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetAlwaysUsesDeltaSnap");

	Params::USpinBox_GetAlwaysUsesDeltaSnap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinSliderValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxSliderValue");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.StackBox
// (None)

class UClass* UStackBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackBox");

	return Clss;
}


// StackBox UMG.Default__StackBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackBox* UStackBox::GetDefaultObj()
{
	static class UStackBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackBox*>(UStackBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.StackBox.ReplaceStackBoxChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UStackBox::ReplaceStackBoxChildAt(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "ReplaceStackBoxChildAt");

	Params::UStackBox_ReplaceStackBoxChildAt_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Function UMG.StackBox.AddChildToStackBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UStackBoxSlot*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UStackBoxSlot* UStackBox::AddChildToStackBox(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "AddChildToStackBox");

	Params::UStackBox_AddChildToStackBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.StackBoxSlot
// (None)

class UClass* UStackBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StackBoxSlot");

	return Clss;
}


// StackBoxSlot UMG.Default__StackBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UStackBoxSlot* UStackBoxSlot::GetDefaultObj()
{
	static class UStackBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UStackBoxSlot*>(UStackBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.TextBlock
// (None)

class UClass* UTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextBlock");

	return Clss;
}


// TextBlock UMG.Default__TextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class UTextBlock* UTextBlock::GetDefaultObj()
{
	static class UTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextBlock*>(UTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (ConstParm, Parm, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextTransformPolicy");

	Params::UTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class ETextOverflowPolicy UTextBlock::SetTextOverflowPolicy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextOverflowPolicy");

	Params::UTextBlock_SetTextOverflowPolicy_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Edit, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UTextBlock::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetText");

	Params::UTextBlock_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FString UTextBlock::SetString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetString");

	Params::UTextBlock_SetString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetStrikeBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetStrikeBrush");

	Params::UTextBlock_SetStrikeBrush_Params Parms{};

	Parms.InStrikeBrush = InStrikeBrush;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowOffset");

	Params::UTextBlock_SetShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowColorAndOpacity");

	Params::UTextBlock_SetShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UTextBlock::SetOpacity(float* InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::UTextBlock_SetOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InOpacity != nullptr)
		*InOpacity = Parms.InOpacity;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (ConstParm, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UTextBlock::SetMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetMinDesiredWidth");

	Params::UTextBlock_SetMinDesiredWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UTextBlock::SetFontOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontOutlineMaterial");

	Params::UTextBlock_SetFontOutlineMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UMaterialInterface* UTextBlock::SetFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontMaterial");

	Params::UTextBlock_SetFontMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FSlateFontInfo UTextBlock::SetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFont");

	Params::UTextBlock_SetFont_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::UTextBlock_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (EditFixedSize, DisableEditOnTemplate, Transient, EditConst, InstancedReference, SubobjectReference)

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetAutoWrapText");

	Params::UTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class FText UTextBlock::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetText");

	Params::UTextBlock_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::UTextBlock_GetDynamicOutlineMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::UTextBlock_GetDynamicFontMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Throbber
// (None)

class UClass* UThrobber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Throbber");

	return Clss;
}


// Throbber UMG.Default__Throbber
// (Public, ClassDefaultObject, ArchetypeObject)

class UThrobber* UThrobber::GetDefaultObj()
{
	static class UThrobber* Default = nullptr;

	if (!Default)
		Default = static_cast<UThrobber*>(UThrobber::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UThrobber::SetNumberOfPieces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetNumberOfPieces");

	Params::UThrobber_SetNumberOfPieces_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateVertically                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UThrobber::SetAnimateVertically(bool* bInAnimateVertically)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateVertically");

	Params::UThrobber_SetAnimateVertically_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInAnimateVertically != nullptr)
		*bInAnimateVertically = Parms.bInAnimateVertically;

}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateOpacity                                                (Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UThrobber::SetAnimateOpacity(bool* bInAnimateOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateOpacity");

	Params::UThrobber_SetAnimateOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInAnimateOpacity != nullptr)
		*bInAnimateOpacity = Parms.bInAnimateOpacity;

}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateHorizontally                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UThrobber::SetAnimateHorizontally(bool* bInAnimateHorizontally)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateHorizontally");

	Params::UThrobber_SetAnimateHorizontally_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInAnimateHorizontally != nullptr)
		*bInAnimateHorizontally = Parms.bInAnimateHorizontally;

}


// Class UMG.TileView
// (None)

class UClass* UTileView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TileView");

	return Clss;
}


// TileView UMG.Default__TileView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTileView* UTileView::GetDefaultObj()
{
	static class UTileView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTileView*>(UTileView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TileView.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UTileView::SetEntryWidth(float* NewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryWidth");

	Params::UTileView_SetEntryWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewWidth != nullptr)
		*NewWidth = Parms.NewWidth;

}


// Function UMG.TileView.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UTileView::SetEntryHeight(float* NewHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryHeight");

	Params::UTileView_SetEntryHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewHeight != nullptr)
		*NewHeight = Parms.NewHeight;

}


// Function UMG.TileView.GetEntryWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UTileView::GetEntryWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryWidth");

	Params::UTileView_GetEntryWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.TileView.GetEntryHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UTileView::GetEntryHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryHeight");

	Params::UTileView_GetEntryHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.TreeView
// (None)

class UClass* UTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TreeView");

	return Clss;
}


// TreeView UMG.Default__TreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class UTreeView* UTreeView::GetDefaultObj()
{
	static class UTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<UTreeView*>(UTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.TreeView.SetItemExpansion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Config)
// bool                               bExpandItem                                                      (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

class UObject* UTreeView::SetItemExpansion(bool* bExpandItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "SetItemExpansion");

	Params::UTreeView_SetItemExpansion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bExpandItem != nullptr)
		*bExpandItem = Parms.bExpandItem;

	return Parms.ReturnValue;

}


// Function UMG.TreeView.ExpandAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::ExpandAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "ExpandAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TreeView.CollapseAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::CollapseAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "CollapseAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.UniformGridPanel
// (None)

class UClass* UUniformGridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformGridPanel");

	return Clss;
}


// UniformGridPanel UMG.Default__UniformGridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformGridPanel* UUniformGridPanel::GetDefaultObj()
{
	static class UUniformGridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformGridPanel*>(UUniformGridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InSlotPadding                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUniformGridPanel::SetSlotPadding(struct FMargin* InSlotPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetSlotPadding");

	Params::UUniformGridPanel_SetSlotPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InSlotPadding != nullptr)
		*InSlotPadding = std::move(Parms.InSlotPadding);

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotWidth                                            (ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUniformGridPanel::SetMinDesiredSlotWidth(float* InMinDesiredSlotWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");

	Params::UUniformGridPanel_SetMinDesiredSlotWidth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMinDesiredSlotWidth != nullptr)
		*InMinDesiredSlotWidth = Parms.InMinDesiredSlotWidth;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotHeight                                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UUniformGridPanel::SetMinDesiredSlotHeight(float* InMinDesiredSlotHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");

	Params::UUniformGridPanel_SetMinDesiredSlotHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InMinDesiredSlotHeight != nullptr)
		*InMinDesiredSlotHeight = Parms.InMinDesiredSlotHeight;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// int32                              InRow                                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              InColumn                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// class UUniformGridSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UUniformGridPanel_AddChildToUniformGrid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.UniformGridSlot
// (None)

class UClass* UUniformGridSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UniformGridSlot");

	return Clss;
}


// UniformGridSlot UMG.Default__UniformGridSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UUniformGridSlot* UUniformGridSlot::GetDefaultObj()
{
	static class UUniformGridSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UUniformGridSlot*>(UUniformGridSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UUniformGridSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetVerticalAlignment");

	Params::UUniformGridSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUniformGridSlot::SetRow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UUniformGridSlot_SetRow_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UUniformGridSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetHorizontalAlignment");

	Params::UUniformGridSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

int32 UUniformGridSlot::SetColumn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UUniformGridSlot_SetColumn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.VerticalBox
// (None)

class UClass* UVerticalBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalBox");

	return Clss;
}


// VerticalBox UMG.Default__VerticalBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerticalBox* UVerticalBox::GetDefaultObj()
{
	static class UVerticalBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalBox*>(UVerticalBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UVerticalBoxSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::UVerticalBox_AddChildToVerticalBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.VerticalBoxSlot
// (None)

class UClass* UVerticalBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalBoxSlot");

	return Clss;
}


// VerticalBoxSlot UMG.Default__VerticalBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerticalBoxSlot* UVerticalBoxSlot::GetDefaultObj()
{
	static class UVerticalBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalBoxSlot*>(UVerticalBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UVerticalBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");

	Params::UVerticalBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (ExportObject, Net, EditFixedSize, Parm, Transient, EditConst, SubobjectReference)

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::UVerticalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UVerticalBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetPadding");

	Params::UVerticalBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UVerticalBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");

	Params::UVerticalBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.Viewport
// (None)

class UClass* UViewport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Viewport");

	return Clss;
}


// Viewport UMG.Default__Viewport
// (Public, ClassDefaultObject, ArchetypeObject)

class UViewport* UViewport::GetDefaultObj()
{
	static class UViewport* Default = nullptr;

	if (!Default)
		Default = static_cast<UViewport*>(UViewport::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      ActorClass                                                       (ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// class AActor*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class AActor* UViewport::Spawn(class UClass* ActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "Spawn");

	Params::UViewport_Spawn_Params Parms{};

	Parms.ActorClass = ActorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor)

void UViewport::SetViewRotation(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewRotation");

	Params::UViewport_SetViewRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);

}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor)

void UViewport::SetViewLocation(struct FVector* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewLocation");

	Params::UViewport_SetViewLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FRotator UViewport::GetViewRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::UViewport_GetViewRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWorld* UViewport::GetViewportWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::UViewport_GetViewportWorld_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector UViewport::GetViewLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::UViewport_GetViewLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UWidgetComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetComponent");

	return Clss;
}


// WidgetComponent UMG.Default__WidgetComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetComponent* UWidgetComponent::GetDefaultObj()
{
	static class UWidgetComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetComponent*>(UWidgetComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetComponent.SetWindowVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWindowVisibility       InVisibility                                                     (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

enum class EWindowVisibility UWidgetComponent::SetWindowVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowVisibility");

	Params::UWidgetComponent_SetWindowVisibility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetWindowFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWindowFocusable                                               (Edit, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UWidgetComponent::SetWindowFocusable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowFocusable");

	Params::UWidgetComponent_SetWindowFocusable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetWidgetSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetSpace            NewSpace                                                         (Net, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

enum class EWidgetSpace UWidgetComponent::SetWidgetSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidgetSpace");

	Params::UWidgetComponent_SetWidgetSpace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UUserWidget* UWidgetComponent::SetWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidget");

	Params::UWidgetComponent_SetWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetTwoSided
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTwoSided                                                    (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UWidgetComponent::SetTwoSided()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTwoSided");

	Params::UWidgetComponent_SetTwoSided_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewTintColorAndOpacity                                           (BlueprintVisible, ExportObject, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

struct FLinearColor UWidgetComponent::SetTintColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTintColorAndOpacity");

	Params::UWidgetComponent_SetTintColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTickWhenOffscreen                                           (ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UWidgetComponent::SetTickWhenOffscreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickWhenOffscreen");

	Params::UWidgetComponent_SetTickWhenOffscreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetTickMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETickMode               InTickMode                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetTickMode(enum class ETickMode* InTickMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickMode");

	Params::UWidgetComponent_SetTickMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTickMode != nullptr)
		*InTickMode = Parms.InTickMode;

}


// Function UMG.WidgetComponent.SetRedrawTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRedrawTime                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetRedrawTime(float* InRedrawTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetRedrawTime");

	Params::UWidgetComponent_SetRedrawTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InRedrawTime != nullptr)
		*InRedrawTime = Parms.InRedrawTime;

}


// Function UMG.WidgetComponent.SetPivot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPivot                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetPivot(struct FVector2D* InPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetPivot");

	Params::UWidgetComponent_SetPivot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPivot != nullptr)
		*InPivot = std::move(Parms.InPivot);

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst)

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::UWidgetComponent_SetOwnerPlayer_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetManuallyRedraw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseManualRedraw                                                 (Edit, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetManuallyRedraw(bool* bUseManualRedraw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetManuallyRedraw");

	Params::UWidgetComponent_SetManuallyRedraw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bUseManualRedraw != nullptr)
		*bUseManualRedraw = Parms.bUseManualRedraw;

}


// Function UMG.WidgetComponent.SetGeometryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetGeometryMode     InGeometryMode                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetGeometryMode(enum class EWidgetGeometryMode* InGeometryMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetGeometryMode");

	Params::UWidgetComponent_SetGeometryMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InGeometryMode != nullptr)
		*InGeometryMode = Parms.InGeometryMode;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)

struct FVector2D UWidgetComponent::SetDrawSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawSize");

	Params::UWidgetComponent_SetDrawSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDrawAtDesiredSize                                             (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetDrawAtDesiredSize(bool* bInDrawAtDesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");

	Params::UWidgetComponent_SetDrawAtDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bInDrawAtDesiredSize != nullptr)
		*bInDrawAtDesiredSize = Parms.bInDrawAtDesiredSize;

}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCylinderArcAngle                                               (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetCylinderArcAngle(float* InCylinderArcAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetCylinderArcAngle");

	Params::UWidgetComponent_SetCylinderArcAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InCylinderArcAngle != nullptr)
		*InCylinderArcAngle = Parms.InCylinderArcAngle;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewBackgroundColor                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

void UWidgetComponent::SetBackgroundColor(struct FLinearColor* NewBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetBackgroundColor");

	Params::UWidgetComponent_SetBackgroundColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewBackgroundColor != nullptr)
		*NewBackgroundColor = std::move(Parms.NewBackgroundColor);

}


// Function UMG.WidgetComponent.RequestRenderUpdate
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRenderUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRenderUpdate");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRedraw");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.IsWidgetVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::IsWidgetVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "IsWidgetVisible");

	Params::UWidgetComponent_IsWidgetVisible_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWindowVisiblility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWindowVisibility       ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EWindowVisibility UWidgetComponent::GetWindowVisiblility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowVisiblility");

	Params::UWidgetComponent_GetWindowVisiblility_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWindowFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::GetWindowFocusable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowFocusable");

	Params::UWidgetComponent_GetWindowFocusable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWidgetSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetSpace            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EWidgetSpace UWidgetComponent::GetWidgetSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidgetSpace");

	Params::UWidgetComponent_GetWidgetSpace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetComponent::GetWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidget");

	Params::UWidgetComponent_GetWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::UWidgetComponent_GetUserWidgetObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetTwoSided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::GetTwoSided()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTwoSided");

	Params::UWidgetComponent_GetTwoSided_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::GetTickWhenOffscreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTickWhenOffscreen");

	Params::UWidgetComponent_GetTickWhenOffscreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::UWidgetComponent_GetRenderTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetRedrawTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetComponent::GetRedrawTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRedrawTime");

	Params::UWidgetComponent_GetRedrawTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetComponent::GetPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetPivot");

	Params::UWidgetComponent_GetPivot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::UWidgetComponent_GetOwnerPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::UWidgetComponent_GetMaterialInstance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetManuallyRedraw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::GetManuallyRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetManuallyRedraw");

	Params::UWidgetComponent_GetManuallyRedraw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetGeometryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetGeometryMode     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetGeometryMode");

	Params::UWidgetComponent_GetGeometryMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetComponent::GetDrawSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::UWidgetComponent_GetDrawSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetComponent::GetDrawAtDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");

	Params::UWidgetComponent_GetDrawAtDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetComponent::GetCylinderArcAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCylinderArcAngle");

	Params::UWidgetComponent_GetCylinderArcAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetComponent::GetCurrentDrawSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCurrentDrawSize");

	Params::UWidgetComponent_GetCurrentDrawSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetInteractionComponent
// (SceneComponent)

class UClass* UWidgetInteractionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetInteractionComponent");

	return Clss;
}


// WidgetInteractionComponent UMG.Default__WidgetInteractionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetInteractionComponent* UWidgetInteractionComponent::GetDefaultObj()
{
	static class UWidgetInteractionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetInteractionComponent*>(UWidgetInteractionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetInteractionComponent.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     FocusWidget                                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetFocus");

	Params::UWidgetInteractionComponent_SetFocus_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  HitResult                                                        (BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, EditConst)

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::UWidgetInteractionComponent_SetCustomHitResult_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Characters                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, DuplicateTransient)
// bool                               bRepeat                                                          (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::SendKeyChar(class FString* Characters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::UWidgetInteractionComponent_SendKeyChar_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Characters != nullptr)
		*Characters = std::move(Parms.Characters);

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollDelta                                                      (Edit, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UWidgetInteractionComponent::ScrollWheel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ScrollWheel");

	Params::UWidgetInteractionComponent_ScrollWheel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::UWidgetInteractionComponent_ReleasePointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::UWidgetInteractionComponent_ReleaseKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::UWidgetInteractionComponent_PressPointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               bRepeat                                                          (BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::UWidgetInteractionComponent_PressKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::UWidgetInteractionComponent_PressAndReleaseKey_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::UWidgetInteractionComponent_IsOverInteractableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::UWidgetInteractionComponent_IsOverFocusableWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::UWidgetInteractionComponent_GetLastHitResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::UWidgetInteractionComponent_GetHoveredWidgetComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::UWidgetInteractionComponent_Get2DHitLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetSwitcher
// (None)

class UClass* UWidgetSwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetSwitcher");

	return Clss;
}


// WidgetSwitcher UMG.Default__WidgetSwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetSwitcher* UWidgetSwitcher::GetDefaultObj()
{
	static class UWidgetSwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetSwitcher*>(UWidgetSwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

int32 UWidgetSwitcher::SetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::UWidgetSwitcher_SetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)

class UWidget* UWidgetSwitcher::SetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidget");

	Params::UWidgetSwitcher_SetActiveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidgetSwitcher::GetWidgetAtIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::UWidgetSwitcher_GetWidgetAtIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UWidgetSwitcher::GetNumWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::UWidgetSwitcher_GetNumWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UWidgetSwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::UWidgetSwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidget");

	Params::UWidgetSwitcher_GetActiveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetSwitcherSlot
// (None)

class UClass* UWidgetSwitcherSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetSwitcherSlot");

	return Clss;
}


// WidgetSwitcherSlot UMG.Default__WidgetSwitcherSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetSwitcherSlot* UWidgetSwitcherSlot::GetDefaultObj()
{
	static class UWidgetSwitcherSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetSwitcherSlot*>(UWidgetSwitcherSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UWidgetSwitcherSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");

	Params::UWidgetSwitcherSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetSwitcherSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetPadding");

	Params::UWidgetSwitcherSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UWidgetSwitcherSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");

	Params::UWidgetSwitcherSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WindowTitleBarArea
// (None)

class UClass* UWindowTitleBarArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowTitleBarArea");

	return Clss;
}


// WindowTitleBarArea UMG.Default__WindowTitleBarArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowTitleBarArea* UWindowTitleBarArea::GetDefaultObj()
{
	static class UWindowTitleBarArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowTitleBarArea*>(UWindowTitleBarArea::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UWindowTitleBarArea::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");

	Params::UWindowTitleBarArea_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWindowTitleBarArea::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetPadding");

	Params::UWindowTitleBarArea_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UWindowTitleBarArea::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");

	Params::UWindowTitleBarArea_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WindowTitleBarAreaSlot
// (None)

class UClass* UWindowTitleBarAreaSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WindowTitleBarAreaSlot");

	return Clss;
}


// WindowTitleBarAreaSlot UMG.Default__WindowTitleBarAreaSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWindowTitleBarAreaSlot* UWindowTitleBarAreaSlot::GetDefaultObj()
{
	static class UWindowTitleBarAreaSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWindowTitleBarAreaSlot*>(UWindowTitleBarAreaSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UWindowTitleBarAreaSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");

	Params::UWindowTitleBarAreaSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWindowTitleBarAreaSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetPadding");

	Params::UWindowTitleBarAreaSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UWindowTitleBarAreaSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");

	Params::UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WrapBox
// (None)

class UClass* UWrapBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WrapBox");

	return Clss;
}


// WrapBox UMG.Default__WrapBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UWrapBox* UWrapBox::GetDefaultObj()
{
	static class UWrapBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UWrapBox*>(UWrapBox::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWrapBox::SetInnerSlotPadding(struct FVector2D* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetInnerSlotPadding");

	Params::UWrapBox_SetInnerSlotPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.WrapBox.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UWrapBox::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetHorizontalAlignment");

	Params::UWrapBox_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintReadOnly, Parm, OutParm, Transient, GlobalConfig, SubobjectReference)
// class UWrapBoxSlot*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget** Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "AddChildToWrapBox");

	Params::UWrapBox_AddChildToWrapBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

	return Parms.ReturnValue;

}


// Class UMG.WrapBoxSlot
// (None)

class UClass* UWrapBoxSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WrapBoxSlot");

	return Clss;
}


// WrapBoxSlot UMG.Default__WrapBoxSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UWrapBoxSlot* UWrapBoxSlot::GetDefaultObj()
{
	static class UWrapBoxSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UWrapBoxSlot*>(UWrapBoxSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Edit, EditFixedSize, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EVerticalAlignment UWrapBoxSlot::SetVerticalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetVerticalAlignment");

	Params::UWrapBoxSlot_SetVerticalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (ConstParm, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWrapBoxSlot::SetPadding(struct FMargin* InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetPadding");

	Params::UWrapBoxSlot_SetPadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPadding != nullptr)
		*InPadding = std::move(Parms.InPadding);

}


// Function UMG.WrapBoxSlot.SetNewLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InForceNewLine                                                   (Edit, ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UWrapBoxSlot::SetNewLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetNewLine");

	Params::UWrapBoxSlot_SetNewLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, Transient, EditConst, InstancedReference, SubobjectReference)

enum class EHorizontalAlignment UWrapBoxSlot::SetHorizontalAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");

	Params::UWrapBoxSlot_SetHorizontalAlignment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFillSpanWhenLessThan                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

float UWrapBoxSlot::SetFillSpanWhenLessThan()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");

	Params::UWrapBoxSlot_SetFillSpanWhenLessThan_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbFillEmptySpace                                                (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool UWrapBoxSlot::SetFillEmptySpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillEmptySpace");

	Params::UWrapBoxSlot_SetFillEmptySpace_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.DragDropOperation
// (None)

class UClass* UDragDropOperation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragDropOperation");

	return Clss;
}


// DragDropOperation UMG.Default__DragDropOperation
// (Public, ClassDefaultObject, ArchetypeObject)

class UDragDropOperation* UDragDropOperation::GetDefaultObj()
{
	static class UDragDropOperation* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragDropOperation*>(UDragDropOperation::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)

void UDragDropOperation::Drop(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::UDragDropOperation_Drop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)

void UDragDropOperation::Dragged(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::UDragDropOperation_Dragged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)

void UDragDropOperation::DragCancelled(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::UDragDropOperation_DragCancelled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

}


// Class UMG.SlateBlueprintLibrary
// (None)

class UClass* USlateBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateBlueprintLibrary");

	return Clss;
}


// SlateBlueprintLibrary UMG.Default__SlateBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateBlueprintLibrary* USlateBlueprintLibrary::GetDefaultObj()
{
	static class USlateBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateBlueprintLibrary*>(USlateBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalVector                                                      (Edit, ConstParm, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteVector                                                   (Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// float                              LocalScalar                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// float                              AbsoluteScalar                                                   (BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   ScreenPosition                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   LocalCoordinate                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIncludeWindowPosition                                           (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool USlateBlueprintLibrary::ScreenToWidgetLocal(struct FGeometry* Geometry, struct FVector2D* ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::USlateBlueprintLibrary_ScreenToWidgetLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   AbsoluteCoordinate                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               bIncludeWindowPosition                                           (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

bool USlateBlueprintLibrary::ScreenToWidgetAbsolute(struct FVector2D* ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");

	Params::USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::ScreenToViewport(struct FVector2D* ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");

	Params::USlateBlueprintLibrary_ScreenToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalCoordinate                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   PixelPosition                                                    (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::LocalToViewport(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::USlateBlueprintLibrary_LocalToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalCoordinate                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::USlateBlueprintLibrary_LocalToAbsolute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteCoordinate                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USlateBlueprintLibrary::IsUnderLocation(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::USlateBlueprintLibrary_IsUnderLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");

	Params::USlateBlueprintLibrary_GetLocalTopLeft_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::GetLocalSize(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::USlateBlueprintLibrary_GetLocalSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");

	Params::USlateBlueprintLibrary_GetAbsoluteSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 A                                                                (Edit, ConstParm, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// struct FSlateBrush                 B                                                                (Edit, BlueprintVisible, EditFixedSize, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool USlateBlueprintLibrary::EqualEqual_SlateBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::USlateBlueprintLibrary_EqualEqual_SlateBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   AbsoluteDesktopCoordinate                                        (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   PixelPosition                                                    (Edit, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, InstancedReference, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::AbsoluteToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");

	Params::USlateBlueprintLibrary_AbsoluteToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, ExportObject, EditFixedSize, OutParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteCoordinate                                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(struct FGeometry* Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::USlateBlueprintLibrary_AbsoluteToLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Geometry != nullptr)
		*Geometry = std::move(Parms.Geometry);

	return Parms.ReturnValue;

}


// Class UMG.SlateVectorArtData
// (None)

class UClass* USlateVectorArtData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SlateVectorArtData");

	return Clss;
}


// SlateVectorArtData UMG.Default__SlateVectorArtData
// (Public, ClassDefaultObject, ArchetypeObject)

class USlateVectorArtData* USlateVectorArtData::GetDefaultObj()
{
	static class USlateVectorArtData* Default = nullptr;

	if (!Default)
		Default = static_cast<USlateVectorArtData*>(USlateVectorArtData::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UWidgetBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintGeneratedClass");

	return Clss;
}


// WidgetBlueprintGeneratedClass UMG.Default__WidgetBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintGeneratedClass* UWidgetBlueprintGeneratedClass::GetDefaultObj()
{
	static class UWidgetBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintGeneratedClass*>(UWidgetBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class UMG.WidgetBlueprintLibrary
// (None)

class UClass* UWidgetBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetBlueprintLibrary");

	return Clss;
}


// WidgetBlueprintLibrary UMG.Default__WidgetBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetBlueprintLibrary* UWidgetBlueprintLibrary::GetDefaultObj()
{
	static class UWidgetBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetBlueprintLibrary*>(UWidgetBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::UWidgetBlueprintLibrary_UnlockMouse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::UWidgetBlueprintLibrary_Unhandled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     TitleBarContent                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EWindowTitleBarMode     Mode                                                             (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               bTitleBarDragEnabled                                             (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bWindowButtonsVisible                                            (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bTitleBarVisible                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget** TitleBarContent, enum class EWindowTitleBarMode* Mode, bool* bTitleBarDragEnabled, bool* bWindowButtonsVisible, bool* bTitleBarVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TitleBarContent != nullptr)
		*TitleBarContent = Parms.TitleBarContent;

	if (Mode != nullptr)
		*Mode = Parms.Mode;

	if (bTitleBarDragEnabled != nullptr)
		*bTitleBarDragEnabled = Parms.bTitleBarDragEnabled;

	if (bWindowButtonsVisible != nullptr)
		*bWindowButtonsVisible = Parms.bWindowButtonsVisible;

	if (bTitleBarVisible != nullptr)
		*bTitleBarVisible = Parms.bTitleBarVisible;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarOnCloseClickedDelegate");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool* bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bActive != nullptr)
		*bActive = Parms.bActive;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     FocusWidget                                                      (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInAllUsers                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::UWidgetBlueprintLibrary_SetUserFocus_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   NewMousePosition                                                 (ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(const struct FVector2D& NewMousePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::UWidgetBlueprintLibrary_SetMousePosition_Params Parms{};

	Parms.NewMousePosition = NewMousePosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UWidget*                     InWidgetToFocus                                                  (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EMouseLockMode          InMouseLockMode                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFlushInput                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController** PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode* InMouseLockMode, bool* bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params Parms{};

	Parms.InWidgetToFocus = InWidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (InMouseLockMode != nullptr)
		*InMouseLockMode = Parms.InMouseLockMode;

	if (bFlushInput != nullptr)
		*bFlushInput = Parms.bFlushInput;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// bool                               bFlushInput                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController** PlayerController, bool* bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (bFlushInput != nullptr)
		*bFlushInput = Parms.bFlushInput;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// class UWidget*                     InWidgetToFocus                                                  (Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// enum class EMouseLockMode          InMouseLockMode                                                  (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bHideCursorDuringCapture                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bFlushInput                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController** PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode* InMouseLockMode, bool* bHideCursorDuringCapture, bool* bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params Parms{};

	Parms.InWidgetToFocus = InWidgetToFocus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (InMouseLockMode != nullptr)
		*InMouseLockMode = Parms.InMouseLockMode;

	if (bHideCursorDuringCapture != nullptr)
		*bHideCursorDuringCapture = Parms.bHideCursorDuringCapture;

	if (bFlushInput != nullptr)
		*bFlushInput = Parms.bFlushInput;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class EMouseCursor            CursorShape                                                      (BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        CursorName                                                       (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   HotSpot                                                          (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::SetHardwareCursor(enum class EMouseCursor* CursorShape, class FName* CursorName, struct FVector2D* HotSpot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");

	Params::UWidgetBlueprintLibrary_SetHardwareCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CursorShape != nullptr)
		*CursorShape = Parms.CursorShape;

	if (CursorName != nullptr)
		*CursorName = Parms.CursorName;

	if (HotSpot != nullptr)
		*HotSpot = std::move(Parms.HotSpot);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EColorVisionDeficiency  Type                                                             (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config)
// float                              Severity                                                         (Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CorrectDeficiency                                                (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               ShowCorrectionWithDeficiency                                     (Edit, ConstParm, Net, OutParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

float UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(bool* CorrectDeficiency, bool* ShowCorrectionWithDeficiency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");

	Params::UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CorrectDeficiency != nullptr)
		*CorrectDeficiency = Parms.CorrectDeficiency;

	if (ShowCorrectionWithDeficiency != nullptr)
		*ShowCorrectionWithDeficiency = Parms.ShowCorrectionWithDeficiency;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2D* UWidgetBlueprintLibrary::SetBrushResourceToTexture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

class UMaterialInterface* UWidgetBlueprintLibrary::SetBrushResourceToMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "RestorePreviousWindowTitleBarState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::UWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInAllJoysticks                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:

void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "OnGameWindowCloseButtonClickedDelegate__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::UWidgetBlueprintLibrary_NoResourceBrush_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// int32                              Width                                                            (ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::UWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              Width                                                            (ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// int32                              Height                                                           (BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst)
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*            BrushAsset                                                       (Edit, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::UWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms{};

	Parms.BrushAsset = BrushAsset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::LockMouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::UWidgetBlueprintLibrary_LockMouse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::UWidgetBlueprintLibrary_IsDragDropping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::UWidgetBlueprintLibrary_Handled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector4                    SafePadding                                                      (ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   SafePaddingScale                                                 (Edit, EditFixedSize, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector4                    SpillOverPadding                                                 (ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UObject* UWidgetBlueprintLibrary::GetSafeZonePadding(const struct FVector4& SafePadding, const struct FVector2D& SafePaddingScale, const struct FVector4& SpillOverPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::UWidgetBlueprintLibrary_GetSafeZonePadding_Params Parms{};

	Parms.SafePadding = SafePadding;
	Parms.SafePaddingScale = SafePaddingScale;
	Parms.SpillOverPadding = SpillOverPadding;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent           Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent            Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent             Event                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::UWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::UWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UTexture2D*                  ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UMaterialInterface*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// class UObject*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UWidgetBlueprintLibrary::GetBrushResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::UWidgetBlueprintLibrary_GetBrushResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UClass*                      Interface                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OutWidgetClass                                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               TopLevelOnly                                                     (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UObject* UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(const TArray<class UUserWidget*>& FoundWidgets, class UClass* Interface, class UClass* OutWidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms{};

	Parms.FoundWidgets = FoundWidgets;
	Parms.Interface = Interface;
	Parms.OutWidgetClass = OutWidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Edit, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UClass*                      WidgetClass                                                      (ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               TopLevelOnly                                                     (Edit, ConstParm, Net, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)

class UObject* UWidgetBlueprintLibrary::GetAllWidgetsOfClass(const TArray<class UUserWidget*>& FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms{};

	Parms.FoundWidgets = FoundWidgets;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::UWidgetBlueprintLibrary_EndDragDrop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FText                        Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// struct FVector2D                   Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// class UFont*                       Font                                                             (Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)
// int32                              FontSize                                                         (ConstParm, BlueprintVisible, EditFixedSize, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class FName                        FontTypeFace                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawTextFormatted(const struct FVector2D& Position, int32 FontSize, class FName FontTypeFace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::UWidgetBlueprintLibrary_DrawTextFormatted_Params Parms{};

	Parms.Position = Position;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class FString                      InString                                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawText(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::UWidgetBlueprintLibrary_DrawText_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawSpline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Start                                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector2D                   StartDir                                                         (Net, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   End                                                              (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance)
// struct FVector2D                   EndDir                                                           (BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawSpline(struct FVector2D* Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawSpline");

	Params::UWidgetBlueprintLibrary_DrawSpline_Params Parms{};

	Parms.StartDir = StartDir;
	Parms.End = End;
	Parms.EndDir = EndDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Start != nullptr)
		*Start = std::move(Parms.Start);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// TArray<struct FVector2D>           Points                                                           (BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bAntiAlias                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawLines()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::UWidgetBlueprintLibrary_DrawLines_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   PositionA                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FVector2D                   PositionB                                                        (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bAntiAlias                                                       (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawLine()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::UWidgetBlueprintLibrary_DrawLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   Position                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config)
// struct FVector2D                   Size                                                             (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, Config)
// class USlateBrushAsset*            Brush                                                            (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)
// struct FLinearColor                Tint                                                             (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawBox(const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::UWidgetBlueprintLibrary_DrawBox_Params Parms{};

	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, OutParm, Config, DisableEditOnInstance)
// class UWidget*                     WidgetDetectingDrag                                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKey                        DragKey                                                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(struct FPointerEvent* PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::UWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PointerEvent != nullptr)
		*PointerEvent = std::move(Parms.PointerEvent);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     WidgetDetectingDrag                                              (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKey                        DragKey                                                          (Edit, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::DetectDrag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::UWidgetBlueprintLibrary_DetectDrag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      OperationClass                                                   (Edit, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UDragDropOperation*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::UWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// class UClass*                      WidgetType                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class APlayerController*           OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UUserWidget*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUserWidget* UWidgetBlueprintLibrary::Create()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::UWidgetBlueprintLibrary_Create_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInAllUsers                                                      (BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::UWidgetBlueprintLibrary_ClearUserFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::UWidgetBlueprintLibrary_CaptureMouse_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               bInAllJoysticks                                                  (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::UWidgetBlueprintLibrary_CaptureJoystick_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class UMG.WidgetLayoutLibrary
// (None)

class UClass* UWidgetLayoutLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetLayoutLibrary");

	return Clss;
}


// WidgetLayoutLibrary UMG.Default__WidgetLayoutLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetLayoutLibrary* UWidgetLayoutLibrary::GetDefaultObj()
{
	static class UWidgetLayoutLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetLayoutLibrary*>(UWidgetLayoutLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UWrapBoxSlot*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UWidgetSwitcherSlot*         ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");

	Params::UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UVerticalBoxSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UUniformGridSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class USizeBoxSlot*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UScrollBoxSlot*              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UScaleBoxSlot*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class USafeZoneSlot*               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UOverlaySlot*                ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::UWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UHorizontalBoxSlot*          ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UGridSlot*                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsGridSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UCanvasPanelSlot*            ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::UWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst)
// class UBorderSlot*                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::UWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

class UObject* UWidgetLayoutLibrary::RemoveAllWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");

	Params::UWidgetLayoutLibrary_RemoveAllWidgets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FVector                     WorldLocation                                                    (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               bPlayerViewportRelative                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector* WorldLocation, struct FVector2D* ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (WorldLocation != nullptr)
		*WorldLocation = std::move(Parms.WorldLocation);

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FGeometry                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetLayoutLibrary::GetViewportSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::UWidgetLayoutLibrary_GetViewportSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

float UWidgetLayoutLibrary::GetViewportScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::UWidgetLayoutLibrary_GetViewportScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig)
// struct FGeometry                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst)
// float                              LocationX                                                        (ConstParm, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
// float                              LocationY                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(float LocationX, float LocationY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms{};

	Parms.LocationX = LocationX;
	Parms.LocationY = LocationY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");

	Params::UWidgetLayoutLibrary_GetMousePositionOnViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");

	Params::UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class UMG.WidgetTree
// (None)

class UClass* UWidgetTree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidgetTree");

	return Clss;
}


// WidgetTree UMG.Default__WidgetTree
// (Public, ClassDefaultObject, ArchetypeObject)

class UWidgetTree* UWidgetTree::GetDefaultObj()
{
	static class UWidgetTree* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidgetTree*>(UWidgetTree::StaticClass()->DefaultObject);

	return Default;
}

}


