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
// enum class ESlateVisibility        InVisibility                                                     (Parm, GlobalConfig, SubobjectReference)

void UWidget::SetVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetVisibility");

	Params::UWidget_SetVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)

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
// class FText                        InToolTipText                                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetToolTipText(class FText InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::UWidget_SetToolTipText_Params Parms{};

	Parms.InToolTipText = InToolTipText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// struct FVector2D                   Translation                                                      (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, Config)

void UWidget::SetRenderTranslation(struct FVector2D* Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::UWidget_SetRenderTranslation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Translation != nullptr)
		*Translation = std::move(Parms.Translation);

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pivot                                                            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::UWidget_SetRenderTransformPivot_Params Parms{};

	Parms.Pivot = Pivot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Edit, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetRenderTransformAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformAngle");

	Params::UWidget_SetRenderTransformAngle_Params Parms{};

	Parms.Angle = Angle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform            InTransform                                                      (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::UWidget_SetRenderTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Shear                                                            (Edit, BlueprintVisible, Net, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::UWidget_SetRenderShear_Params Parms{};

	Parms.Shear = Shear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Scale                                                            (Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)

void UWidget::SetRenderScale(struct FVector2D* Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::UWidget_SetRenderScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Scale != nullptr)
		*Scale = std::move(Parms.Scale);

}


// Function UMG.Widget.SetRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)

void UWidget::SetRenderOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderOpacity");

	Params::UWidget_SetRenderOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.SetNavigationRuleExplicit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class UWidget*                     InWidget                                                         (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)

enum class EUINavigation UWidget::SetNavigationRuleExplicit(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleExplicit");

	Params::UWidget_SetNavigationRuleExplicit_Params Parms{};

	Parms.InWidget = InWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 InCustomDelegate                                                 (Edit, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)

enum class EUINavigation UWidget::SetNavigationRuleCustomBoundary(FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustomBoundary");

	Params::UWidget_SetNavigationRuleCustomBoundary_Params Parms{};

	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetNavigationRuleCustom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 InCustomDelegate                                                 (Edit, BlueprintReadOnly, Net, GlobalConfig, SubobjectReference)

enum class EUINavigation UWidget::SetNavigationRuleCustom(FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustom");

	Params::UWidget_SetNavigationRuleCustom_Params Parms{};

	Parms.InCustomDelegate = InCustomDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetNavigationRuleBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EUINavigationRule       Rule                                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EUINavigationRule UWidget::SetNavigationRuleBase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleBase");

	Params::UWidget_SetNavigationRuleBase_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EUINavigationRule       Rule                                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        WidgetToFocus                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UWidget::SetNavigationRule()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::UWidget_SetNavigationRule_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// bool                               bInIsEnabled                                                     (Edit, ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

bool UWidget::SetIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::UWidget_SetIsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// enum class EMouseCursor            InCursor                                                         (ConstParm, BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EMouseCursor UWidget::SetCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetCursor");

	Params::UWidget_SetCursor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetClipping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetClipping         InClipping                                                       (Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

enum class EWidgetClipping UWidget::SetClipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetClipping");

	Params::UWidget_SetClipping_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigationRule       Rule                                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// class FName                        WidgetToFocus                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

class FName UWidget::SetAllNavigationRules()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::UWidget_SetAllNavigationRules_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::OnReply__DelegateSignature(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnReply__DelegateSignature");

	Params::UWidget_OnReply__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UWidget::OnPointerEvent__DelegateSignature(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnPointerEvent__DelegateSignature");

	Params::UWidget_OnPointerEvent__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

struct FFieldNotificationId UWidget::K2_RemoveFieldValueChangedDelegate(FDelegateProperty_ Delegate)
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

	return Parms.ReturnValue;

}


// Function UMG.Widget.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

struct FFieldNotificationId UWidget::K2_BroadcastFieldValueChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_BroadcastFieldValueChanged");

	Params::UWidget_K2_BroadcastFieldValueChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

struct FFieldNotificationId UWidget::K2_AddFieldValueChangedDelegate(FDelegateProperty_ Delegate)
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

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::IsVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsVisible");

	Params::UWidget_IsVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::IsRendered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsRendered");

	Params::UWidget_IsRendered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::IsInViewport(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsInViewport");

	Params::UWidget_IsInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::IsHovered(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsHovered");

	Params::UWidget_IsHovered_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasUserFocusedDescendants(class APlayerController** PlayerController, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::UWidget_HasUserFocusedDescendants_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasUserFocus(class APlayerController** PlayerController, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::UWidget_HasUserFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function UMG.Widget.HasMouseCaptureByUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              UserIndex                                                        (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// int32                              PointerIndex                                                     (ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UWidget::HasMouseCaptureByUser(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCaptureByUser");

	Params::UWidget_HasMouseCaptureByUser_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasMouseCapture(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::UWidget_HasMouseCapture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasKeyboardFocus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::UWidget_HasKeyboardFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasFocusedDescendants(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::UWidget_HasFocusedDescendants_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::HasAnyUserFocus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::UWidget_HasAnyUserFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetWidget__DelegateSignature(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetWidget__DelegateSignature");

	Params::UWidget_GetWidget__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetVisibility(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetVisibility");

	Params::UWidget_GetVisibility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetTickSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetTickSpaceGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetTickSpaceGeometry");

	Params::UWidget_GetTickSpaceGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetText__DelegateSignature(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetText__DelegateSignature");

	Params::UWidget_GetText__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetSlateVisibility__DelegateSignature(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");

	Params::UWidget_GetSlateVisibility__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetSlateColor__DelegateSignature(const struct FSlateColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateColor__DelegateSignature");

	Params::UWidget_GetSlateColor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetSlateBrush__DelegateSignature(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateBrush__DelegateSignature");

	Params::UWidget_GetSlateBrush__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetRenderTransformAngle(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderTransformAngle");

	Params::UWidget_GetRenderTransformAngle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetRenderOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetRenderOpacity(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderOpacity");

	Params::UWidget_GetRenderOpacity_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetParent(class UPanelWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetParent");

	Params::UWidget_GetParent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetPaintSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetPaintSpaceGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetPaintSpaceGeometry");

	Params::UWidget_GetPaintSpaceGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetOwningPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetOwningPlayer(class APlayerController* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::UWidget_GetOwningPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetOwningLocalPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetOwningLocalPlayer(class ULocalPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningLocalPlayer");

	Params::UWidget_GetOwningLocalPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetMouseCursor__DelegateSignature(enum class EMouseCursor ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetMouseCursor__DelegateSignature");

	Params::UWidget_GetMouseCursor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetLinearColor__DelegateSignature(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetLinearColor__DelegateSignature");

	Params::UWidget_GetLinearColor__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetIsThisAndParentsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetIsThisAndParentsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsThisAndParentsEnabled");

	Params::UWidget_GetIsThisAndParentsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetIsEnabled(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::UWidget_GetIsEnabled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetInt32__DelegateSignature(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetInt32__DelegateSignature");

	Params::UWidget_GetInt32__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetGameInstance
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameInstance*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetGameInstance(class UGameInstance* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetGameInstance");

	Params::UWidget_GetGameInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetFloat__DelegateSignature(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetFloat__DelegateSignature");

	Params::UWidget_GetFloat__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetDesiredSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::UWidget_GetDesiredSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetClipping         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetClipping(enum class EWidgetClipping ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetClipping");

	Params::UWidget_GetClipping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetCheckBoxState__DelegateSignature(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");

	Params::UWidget_GetCheckBoxState__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetCachedGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::UWidget_GetCachedGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetBool__DelegateSignature(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetBool__DelegateSignature");

	Params::UWidget_GetBool__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.Widget.GetAccessibleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetAccessibleText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleText");

	Params::UWidget_GetAccessibleText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Widget.GetAccessibleSummaryText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidget::GetAccessibleSummaryText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleSummaryText");

	Params::UWidget_GetAccessibleSummaryText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UWidget::GenerateWidgetForString__DelegateSignature(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");

	Params::UWidget_GenerateWidgetForString__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UWidget::GenerateWidgetForObject__DelegateSignature(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");

	Params::UWidget_GenerateWidgetForObject__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UWidget::ForceVolatile(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::UWidget_ForceVolatile_Params Parms{};

	Parms.bForce = bForce;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UWidgetAnimation* UUserWidget::UnbindFromAnimationStarted(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationStarted");

	Params::UUserWidget_UnbindFromAnimationStarted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UWidgetAnimation* UUserWidget::UnbindFromAnimationFinished(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationFinished");

	Params::UUserWidget_UnbindFromAnimationFinished_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)

class UWidgetAnimation* UUserWidget::UnbindAllFromAnimationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");

	Params::UUserWidget_UnbindAllFromAnimationStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)

class UWidgetAnimation* UUserWidget::UnbindAllFromAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");

	Params::UUserWidget_UnbindAllFromAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUserWidget::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Tick");

	Params::UUserWidget_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// enum class EInputEvent             EventType                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)

void UUserWidget::StopListeningForInputAction(class FName ActionName, enum class EInputEvent* EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UUserWidget_StopListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UUserWidget_StopAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FVector2D                   Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// bool                               bRemoveDPIScale                                                  (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetPositionInViewport(struct FVector2D* Position, bool* bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UUserWidget_SetPositionInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (bRemoveDPIScale != nullptr)
		*bRemoveDPIScale = Parms.bRemoveDPIScale;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UUserWidget_SetPlaybackSpeed_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// class APlayerController*           LocalPlayerController                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UUserWidget_SetNumLoopsToPlay_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetInputActionPriority(int32* NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UUserWidget_SetInputActionPriority_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewPriority != nullptr)
		*NewPriority = Parms.NewPriority;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (Edit, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetInputActionBlocking(bool* bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UUserWidget_SetInputActionBlocking_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bShouldBlock != nullptr)
		*bShouldBlock = Parms.bShouldBlock;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Edit, BlueprintVisible, Parm, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)

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
// struct FLinearColor                InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UUserWidget_SetColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.UserWidget.SetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

float UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnimationCurrentTime");

	Params::UUserWidget_SetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    Anchors                                                          (Net, OutParm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance)

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
// struct FVector2D                   Alignment                                                        (Edit, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::SetAlignmentInViewport(struct FVector2D* Alignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UUserWidget_SetAlignmentInViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Alignment != nullptr)
		*Alignment = std::move(Parms.Alignment);

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UUserWidget_ReverseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UClass*                      InExtensionType                                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::RemoveExtensions(class UClass** InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtensions");

	Params::UUserWidget_RemoveExtensions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InExtensionType != nullptr)
		*InExtensionType = Parms.InExtensionType;

}


// Function UMG.UserWidget.RemoveExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidgetExtension*        InExtension                                                      (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::RemoveExtension(class UUserWidgetExtension** InExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtension");

	Params::UUserWidget_RemoveExtension_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InExtension != nullptr)
		*InExtension = Parms.InExtension;

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
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UUserWidget_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  SoundToPlay                                                      (BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::PlaySound(class USoundBase** SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UUserWidget_PlaySound_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SoundToPlay != nullptr)
		*SoundToPlay = Parms.SoundToPlay;

}


// Function UMG.UserWidget.PlayAnimationTimeRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              EndAtTime                                                        (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float* EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationTimeRange");

	Params::UUserWidget_PlayAnimationTimeRange_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EndAtTime != nullptr)
		*EndAtTime = Parms.EndAtTime;

}


// Function UMG.UserWidget.PlayAnimationReverse
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationReverse");

	Params::UUserWidget_PlayAnimationReverse_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimationForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationForward");

	Params::UUserWidget_PlayAnimationForward_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               bRestoreState                                                    (Edit, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUMGSequencePlayer*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState, class UUMGSequencePlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UUserWidget_PlayAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UUserWidget_PauseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnTouchStarted(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UUserWidget_OnTouchStarted_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnTouchMoved(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UUserWidget_OnTouchMoved_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               GestureEvent                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnTouchGesture(const struct FPointerEvent& GestureEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UUserWidget_OnTouchGesture_Params Parms{};

	Parms.GestureEvent = GestureEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchForceChanged
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnTouchForceChanged(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchForceChanged");

	Params::UUserWidget_OnTouchForceChanged_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               InTouchEvent                                                     (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnTouchEnded(const struct FPointerEvent& InTouchEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UUserWidget_OnTouchEnded_Params Parms{};

	Parms.InTouchEvent = InTouchEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnRemovedFromFocusPath");

	Params::UUserWidget_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnPreviewMouseButtonDown(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UUserWidget_OnPreviewMouseButtonDown_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnPreviewKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UUserWidget_OnPreviewKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UUserWidget::OnPaint(struct FPaintContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UUserWidget_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseWheel(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UUserWidget_OnMouseWheel_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseMove(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UUserWidget_OnMouseMove_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseLeave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UUserWidget_OnMouseLeave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseEnter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UUserWidget_OnMouseEnter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseButtonUp(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UUserWidget_OnMouseButtonUp_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               MouseEvent                                                       (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnMouseButtonDown(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UUserWidget_OnMouseButtonDown_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FPointerEvent               InMouseEvent                                                     (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UUserWidget_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FMotionEvent                InMotionEvent                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnMotionDetected(const struct FMotionEvent& InMotionEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UUserWidget_OnMotionDetected_Params Parms{};

	Parms.InMotionEvent = InMotionEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnKeyUp(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UUserWidget_OnKeyUp_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UUserWidget_OnKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FCharacterEvent             InCharacterEvent                                                 (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnKeyChar(const struct FCharacterEvent& InCharacterEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UUserWidget_OnKeyChar_Params Parms{};

	Parms.InCharacterEvent = InCharacterEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnFocusReceived(const struct FFocusEvent& InFocusEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UUserWidget_OnFocusReceived_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UUserWidget_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnDrop(class UDragDropOperation* Operation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UUserWidget_OnDrop_Params Parms{};

	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FPointerEvent UUserWidget::OnDragOver(class UDragDropOperation* Operation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UUserWidget_OnDragOver_Params Parms{};

	Parms.Operation = Operation;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)

struct FPointerEvent UUserWidget::OnDragLeave(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UUserWidget_OnDragLeave_Params Parms{};

	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)

struct FPointerEvent UUserWidget::OnDragEnter(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UUserWidget_OnDragEnter_Params Parms{};

	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)

struct FPointerEvent UUserWidget::OnDragDetected(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UUserWidget_OnDragDetected_Params Parms{};

	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UDragDropOperation*          Operation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, GlobalConfig, SubobjectReference)

struct FPointerEvent UUserWidget::OnDragCancelled(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UUserWidget_OnDragCancelled_Params Parms{};

	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)

class UWidgetAnimation* UUserWidget::OnAnimationStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UUserWidget_OnAnimationStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)

class UWidgetAnimation* UUserWidget::OnAnimationFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UUserWidget_OnAnimationFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry UUserWidget::OnAnalogValueChanged(const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UUserWidget_OnAnalogValueChanged_Params Parms{};

	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAddedToFocusPath");

	Params::UUserWidget_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// enum class EInputEvent             EventType                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, EditConst, SubobjectReference)
// bool                               bConsume                                                         (BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 Callback                                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::ListenForInputAction(class FName ActionName, enum class EInputEvent* EventType, bool bConsume, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UUserWidget_ListenForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EventType != nullptr)
		*EventType = Parms.EventType;

}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsPlayingAnimation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UUserWidget_IsPlayingAnimation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsListeningForInputAction(class FName ActionName, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UUserWidget_IsListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsInteractable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UUserWidget_IsInteractable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsAnyAnimationPlaying(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UUserWidget_IsAnyAnimationPlaying_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UUserWidget_IsAnimationPlayingForward_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UUserWidget_IsAnimationPlaying_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetOwningPlayerPawn(class APawn* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UUserWidget_GetOwningPlayerPawn_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetOwningPlayerCameraManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetOwningPlayerCameraManager(class APlayerCameraManager* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerCameraManager");

	Params::UUserWidget_GetOwningPlayerCameraManager_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetIsVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UUserWidget_GetIsVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetExtensions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// TArray<class UUserWidgetExtension*>ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetExtensions(class UClass* ExtensionType, const TArray<class UUserWidgetExtension*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtensions");

	Params::UUserWidget_GetExtensions_Params Parms{};

	Parms.ExtensionType = ExtensionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetExtension
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      ExtensionType                                                    (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUserWidgetExtension*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetExtension(class UClass* ExtensionType, class UUserWidgetExtension* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtension");

	Params::UUserWidget_GetExtension_Params Parms{};

	Parms.ExtensionType = ExtensionType;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UUserWidget_GetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetAnchorsInViewport(const struct FAnchors& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UUserWidget_GetAnchorsInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::GetAlignmentInViewport(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UUserWidget_GetAlignmentInViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UWidgetAnimation* UUserWidget::BindToAnimationStarted(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationStarted");

	Params::UUserWidget_BindToAnimationStarted_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

class UWidgetAnimation* UUserWidget::BindToAnimationFinished(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationFinished");

	Params::UUserWidget_BindToAnimationFinished_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.BindToAnimationEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, ExportObject, ReturnParm, Config, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// enum class EWidgetAnimationEvent   AnimationEvent                                                   (ConstParm, ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class FName                        UserTag                                                          (Edit, BlueprintVisible, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

class UWidgetAnimation* UUserWidget::BindToAnimationEvent(FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent* AnimationEvent, class FName* UserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationEvent");

	Params::UUserWidget_BindToAnimationEvent_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AnimationEvent != nullptr)
		*AnimationEvent = Parms.AnimationEvent;

	if (UserTag != nullptr)
		*UserTag = Parms.UserTag;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.AddToViewport
// (BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUserWidget::AddToViewport(int32* ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UUserWidget_AddToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ZOrder != nullptr)
		*ZOrder = Parms.ZOrder;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Edit, Net, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::AddToPlayerScreen(int32* ZOrder, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UUserWidget_AddToPlayerScreen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ZOrder != nullptr)
		*ZOrder = Parms.ZOrder;

}


// Function UMG.UserWidget.AddExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      InExtensionType                                                  (ExportObject, BlueprintReadOnly, Parm, OutParm, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UUserWidgetExtension*        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserWidget::AddExtension(class UClass** InExtensionType, class UUserWidgetExtension* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddExtension");

	Params::UUserWidget_AddExtension_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InExtensionType != nullptr)
		*InExtensionType = Parms.InExtensionType;

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
// float                              InOpacity                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)

void UImage::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetOpacity");

	Params::UImage_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetDesiredSizeOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UImage::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::UImage_SetColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.Image.SetBrushTintColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 TintColor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)

void UImage::SetBrushTintColor(struct FSlateColor* TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushTintColor");

	Params::UImage_SetBrushTintColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TintColor != nullptr)
		*TintColor = std::move(Parms.TintColor);

}


// Function UMG.Image.SetBrushResourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ResourceObject                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)

void UImage::SetBrushResourceObject(class UObject** ResourceObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushResourceObject");

	Params::UImage_SetBrushResourceObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ResourceObject != nullptr)
		*ResourceObject = Parms.ResourceObject;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::UImage_SetBrushFromTextureDynamic_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

bool UImage::SetBrushFromTexture(class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::UImage_SetBrushFromTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	return Parms.ReturnValue;

}


// Function UMG.Image.SetBrushFromSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// TSoftObjectPtr<class UMaterialInterface>SoftMaterial                                                     (OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// class UMaterialInterface*          Material                                                         (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::UImage_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrushFromAtlasInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISlateTextureAtlasInterface>AtlasRegion                                                      (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// bool                               bMatchSize                                                       (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// class USlateBrushAsset*            Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::UImage_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Image.SetBrush
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UImage::GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::UImage_GetDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ETextJustify            InJustification                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// enum class ETextTransformPolicy    InTransformPolicy                                                (ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)

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
// class UDataTable*                  NewTextStyleSet                                                  (Edit, ExportObject, BlueprintReadOnly, Net, Config, InstancedReference, SubobjectReference)

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
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void URichTextBlock::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetText");

	Params::URichTextBlock_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FTextBlockStyle             InDefaultTextStyle                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, Config, InstancedReference, SubobjectReference)

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
// struct FSlateBrush                 InStrikeBrush                                                    (Edit, ConstParm, BlueprintVisible, Net, Config, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InShadowOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InShadowColorAndOpacity                                          (ConstParm, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateFontInfo              InFontInfo                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateColor                 InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");

	Params::URichTextBlock_SetDefaultColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.RichTextBlock.SetDecorators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              InDecoratorClasses                                               (ExportObject, Config, InstancedReference, SubobjectReference)

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
// bool                               InAutoTextWrap                                                   (Config, InstancedReference, SubobjectReference)

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
// class UDataTable*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URichTextBlock::GetTextStyleSet(class UDataTable* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetTextStyleSet");

	Params::URichTextBlock_GetTextStyleSet_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URichTextBlock::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetText");

	Params::URichTextBlock_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URichTextBlock::GetDefaultDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDefaultDynamicMaterial");

	Params::URichTextBlock_GetDefaultDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.RichTextBlock.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      DecoratorClass                                                   (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)
// class URichTextBlockDecorator*     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* URichTextBlock::GetDecoratorByClass(class URichTextBlockDecorator* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDecoratorByClass");

	Params::URichTextBlock_GetDecoratorByClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::RemoveChildAt(int32* Index, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::UPanelWidget_RemoveChildAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::RemoveChild(class UWidget** Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::UPanelWidget_RemoveChild_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::HasChild(class UWidget** Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::UPanelWidget_HasChild_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::HasAnyChildren(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::UPanelWidget_HasAnyChildren_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::GetChildrenCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::UPanelWidget_GetChildrenCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::GetChildIndex(class UWidget** Content, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::UPanelWidget_GetChildIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::GetChildAt(int32* Index, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::UPanelWidget_GetChildAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.PanelWidget.GetAllChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::GetAllChildren(const TArray<class UWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetAllChildren");

	Params::UPanelWidget_GetAllChildren_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UPanelSlot*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UPanelWidget::AddChild(class UWidget** Content, class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::UPanelWidget_AddChild_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UPanelSlot*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UContentWidget::SetContent(class UWidget** Content, class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::UContentWidget_SetContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UContentWidget::GetContentSlot(class UPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::UContentWidget_GetContentSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UContentWidget::GetContent(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContent");

	Params::UContentWidget_GetContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EButtonTouchMethod      InTouchMethod                                                    (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// struct FButtonStyle                InStyle                                                          (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// enum class EButtonPressMethod      InPressMethod                                                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UButton::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::UButton_SetColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InBackgroundColor                                                (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// bool                               bFromGamepad                                                     (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UButton::IsPressed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "IsPressed");

	Params::UButton_IsPressed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              NewWheelScrollMultiplier                                         (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UScrollBox::SetWheelScrollMultiplier(float* NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetWheelScrollMultiplier");

	Params::UScrollBox_SetWheelScrollMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewWheelScrollMultiplier != nullptr)
		*NewWheelScrollMultiplier = Parms.NewWheelScrollMultiplier;

}


// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges                                        (OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UScrollBox::SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges* NewScrollWhenFocusChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollWhenFocusChanges");

	Params::UScrollBox_SetScrollWhenFocusChanges_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewScrollWhenFocusChanges != nullptr)
		*NewScrollWhenFocusChanges = Parms.NewScrollWhenFocusChanges;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewScrollOffset                                                  (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESlateVisibility        NewScrollBarVisibility                                           (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector2D                   NewScrollbarThickness                                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     NewScrollbarPadding                                              (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EOrientation            NewOrientation                                                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EDescendantScrollDestinationNewNavigationDestination                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EConsumeMouseWheel      NewConsumeMouseWheel                                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bShouldAnimateWheelScrolling                                     (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               NewAlwaysShowScrollbar                                           (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");

	Params::UScrollBox_SetAlwaysShowScrollbar_Params Parms{};

	Parms.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAllowOverscroll                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAllowOverscroll");

	Params::UScrollBox_SetAllowOverscroll_Params Parms{};

	Parms.NewAllowOverscroll = NewAllowOverscroll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// bool                               AnimateScroll                                                    (Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// enum class EDescendantScrollDestinationScrollDestination                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
// float                              Padding                                                          (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

float UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::UScrollBox_ScrollWidgetIntoView_Params Parms{};

	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;
	Parms.ScrollDestination = ScrollDestination;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetViewOffsetFraction(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewOffsetFraction");

	Params::UScrollBox_GetViewOffsetFraction_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetViewFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetViewFraction(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewFraction");

	Params::UScrollBox_GetViewFraction_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetScrollOffsetOfEnd(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");

	Params::UScrollBox_GetScrollOffsetOfEnd_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::UScrollBox_GetScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollMax
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetScrollMax(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollMax");

	Params::UScrollBox_GetScrollMax_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetScrollContentSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetScrollContentSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollContentSize");

	Params::UScrollBox_GetScrollContentSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScrollBox.GetPhysicalScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UScrollBox::GetPhysicalScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetPhysicalScrollOffset");

	Params::UScrollBox_GetPhysicalScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// bool                               bInShowEffectWhenDisabled                                        (ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InScale                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

struct FVector2D UBorder::SetDesiredSizeScale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::UBorder_SetDesiredSizeScale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InContentColorAndOpacity                                         (Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UBorder::SetBrushFromTexture(class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::UBorder_SetBrushFromTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::UBorder_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::UBorder_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBorder::GetDynamicMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::UBorder_GetDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UEditableText::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetText");

	Params::UEditableText_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.EditableText.SetMinimumDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// enum class ETextJustify            InJustification                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// bool                               InbIsReadyOnly                                                   (ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// bool                               InbIsPassword                                                    (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InHintText                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateFontInfo              InFontInfo                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UEditableText::OnEditableTextCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableText::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetText");

	Params::UEditableText_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableText::GetJustification(enum class ETextJustify ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetJustification");

	Params::UEditableText_GetJustification_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableText::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetHintText");

	Params::UEditableText_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableText::GetFont(const struct FSlateFontInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetFont");

	Params::UEditableText_GetFont_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              NewWheelScrollMultiplier                                         (ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

void UListViewBase::SetWheelScrollMultiplier(float* NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetWheelScrollMultiplier");

	Params::UListViewBase_SetWheelScrollMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewWheelScrollMultiplier != nullptr)
		*NewWheelScrollMultiplier = Parms.NewWheelScrollMultiplier;

}


// Function UMG.ListViewBase.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrollOffset                                                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class ESlateVisibility        InVisibility                                                     (Parm, GlobalConfig, SubobjectReference)

void UListViewBase::SetScrollBarVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollBarVisibility");

	Params::UListViewBase_SetScrollBarVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListViewBase::GetScrollOffset(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetScrollOffset");

	Params::UListViewBase_GetScrollOffset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListViewBase::GetDisplayedEntryWidgets(const TArray<class UUserWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");

	Params::UListViewBase_GetDisplayedEntryWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ESelectionMode          SelectionMode                                                    (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UListView::SetSelectedIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectedIndex");

	Params::UListView_SetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.ListView.ScrollIndexIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UListView::ScrollIndexIntoView(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ScrollIndexIntoView");

	Params::UListView_ScrollIndexIntoView_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.ListView.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)

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
// class AActor*                      ItemOuter                                                        (Edit, EditFixedSize, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

enum class EEndPlayReason UListView::OnListItemOuterEndPlayed(class AActor* ItemOuter)
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

	return Parms.ReturnValue;

}


// Function UMG.ListView.OnListItemEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

enum class EEndPlayReason UListView::OnListItemEndPlayed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemEndPlayed");

	Params::UListView_OnListItemEndPlayed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.NavigateToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UListView::NavigateToIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "NavigateToIndex");

	Params::UListView_NavigateToIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.ListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::IsRefreshPending(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "IsRefreshPending");

	Params::UListView_IsRefreshPending_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::GetNumItems(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetNumItems");

	Params::UListView_GetNumItems_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetListItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::GetListItems(const TArray<class UObject*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetListItems");

	Params::UListView_GetListItems_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::GetItemAt(int32* Index, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetItemAt");

	Params::UListView_GetItemAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.ListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UListView::GetIndexForItem(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetIndexForItem");

	Params::UListView_GetIndexForItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)

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
// TArray<class UObject*>             InListItems                                                      (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// bool                               bSelected                                                        (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UListView::BP_IsItemVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_IsItemVisible");

	Params::UListView_BP_IsItemVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetSelectedItems
// (Final, Native, Private, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>             Items                                                            (ExportObject, BlueprintReadOnly, Net, OutParm, Config, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::BP_GetSelectedItems(TArray<class UObject*>* Items, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItems");

	Params::UListView_BP_GetSelectedItems_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Items != nullptr)
		*Items = std::move(Parms.Items);

}


// Function UMG.ListView.BP_GetSelectedItem
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::BP_GetSelectedItem(class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItem");

	Params::UListView_BP_GetSelectedItem_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ListView.BP_GetNumItemsSelected
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UListView::BP_GetNumItemsSelected(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetNumItemsSelected");

	Params::UListView_BP_GetNumItemsSelected_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)

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
// class FName                        InUserTag                                                        (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUMGSequencePlayer::GetUserTag(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "GetUserTag");

	Params::UUMGSequencePlayer_GetUserTag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetAnimation::GetStartTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::UWidgetAnimation_GetStartTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetAnimation::GetEndTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::UWidgetAnimation_GetEndTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

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
// class UUMGSequencePlayer*          Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              EndAtTime                                                        (ConstParm, BlueprintVisible, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UWidgetAnimation* InAnimation, float StartAtTime, float* EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (EndAtTime != nullptr)
		*EndAtTime = Parms.EndAtTime;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst)
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UWidgetAnimation*            InAnimation                                                      (BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              StartAtTime                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// int32                              NumLoopsToPlay                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Edit, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// float                              PlaybackSpeed                                                    (Edit, ExportObject, Parm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UUserWidget* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, class UWidgetAnimationPlayCallbackProxy* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBoolBinding::GetValue(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::UBoolBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UBrushBinding::GetValue(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::UBrushBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ECheckBoxState          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCheckedStateBinding::GetValue(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::UCheckedStateBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FSlateColor                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UColorBinding::GetSlateValue(const struct FSlateColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::UColorBinding_GetSlateValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UColorBinding::GetLinearValue(const struct FLinearColor& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::UColorBinding_GetLinearValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UFloatBinding::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::UFloatBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInt32Binding::GetValue(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::UInt32Binding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EMouseCursor            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMouseCursorBinding::GetValue(enum class EMouseCursor ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::UMouseCursorBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTextBinding::GetTextValue(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::UTextBinding_GetTextValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTextBinding::GetStringValue(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::UTextBinding_GetStringValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ESlateVisibility        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UVisibilityBinding::GetValue(enum class ESlateVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::UVisibilityBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBinding::GetValue(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::UWidgetBinding_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, EditConst)
// class UAsyncTaskDownloadImage*     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FString UAsyncTaskDownloadImage::DownloadImage(class UAsyncTaskDownloadImage* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::UAsyncTaskDownloadImage_DownloadImage_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FGameViewportWidgetSlot     Slot                                                             (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// struct FVector2D                   Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// bool                               bRemoveDPIScale                                                  (Edit, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UGameViewportSubsystem::SetWidgetSlotPosition(struct FGameViewportWidgetSlot* Slot, struct FVector2D* Position, bool* bRemoveDPIScale, const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotPosition");

	Params::UGameViewportSubsystem_SetWidgetSlotPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Slot != nullptr)
		*Slot = std::move(Parms.Slot);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (bRemoveDPIScale != nullptr)
		*bRemoveDPIScale = Parms.bRemoveDPIScale;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UGameViewportSubsystem::SetWidgetSlotDesiredSize(struct FGameViewportWidgetSlot* Slot, const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotDesiredSize");

	Params::UGameViewportSubsystem_SetWidgetSlotDesiredSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Slot != nullptr)
		*Slot = std::move(Parms.Slot);

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

class UWidget* UGameViewportSubsystem::SetWidgetSlot(struct FGameViewportWidgetSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlot");

	Params::UGameViewportSubsystem_SetWidgetSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Slot != nullptr)
		*Slot = std::move(Parms.Slot);

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.RemoveWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UGameViewportSubsystem::IsWidgetAdded(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "IsWidgetAdded");

	Params::UGameViewportSubsystem_IsWidgetAdded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.GetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UGameViewportSubsystem::GetWidgetSlot(const struct FGameViewportWidgetSlot& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "GetWidgetSlot");

	Params::UGameViewportSubsystem_GetWidgetSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.AddWidgetForPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class ULocalPlayer*                Player                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

class UWidget* UGameViewportSubsystem::AddWidgetForPlayer(class ULocalPlayer** Player, struct FGameViewportWidgetSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidgetForPlayer");

	Params::UGameViewportSubsystem_AddWidgetForPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Player != nullptr)
		*Player = Parms.Player;

	if (Slot != nullptr)
		*Slot = std::move(Parms.Slot);

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.AddWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// struct FGameViewportWidgetSlot     Slot                                                             (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

class UWidget* UGameViewportSubsystem::AddWidget(struct FGameViewportWidgetSlot* Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidget");

	Params::UGameViewportSubsystem_AddWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Slot != nullptr)
		*Slot = std::move(Parms.Slot);

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
// bool                               bIsSelected                                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, GlobalConfig, SubobjectReference)

void IUserListEntry::BP_OnItemSelectionChanged(bool* bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");

	Params::IUserListEntry_BP_OnItemSelectionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsSelected != nullptr)
		*bIsSelected = Parms.bIsSelected;

}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, Net, OutParm, DisableEditOnTemplate, EditConst)

void IUserListEntry::BP_OnItemExpansionChanged(bool* bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");

	Params::IUserListEntry_BP_OnItemExpansionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bIsExpanded != nullptr)
		*bIsExpanded = Parms.bIsExpanded;

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
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserListEntryLibrary::IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemSelected");

	Params::UUserListEntryLibrary_IsListItemSelected_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemExpanded");

	Params::UUserListEntryLibrary_IsListItemExpanded_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UserListEntryLibrary.GetOwningListView
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UListViewBase*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserListEntryLibrary::GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry, class UListViewBase* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "GetOwningListView");

	Params::UUserListEntryLibrary_GetOwningListView_Params Parms{};

	Parms.UserListEntry = UserListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UObject*                     ListItemObject                                                   (Edit, BlueprintVisible, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// TScriptInterface<class IUserObjectListEntry>UserObjectListEntry                                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");

	Params::UUserObjectListEntryLibrary_GetListItemObject_Params Parms{};

	Parms.UserObjectListEntry = UserObjectListEntry;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// struct FSlateBrush                 InBrush                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, InstancedReference, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector4                    InCornerRadius                                                   (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InStrength                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              InBlurRadius                                                     (ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInApplyAlphaToBlur                                              (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UCanvasPanel::SetColorAndOpacity(struct FLinearColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "SetColorAndOpacity");

	Params::UCanvasPanel_SetColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UCanvasPanelSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanel::AddChildToCanvas(class UWidget** Content, class UCanvasPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::UCanvasPanel_AddChildToCanvas_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// int32                              InZOrder                                                         (ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InSize                                                           (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FVector2D UCanvasPanelSlot::SetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::UCanvasPanelSlot_SetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (Parm, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

void UCanvasPanelSlot::SetPosition(struct FVector2D* InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::UCanvasPanelSlot_SetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InPosition != nullptr)
		*InPosition = std::move(Parms.InPosition);

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InOffset                                                         (Edit, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InMinimumAnchors                                                 (ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InMaximumAnchors                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FAnchorData                 InLayoutData                                                     (ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               InbAutoSize                                                      (Edit, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FAnchors                    InAnchors                                                        (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InAlignment                                                      (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetZOrder(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::UCanvasPanelSlot_GetZOrder_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::UCanvasPanelSlot_GetSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetPosition(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::UCanvasPanelSlot_GetPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetOffsets(const struct FMargin& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::UCanvasPanelSlot_GetOffsets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetLayout(const struct FAnchorData& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::UCanvasPanelSlot_GetLayout_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetAutoSize(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::UCanvasPanelSlot_GetAutoSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetAnchors(const struct FAnchors& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::UCanvasPanelSlot_GetAnchors_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCanvasPanelSlot::GetAlignment(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::UCanvasPanelSlot_GetAlignment_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EButtonTouchMethod      InTouchMethod                                                    (ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// enum class EButtonPressMethod      InPressMethod                                                    (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// bool                               InIsChecked                                                      (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EButtonClickMethod      InClickMethod                                                    (Edit, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// enum class ECheckBoxState          InCheckedState                                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCheckBox::IsPressed(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::UCheckBox_IsPressed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCheckBox::IsChecked(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::UCheckBox_IsChecked_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UCheckBox::GetCheckedState(enum class ECheckBoxState ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::UCheckBox_GetCheckedState_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// float                              InRadius                                                         (ConstParm, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InPeriod                                                         (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              InNumberOfPieces                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxKey::SetSelectedOption(class FName* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "SetSelectedOption");

	Params::UComboBoxKey_SetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = Parms.Option;

}


// Function UMG.ComboBoxKey.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxKey::RemoveOption(class FName* Option, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "RemoveOption");

	Params::UComboBoxKey_RemoveOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = Parms.Option;

}


// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxKey::OnSelectionChangedEvent__DelegateSignature(class FName* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = Parms.SelectedItem;

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxKey::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "IsOpen");

	Params::UComboBoxKey_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxKey.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxKey::GetSelectedOption(class FName ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GetSelectedOption");

	Params::UComboBoxKey_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FName                        Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class FName UComboBoxKey::GenerateWidgetEvent__DelegateSignature(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GenerateWidgetEvent__DelegateSignature");

	Params::UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class FName                        Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxKey::AddOption(class FName* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "AddOption");

	Params::UComboBoxKey_AddOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = Parms.Option;

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
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxString::SetSelectedOption(class FString* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::UComboBoxString_SetSelectedOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

}


// Function UMG.ComboBoxString.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// enum class ESelectInfo             SelectInfo                                                       (BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ESelectInfo UComboBoxString::SetSelectedIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedIndex");

	Params::UComboBoxString_SetSelectedIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::RemoveOption(class FString* Option, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::UComboBoxString_RemoveOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

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
// class FString                      SelectedItem                                                     (ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// enum class ESelectInfo             SelectionType                                                    (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(class FString* SelectedItem, enum class ESelectInfo* SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

	if (SelectionType != nullptr)
		*SelectionType = Parms.SelectionType;

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "IsOpen");

	Params::UComboBoxString_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::GetSelectedOption(const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::UComboBoxString_GetSelectedOption_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::GetSelectedIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedIndex");

	Params::UComboBoxString_GetSelectedIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::GetOptionCount(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::UComboBoxString_GetOptionCount_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class FString                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::GetOptionAtIndex(int32* Index, const class FString& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::UComboBoxString_GetOptionAtIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UComboBoxString::FindOptionIndex(class FString* Option, int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::UComboBoxString_FindOptionIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

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
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UComboBoxString::AddOption(class FString* Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::UComboBoxString_AddOption_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

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
// struct FRadialBoxSettings          InSettings                                                       (Edit, ConstParm, BlueprintVisible, Net, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InEntrySpacing                                                   (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UDynamicEntryBoxBase::GetNumEntries(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetNumEntries");

	Params::UDynamicEntryBoxBase_GetNumEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UDynamicEntryBoxBase::GetAllEntries(const TArray<class UUserWidget*>& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetAllEntries");

	Params::UDynamicEntryBoxBase_GetAllEntries_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               bDeleteWidgets                                                   (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UUserWidget*                 EntryWidget                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UClass*                      EntryClass                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UDynamicEntryBox::BP_CreateEntryOfClass(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");

	Params::UDynamicEntryBox_BP_CreateEntryOfClass_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UDynamicEntryBox::BP_CreateEntry(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntry");

	Params::UDynamicEntryBox_BP_CreateEntry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UEditableTextBox::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::UEditableTextBox_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.EditableTextBox.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// bool                               bReadOnly                                                        (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetIsReadOnly(bool* bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsReadOnly");

	Params::UEditableTextBox_SetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bReadOnly != nullptr)
		*bReadOnly = Parms.bReadOnly;

}


// Function UMG.EditableTextBox.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPassword                                                      (Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetIsPassword(bool* bIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsPassword");

	Params::UEditableTextBox_SetIsPassword_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bIsPassword != nullptr)
		*bIsPassword = Parms.bIsPassword;

}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UEditableTextBox::SetHintText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetHintText");

	Params::UEditableTextBox_SetHintText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

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
// class FText                        InError                                                          (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UEditableTextBox::SetError(class FText* InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::UEditableTextBox_SetError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InError != nullptr)
		*InError = Parms.InError;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableTextBox::HasError(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::UEditableTextBox_HasError_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UEditableTextBox::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::UEditableTextBox_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               IsExpanded                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate)

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
// bool                               IsExpanded                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UExpandableArea::GetIsExpanded(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::UExpandableArea_GetIsExpanded_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              RowIndex                                                         (ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Transient, InstancedReference, SubobjectReference)
// float                              Coefficient                                                      (ConstParm, EditFixedSize, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

void UGridPanel::SetRowFill(int32* RowIndex, float* Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetRowFill");

	Params::UGridPanel_SetRowFill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (RowIndex != nullptr)
		*RowIndex = Parms.RowIndex;

	if (Coefficient != nullptr)
		*Coefficient = Parms.Coefficient;

}


// Function UMG.GridPanel.SetColumnFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ColumnIndex                                                      (ConstParm, BlueprintVisible, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              Coefficient                                                      (ConstParm, EditFixedSize, OutParm, ZeroConstructor, EditConst, GlobalConfig, SubobjectReference)

void UGridPanel::SetColumnFill(int32 ColumnIndex, float* Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetColumnFill");

	Params::UGridPanel_SetColumnFill_Params Parms{};

	Parms.ColumnIndex = ColumnIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Coefficient != nullptr)
		*Coefficient = Parms.Coefficient;

}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// int32                              InRow                                                            (ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InColumn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UGridSlot*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UGridPanel::AddChildToGrid(class UWidget** Content, int32 InRow, int32 InColumn, class UGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::UGridPanel_AddChildToGrid_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              InRowSpan                                                        (Edit, ExportObject, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              InRow                                                            (ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRow");

	Params::UGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// struct FVector2D                   InNudge                                                          (BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              InLayer                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              InColumnSpan                                                     (ExportObject, BlueprintReadOnly, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              InColumn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::UGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UHorizontalBoxSlot*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UHorizontalBox::AddChildToHorizontalBox(class UWidget** Content, class UHorizontalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::UHorizontalBox_AddChildToHorizontalBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSlateChildSize             InSize                                                           (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FSlateChildSize UHorizontalBoxSlot::SetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::UHorizontalBoxSlot_SetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class ESlateVisibility        InVisibility                                                     (Parm, GlobalConfig, SubobjectReference)

void UInputKeySelector::SetTextBlockVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetTextBlockVisibility");

	Params::UInputKeySelector_SetTextBlockVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputChord                 InSelectedKey                                                    (Edit, ConstParm, BlueprintVisible, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// class FText                        InNoKeySpecifiedText                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// class FText                        InKeySelectionText                                               (ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// TArray<struct FKey>                InKeys                                                           (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               bInAllowModifierKeys                                             (Edit, ConstParm, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               bInAllowGamepadKeys                                              (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// struct FInputChord                 SelectedKey                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)

void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord* SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");

	Params::UInputKeySelector_OnKeySelected__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedKey != nullptr)
		*SelectedKey = std::move(Parms.SelectedKey);

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInputKeySelector::GetIsSelectingKey(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::UInputKeySelector_GetIsSelectingKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               CanCache                                                         (ConstParm, Net, EditFixedSize, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UInvalidationBox::GetCanCache(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::UInvalidationBox_GetCanCache_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               bFocusOnOpen                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::ShouldOpenDueToClick(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::UMenuAnchor_ShouldOpenDueToClick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.SetPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMenuPlacement          InPlacement                                                      (BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               Ignore                                                           (Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               bFocusMenu                                                       (ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::IsOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::UMenuAnchor_IsOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::HasOpenSubMenus(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::UMenuAnchor_HasOpenSubMenus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::GetUserWidget__DelegateSignature(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetUserWidget__DelegateSignature");

	Params::UMenuAnchor_GetUserWidget__DelegateSignature_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::GetMenuPosition(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::UMenuAnchor_GetMenuPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.GetIsMenuAnchorOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::GetIsMenuAnchorOpen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIsMenuAnchorOpen");

	Params::UMenuAnchor_GetIsMenuAnchorOpen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.GetIgnoreClicksOutside
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMenuAnchor::GetIgnoreClicksOutside(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetIgnoreClicksOutside");

	Params::UMenuAnchor_GetIgnoreClicksOutside_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MenuAnchor.FitInWindow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFit                                                             (ConstParm, BlueprintVisible, Parm, OutParm, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

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
// struct FTextBlockStyle             InWidgetStyle                                                    (BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UMultiLineEditableText::SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetWidgetStyle");

	Params::UMultiLineEditableText_SetWidgetStyle_Params Parms{};

	Parms.InWidgetStyle = InWidgetStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UMultiLineEditableText::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::UMultiLineEditableText_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UMultiLineEditableText::SetIsReadOnly(bool* bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetIsReadOnly");

	Params::UMultiLineEditableText_SetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bReadOnly != nullptr)
		*bReadOnly = Parms.bReadOnly;

}


// Function UMG.MultiLineEditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateFontInfo              InFontInfo                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMultiLineEditableText::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::UMultiLineEditableText_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMultiLineEditableText::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetHintText");

	Params::UMultiLineEditableText_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMultiLineEditableText::GetFont(const struct FSlateFontInfo& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetFont");

	Params::UMultiLineEditableText_GetFont_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FTextBlockStyle             InTextStyle                                                      (BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)

void UMultiLineEditableTextBox::SetTextStyle(struct FTextBlockStyle* InTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetTextStyle");

	Params::UMultiLineEditableTextBox_SetTextStyle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InTextStyle != nullptr)
		*InTextStyle = std::move(Parms.InTextStyle);

}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UMultiLineEditableTextBox::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::UMultiLineEditableTextBox_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UMultiLineEditableTextBox::SetIsReadOnly(bool* bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");

	Params::UMultiLineEditableTextBox_SetIsReadOnly_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bReadOnly != nullptr)
		*bReadOnly = Parms.bReadOnly;

}


// Function UMG.MultiLineEditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InError                                                          (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)

void UMultiLineEditableTextBox::SetError(class FText* InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::UMultiLineEditableTextBox_SetError_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InError != nullptr)
		*InError = Parms.InError;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

enum class ETextCommit UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMultiLineEditableTextBox::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::UMultiLineEditableTextBox_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.MultiLineEditableTextBox.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UMultiLineEditableTextBox::GetHintText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetHintText");

	Params::UMultiLineEditableTextBox_GetHintText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOverlay::ReplaceOverlayChildAt(int32* Index, class UWidget** Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "ReplaceOverlayChildAt");

	Params::UOverlay_ReplaceOverlayChildAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UOverlaySlot*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UOverlay::AddChildToOverlay(class UWidget** Content, class UOverlaySlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::UOverlay_AddChildToOverlay_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              InterpKey                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InPercent                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InterpKey                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               InbIsMarquee                                                     (Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UProgressBar::SetIsMarquee(bool* InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::UProgressBar_SetIsMarquee_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InbIsMarquee != nullptr)
		*InbIsMarquee = Parms.InbIsMarquee;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (ExportObject, EditFixedSize, OutParm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)

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
// float                              InPercent                                                        (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class FName                        TextureParameter                                                 (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInRetainRendering                                               (Edit, BlueprintVisible, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// int32                              RenderPhase                                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              TotalPhases                                                      (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UMaterialInterface*          EffectMaterial                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void URetainerBox::GetEffectMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::URetainerBox_GetEffectMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// bool                               InPadLeft                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InPadRight                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InPadTop                                                         (EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               InPadBottom                                                      (Edit, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InUserSpecifiedScale                                             (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::UScaleBox_SetUserSpecifiedScale_Params Parms{};

	Parms.InUserSpecifiedScale = InUserSpecifiedScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretchDirection       InStretchDirection                                               (Edit, ConstParm, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::UScaleBox_SetStretchDirection_Params Parms{};

	Parms.InStretchDirection = InStretchDirection;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretch                InStretch                                                        (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UScaleBox::SetStretch(enum class EStretch InStretch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::UScaleBox_SetStretch_Params Parms{};

	Parms.InStretch = InStretch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIgnoreInheritedScale                                          (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InOffsetFraction                                                 (Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              InThumbSizeFraction                                              (Net, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBar", "SetState");

	Params::UScrollBar_SetState_Params Parms{};

	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InWidthOverride                                                  (ConstParm, BlueprintVisible, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMinDesiredWidth                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// float                              InMinDesiredHeight                                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMinAspectRatio                                                 (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMaxDesiredWidth                                                (Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMaxDesiredHeight                                               (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMaxAspectRatio                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InHeightOverride                                                 (Edit, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// struct FLinearColor                InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// bool                               InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USlider::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetValue");

	Params::USlider_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Slider.GetNormalizedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USlider::GetNormalizedValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetNormalizedValue");

	Params::USlider_GetNormalizedValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FVector2D                   InSize                                                           (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FVector2D USpacer::SetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spacer", "SetSize");

	Params::USpacer_SetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetValue(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetValue");

	Params::USpinBox_SetValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMinValue(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::USpinBox_SetMinValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMinSliderValue(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::USpinBox_SetMinSliderValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMinFractionalDigits(int32* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinFractionalDigits");

	Params::USpinBox_SetMinFractionalDigits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMaxValue(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::USpinBox_SetMaxValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMaxSliderValue(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::USpinBox_SetMaxSliderValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetMaxFractionalDigits(int32* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxFractionalDigits");

	Params::USpinBox_SetMaxFractionalDigits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Edit, BlueprintVisible, Parm, ReturnParm, GlobalConfig, SubobjectReference)

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
// float                              NewValue                                                         (ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetDelta(float* NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetDelta");

	Params::USpinBox_SetDelta_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (NewValue != nullptr)
		*NewValue = Parms.NewValue;

}


// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)

void USpinBox::SetAlwaysUsesDeltaSnap(bool* bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetAlwaysUsesDeltaSnap");

	Params::USpinBox_SetAlwaysUsesDeltaSnap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (bNewValue != nullptr)
		*bNewValue = Parms.bNewValue;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// enum class ETextCommit             CommitMethod                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// float                              InValue                                                          (Edit, BlueprintVisible, Net, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetValue");

	Params::USpinBox_GetValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMinValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::USpinBox_GetMinValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMinSliderValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::USpinBox_GetMinSliderValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMinFractionalDigits(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinFractionalDigits");

	Params::USpinBox_GetMinFractionalDigits_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMaxValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::USpinBox_GetMaxValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMaxSliderValue(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::USpinBox_GetMaxSliderValue_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetMaxFractionalDigits(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxFractionalDigits");

	Params::USpinBox_GetMaxFractionalDigits_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetDelta(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetDelta");

	Params::USpinBox_GetDelta_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void USpinBox::GetAlwaysUsesDeltaSnap(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetAlwaysUsesDeltaSnap");

	Params::USpinBox_GetAlwaysUsesDeltaSnap_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UStackBox::ReplaceStackBoxChildAt(int32* Index, class UWidget** Content, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "ReplaceStackBoxChildAt");

	Params::UStackBox_ReplaceStackBoxChildAt_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Content != nullptr)
		*Content = Parms.Content;

}


// Function UMG.StackBox.AddChildToStackBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UStackBoxSlot*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UStackBox::AddChildToStackBox(class UWidget** Content, class UStackBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "AddChildToStackBox");

	Params::UStackBox_AddChildToStackBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class ETextTransformPolicy    InTransformPolicy                                                (ConstParm, EditFixedSize, Config, InstancedReference, SubobjectReference)

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
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class FText                        InText                                                           (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UTextBlock::SetText(class FText* InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetText");

	Params::UTextBlock_SetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InText != nullptr)
		*InText = Parms.InText;

}


// Function UMG.TextBlock.SetString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

void UTextBlock::SetString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetString");

	Params::UTextBlock_SetString_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetStrikeBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (Edit, ConstParm, BlueprintVisible, Net, Config, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InShadowOffset                                                   (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)

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
// struct FLinearColor                InShadowColorAndOpacity                                          (ConstParm, BlueprintReadOnly, Config, InstancedReference, SubobjectReference)

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
// float                              InOpacity                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)

void UTextBlock::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::UTextBlock_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// class UMaterialInterface*          InMaterial                                                       (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateFontInfo              InFontInfo                                                       (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

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
// struct FSlateColor                 InColorAndOpacity                                                (Edit, ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UTextBlock::SetColorAndOpacity(struct FSlateColor* InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::UTextBlock_SetColorAndOpacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InColorAndOpacity != nullptr)
		*InColorAndOpacity = std::move(Parms.InColorAndOpacity);

}


// Function UMG.TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (Config, InstancedReference, SubobjectReference)

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
// class FText                        ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTextBlock::GetText(class FText ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetText");

	Params::UTextBlock_GetText_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTextBlock::GetDynamicOutlineMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::UTextBlock_GetDynamicOutlineMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTextBlock::GetDynamicFontMaterial(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::UTextBlock_GetDynamicFontMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              InNumberOfPieces                                                 (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInAnimateVertically                                             (ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInAnimateOpacity                                                (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bInAnimateHorizontally                                           (BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              NewWidth                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              NewHeight                                                        (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTileView::GetEntryWidth(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryWidth");

	Params::UTileView_GetEntryWidth_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.TileView.GetEntryHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UTileView::GetEntryHeight(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryHeight");

	Params::UTileView_GetEntryHeight_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UObject*                     Item                                                             (Edit, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Config)
// bool                               bExpandItem                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FMargin                     InSlotPadding                                                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMinDesiredSlotWidth                                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// float                              InMinDesiredSlotHeight                                           (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// int32                              InRow                                                            (ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// int32                              InColumn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// class UUniformGridSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UUniformGridPanel::AddChildToUniformGrid(class UWidget** Content, int32 InRow, int32 InColumn, class UUniformGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UUniformGridPanel_AddChildToUniformGrid_Params Parms{};

	Parms.InRow = InRow;
	Parms.InColumn = InColumn;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              InRow                                                            (ConstParm, Net, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UUniformGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UUniformGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// int32                              InColumn                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

void UUniformGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UUniformGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UVerticalBoxSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UVerticalBox::AddChildToVerticalBox(class UWidget** Content, class UVerticalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::UVerticalBox_AddChildToVerticalBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FSlateChildSize             InSize                                                           (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

struct FSlateChildSize UVerticalBoxSlot::SetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::UVerticalBoxSlot_SetSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UClass*                      ActorClass                                                       (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class AActor*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UViewport::Spawn(class AActor* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "Spawn");

	Params::UViewport_Spawn_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FRotator                    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UViewport::GetViewRotation(const struct FRotator& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::UViewport_GetViewRotation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UViewport::GetViewportWorld(class UWorld* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::UViewport_GetViewportWorld_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UViewport::GetViewLocation(const struct FVector& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::UViewport_GetViewLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EWindowVisibility       InVisibility                                                     (Parm, GlobalConfig, SubobjectReference)

void UWidgetComponent::SetWindowVisibility(enum class EWindowVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowVisibility");

	Params::UWidgetComponent_SetWindowVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.SetWindowFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWindowFocusable                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EWidgetSpace            NewSpace                                                         (Edit, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UUserWidget*                 Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// bool                               bWantTwoSided                                                    (Edit, ExportObject, EditFixedSize, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FLinearColor                NewTintColorAndOpacity                                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               bWantTickWhenOffscreen                                           (Edit, BlueprintReadOnly, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class ETickMode               InTickMode                                                       (Edit, ConstParm, ExportObject, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

enum class ETickMode UWidgetComponent::SetTickMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickMode");

	Params::UWidgetComponent_SetTickMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetRedrawTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRedrawTime                                                     (BlueprintVisible, Net, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

float UWidgetComponent::SetRedrawTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetRedrawTime");

	Params::UWidgetComponent_SetRedrawTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetPivot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPivot                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector2D UWidgetComponent::SetPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetPivot");

	Params::UWidgetComponent_SetPivot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, Config, GlobalConfig, DuplicateTransient)

class ULocalPlayer* UWidgetComponent::SetOwnerPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::UWidgetComponent_SetOwnerPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetManuallyRedraw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseManualRedraw                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UWidgetComponent::SetManuallyRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetManuallyRedraw");

	Params::UWidgetComponent_SetManuallyRedraw_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetGeometryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetGeometryMode     InGeometryMode                                                   (ConstParm, BlueprintVisible, ExportObject, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

enum class EWidgetGeometryMode UWidgetComponent::SetGeometryMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetGeometryMode");

	Params::UWidgetComponent_SetGeometryMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)

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
// bool                               bInDrawAtDesiredSize                                             (Edit, ConstParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool UWidgetComponent::SetDrawAtDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");

	Params::UWidgetComponent_SetDrawAtDesiredSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCylinderArcAngle                                               (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FLinearColor                NewBackgroundColor                                               (Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::IsWidgetVisible(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "IsWidgetVisible");

	Params::UWidgetComponent_IsWidgetVisible_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWindowVisiblility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWindowVisibility       ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetWindowVisiblility(enum class EWindowVisibility ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowVisiblility");

	Params::UWidgetComponent_GetWindowVisiblility_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWindowFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetWindowFocusable(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowFocusable");

	Params::UWidgetComponent_GetWindowFocusable_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWidgetSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetSpace            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetWidgetSpace(enum class EWidgetSpace ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidgetSpace");

	Params::UWidgetComponent_GetWidgetSpace_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetWidget(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidget");

	Params::UWidgetComponent_GetWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetUserWidgetObject(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::UWidgetComponent_GetUserWidgetObject_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetTwoSided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetTwoSided(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTwoSided");

	Params::UWidgetComponent_GetTwoSided_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetTickWhenOffscreen(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTickWhenOffscreen");

	Params::UWidgetComponent_GetTickWhenOffscreen_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetRenderTarget(class UTextureRenderTarget2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::UWidgetComponent_GetRenderTarget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetRedrawTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetRedrawTime(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRedrawTime");

	Params::UWidgetComponent_GetRedrawTime_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetPivot(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetPivot");

	Params::UWidgetComponent_GetPivot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetOwnerPlayer(class ULocalPlayer* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::UWidgetComponent_GetOwnerPlayer_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetMaterialInstance(class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::UWidgetComponent_GetMaterialInstance_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetManuallyRedraw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetManuallyRedraw(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetManuallyRedraw");

	Params::UWidgetComponent_GetManuallyRedraw_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetGeometryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetGeometryMode     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetGeometryMode(enum class EWidgetGeometryMode ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetGeometryMode");

	Params::UWidgetComponent_GetGeometryMode_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetDrawSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::UWidgetComponent_GetDrawSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetDrawAtDesiredSize(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");

	Params::UWidgetComponent_GetDrawAtDesiredSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetCylinderArcAngle(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCylinderArcAngle");

	Params::UWidgetComponent_GetCylinderArcAngle_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetComponent::GetCurrentDrawSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCurrentDrawSize");

	Params::UWidgetComponent_GetCurrentDrawSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// class UWidget*                     FocusWidget                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

class UWidget* UWidgetInteractionComponent::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetFocus");

	Params::UWidgetInteractionComponent_SetFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  HitResult                                                        (Edit, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, EditConst)

struct FHitResult UWidgetInteractionComponent::SetCustomHitResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::UWidgetInteractionComponent_SetCustomHitResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Characters                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
// bool                               bRepeat                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::SendKeyChar(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::UWidgetInteractionComponent_SendKeyChar_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollDelta                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

struct FKey UWidgetInteractionComponent::ReleasePointerKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::UWidgetInteractionComponent_ReleasePointerKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FKey UWidgetInteractionComponent::ReleaseKey(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::UWidgetInteractionComponent_ReleaseKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)

struct FKey UWidgetInteractionComponent::PressPointerKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::UWidgetInteractionComponent_PressPointerKey_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// bool                               bRepeat                                                          (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetInteractionComponent::PressKey(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::UWidgetInteractionComponent_PressKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FKey UWidgetInteractionComponent::PressAndReleaseKey(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::UWidgetInteractionComponent_PressAndReleaseKey_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::IsOverInteractableWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::UWidgetInteractionComponent_IsOverInteractableWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::IsOverHitTestVisibleWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::IsOverFocusableWidget(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::UWidgetInteractionComponent_IsOverFocusableWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::GetLastHitResult(const struct FHitResult& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::UWidgetInteractionComponent_GetLastHitResult_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::GetHoveredWidgetComponent(class UWidgetComponent* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::UWidgetInteractionComponent_GetHoveredWidgetComponent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetInteractionComponent::Get2DHitLocation(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::UWidgetInteractionComponent_Get2DHitLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UWidgetSwitcher::SetActiveWidgetIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::UWidgetSwitcher_SetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)

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
// int32                              Index                                                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetSwitcher::GetWidgetAtIndex(int32* Index, class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::UWidgetSwitcher_GetWidgetAtIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetSwitcher::GetNumWidgets(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::UWidgetSwitcher_GetNumWidgets_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetSwitcher::GetActiveWidgetIndex(int32 ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::UWidgetSwitcher_GetActiveWidgetIndex_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetSwitcher::GetActiveWidget(class UWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidget");

	Params::UWidgetSwitcher_GetActiveWidget_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FVector2D                   InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// class UWidget*                     Content                                                          (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// class UWrapBoxSlot*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWrapBox::AddChildToWrapBox(class UWidget** Content, class UWrapBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "AddChildToWrapBox");

	Params::UWrapBox_AddChildToWrapBox_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Content != nullptr)
		*Content = Parms.Content;

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
// enum class EVerticalAlignment      InVerticalAlignment                                              (Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// struct FMargin                     InPadding                                                        (Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

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
// bool                               InForceNewLine                                                   (BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (ConstParm, BlueprintVisible, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
// float                              InFillSpanWhenLessThan                                           (ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// bool                               InbFillEmptySpace                                                (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)

struct FPointerEvent UDragDropOperation::Drop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::UDragDropOperation_Drop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)

struct FPointerEvent UDragDropOperation::Dragged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::UDragDropOperation_Dragged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)

struct FPointerEvent UDragDropOperation::DragCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::UDragDropOperation_DragCancelled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalVector                                                      (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteVector                                                   (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// float                              LocalScalar                                                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// float                              AbsoluteScalar                                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ScreenPosition                                                   (ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   LocalCoordinate                                                  (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIncludeWindowPosition                                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

bool USlateBlueprintLibrary::ScreenToWidgetLocal(struct FVector2D* ScreenPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::USlateBlueprintLibrary_ScreenToWidgetLocal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   AbsoluteCoordinate                                               (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               bIncludeWindowPosition                                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalCoordinate                                                  (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PixelPosition                                                    (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::LocalToViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::USlateBlueprintLibrary_LocalToViewport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   LocalCoordinate                                                  (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::USlateBlueprintLibrary_LocalToAbsolute_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteCoordinate                                               (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::IsUnderLocation(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::USlateBlueprintLibrary_IsUnderLocation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry USlateBlueprintLibrary::GetLocalTopLeft(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");

	Params::USlateBlueprintLibrary_GetLocalTopLeft_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry USlateBlueprintLibrary::GetLocalSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::USlateBlueprintLibrary_GetLocalSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FGeometry USlateBlueprintLibrary::GetAbsoluteSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");

	Params::USlateBlueprintLibrary_GetAbsoluteSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 A                                                                (Edit, Parm, OutParm, ReturnParm, Transient, Config)
// struct FSlateBrush                 B                                                                (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, Config)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FSlateBrush USlateBlueprintLibrary::EqualEqual_SlateBrush(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::USlateBlueprintLibrary_EqualEqual_SlateBrush_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   AbsoluteDesktopCoordinate                                        (ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   PixelPosition                                                    (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ViewportPosition                                                 (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

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
// struct FGeometry                   Geometry                                                         (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Config, DisableEditOnInstance)
// struct FVector2D                   AbsoluteCoordinate                                               (ExportObject, Parm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::USlateBlueprintLibrary_AbsoluteToLocal_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::UWidgetBlueprintLibrary_UnlockMouse_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::Unhandled(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::UWidgetBlueprintLibrary_Unhandled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     TitleBarContent                                                  (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class EWindowTitleBarMode     Mode                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               bTitleBarDragEnabled                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bWindowButtonsVisible                                            (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bTitleBarVisible                                                 (Edit, Parm, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetWindowTitleBarState(enum class EWindowTitleBarMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarState_Params Parms{};

	Parms.Mode = Mode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)

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
// bool                               bActive                                                          (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UWidget*                     FocusWidget                                                      (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bInAllUsers                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::SetUserFocus(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::UWidgetBlueprintLibrary_SetUserFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   NewMousePosition                                                 (BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UWidgetBlueprintLibrary::SetMousePosition(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::UWidgetBlueprintLibrary_SetMousePosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UWidget*                     InWidgetToFocus                                                  (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class EMouseLockMode          InMouseLockMode                                                  (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bFlushInput                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// bool                               bFlushInput                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController** PlayerController)
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

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// class UWidget*                     InWidgetToFocus                                                  (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// enum class EMouseLockMode          InMouseLockMode                                                  (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bHideCursorDuringCapture                                         (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bFlushInput                                                      (BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController** PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// enum class EMouseCursor            CursorShape                                                      (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// class FName                        CursorName                                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   HotSpot                                                          (ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FVector2D UWidgetBlueprintLibrary::SetHardwareCursor(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");

	Params::UWidgetBlueprintLibrary_SetHardwareCursor_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
// enum class EColorVisionDeficiency  Type                                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
// float                              Severity                                                         (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
// bool                               CorrectDeficiency                                                (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               ShowCorrectionWithDeficiency                                     (ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float* Severity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");

	Params::UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Severity != nullptr)
		*Severity = Parms.Severity;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UMaterialInterface*          Material                                                         (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

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
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::UWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bInAllJoysticks                                                  (Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::ReleaseJoystickCapture(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::NoResourceBrush(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::UWidgetBlueprintLibrary_NoResourceBrush_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)
// int32                              Width                                                            (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// int32                              Height                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D** Texture, const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::UWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (Edit, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              Width                                                            (ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// int32                              Height                                                           (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst)
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

int32 UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*            BrushAsset                                                       (ConstParm, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FSlateBrush                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class USlateBrushAsset* UWidgetBlueprintLibrary::MakeBrushFromAsset(const struct FSlateBrush& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::UWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ExportObject, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetBlueprintLibrary::LockMouse(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::UWidgetBlueprintLibrary_LockMouse_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::IsDragDropping(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::UWidgetBlueprintLibrary_IsDragDropping_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::Handled(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::UWidgetBlueprintLibrary_Handled_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector4                    SafePadding                                                      (Edit, ConstParm, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   SafePaddingScale                                                 (ConstParm, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector4                    SpillOverPadding                                                 (Edit, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FVector4 UWidgetBlueprintLibrary::GetSafeZonePadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::UWidgetBlueprintLibrary_GetSafeZonePadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent           Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FKeyEvent                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event, const struct FKeyEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(const struct FPointerEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent            Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(const struct FKeyEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent             Event                                                            (ExportObject, EditFixedSize, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FInputEvent                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event, const struct FInputEvent& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms{};

	Parms.Event = Event;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush* Brush, class UMaterialInstanceDynamic* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::UWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetDragDroppingContent(class UDragDropOperation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::UWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UTexture2D*                  ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush* Brush, class UTexture2D* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UMaterialInterface*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush* Brush, class UMaterialInterface* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// class UObject*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush* Brush, class UObject* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::UWidgetBlueprintLibrary_GetBrushResource_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class UUserWidget*>         FoundWidgets                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UClass*                      Interface                                                        (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor)
// class UClass*                      OutWidgetClass                                                   (Edit, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               TopLevelOnly                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UClass* Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms{};

	Parms.Interface = Interface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// TArray<class UUserWidget*>         FoundWidgets                                                     (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UClass*                      WidgetClass                                                      (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               TopLevelOnly                                                     (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

bool UWidgetBlueprintLibrary::GetAllWidgetsOfClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::UWidgetBlueprintLibrary_EndDragDrop_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// struct FVector2D                   Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// class UFont*                       Font                                                             (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance)
// int32                              FontSize                                                         (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class FName                        FontTypeFace                                                     (Net, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext* Context, class FText* Text, struct FVector2D* Position, class UFont** Font)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::UWidgetBlueprintLibrary_DrawTextFormatted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Font != nullptr)
		*Font = Parms.Font;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class FString                      InString                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
// struct FVector2D                   Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawText(struct FPaintContext* Context, const class FString& InString, struct FVector2D* Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::UWidgetBlueprintLibrary_DrawText_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawSpline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   Start                                                            (Edit, BlueprintVisible, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// struct FVector2D                   StartDir                                                         (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   End                                                              (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, Transient, DisableEditOnInstance)
// struct FVector2D                   EndDir                                                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawSpline(struct FPaintContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawSpline");

	Params::UWidgetBlueprintLibrary_DrawSpline_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// TArray<struct FVector2D>           Points                                                           (Edit, Parm, OutParm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bAntiAlias                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawLines(struct FPaintContext* Context, TArray<struct FVector2D>* Points)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::UWidgetBlueprintLibrary_DrawLines_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Points != nullptr)
		*Points = std::move(Parms.Points);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   PositionA                                                        (Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FVector2D                   PositionB                                                        (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bAntiAlias                                                       (Edit, BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// float                              Thickness                                                        (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)

float UWidgetBlueprintLibrary::DrawLine(struct FPaintContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::UWidgetBlueprintLibrary_DrawLine_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FVector2D                   Position                                                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Transient, Config)
// struct FVector2D                   Size                                                             (Edit, ConstParm, Parm, OutParm, ReturnParm, Transient, Config)
// class USlateBrushAsset*            Brush                                                            (ConstParm, BlueprintReadOnly, Net, OutParm, DisableEditOnTemplate, EditConst)
// struct FLinearColor                Tint                                                             (ConstParm, EditFixedSize, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UWidgetBlueprintLibrary::DrawBox(struct FPaintContext* Context, struct FVector2D* Position, class USlateBrushAsset** Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::UWidgetBlueprintLibrary_DrawBox_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (Position != nullptr)
		*Position = std::move(Parms.Position);

	if (Brush != nullptr)
		*Brush = Parms.Brush;

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
// struct FPointerEvent               PointerEvent                                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, Config, DisableEditOnInstance)
// class UWidget*                     WidgetDetectingDrag                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FKey                        DragKey                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FKey UWidgetBlueprintLibrary::DetectDragIfPressed(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::UWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UWidget*                     WidgetDetectingDrag                                              (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FKey                        DragKey                                                          (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FKey UWidgetBlueprintLibrary::DetectDrag(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::UWidgetBlueprintLibrary_DetectDrag_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UClass*                      OperationClass                                                   (ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UDragDropOperation*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UClass* UWidgetBlueprintLibrary::CreateDragDropOperation(class UDragDropOperation* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::UWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// class UClass*                      WidgetType                                                       (BlueprintVisible, Net, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class APlayerController*           OwningPlayer                                                     (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UUserWidget*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class APlayerController* UWidgetBlueprintLibrary::Create(class UUserWidget* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::UWidgetBlueprintLibrary_Create_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bInAllUsers                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::ClearUserFocus(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::UWidgetBlueprintLibrary_ClearUserFocus_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ExportObject, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetBlueprintLibrary::CaptureMouse(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::UWidgetBlueprintLibrary_CaptureMouse_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (ConstParm, BlueprintReadOnly, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// class UWidget*                     CapturingWidget                                                  (Edit, ExportObject, Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               bInAllJoysticks                                                  (Parm, OutParm, ReturnParm, GlobalConfig, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetBlueprintLibrary::CaptureJoystick(const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::UWidgetBlueprintLibrary_CaptureJoystick_Params Parms{};

	Parms.ReturnValue = ReturnValue;

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
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UWrapBoxSlot*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWrapBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UWidgetSwitcherSlot*         ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidgetSwitcherSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");

	Params::UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UVerticalBoxSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UVerticalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UUniformGridSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UUniformGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class USizeBoxSlot*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class USizeBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UScrollBoxSlot*              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UScrollBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UScaleBoxSlot*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UScaleBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class USafeZoneSlot*               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class USafeZoneSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UOverlaySlot*                ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UOverlaySlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::UWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UHorizontalBoxSlot*          ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UHorizontalBoxSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UGridSlot*                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsGridSlot(class UGridSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsGridSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UCanvasPanelSlot*            ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UCanvasPanelSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::UWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, EditConst)
// class UBorderSlot*                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UWidget* UWidgetLayoutLibrary::SlotAsBorderSlot(class UBorderSlot* ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::UWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

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
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FVector                     WorldLocation                                                    (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   ScreenPosition                                                   (ExportObject, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               bPlayerViewportRelative                                          (Edit, ConstParm, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController** PlayerController, struct FVector2D* ScreenPosition, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

	if (ScreenPosition != nullptr)
		*ScreenPosition = std::move(Parms.ScreenPosition);

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FGeometry                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UWidgetLayoutLibrary::GetViewportWidgetGeometry(const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UWidgetLayoutLibrary::GetViewportSize(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::UWidgetLayoutLibrary_GetViewportSize_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// float                              ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UWidgetLayoutLibrary::GetViewportScale(float ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::UWidgetLayoutLibrary_GetViewportScale_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
// struct FGeometry                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController** PlayerController, const struct FGeometry& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerController != nullptr)
		*PlayerController = Parms.PlayerController;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst)
// float                              LocationX                                                        (ConstParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
// float                              LocationY                                                        (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
// bool                               ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

float UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController** Player, float LocationX, bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms{};

	Parms.LocationX = LocationX;
	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Player != nullptr)
		*Player = Parms.Player;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

class UObject* UWidgetLayoutLibrary::GetMousePositionOnViewport(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");

	Params::UWidgetLayoutLibrary_GetMousePositionOnViewport_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

void UWidgetLayoutLibrary::GetMousePositionOnPlatform(const struct FVector2D& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");

	Params::UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


