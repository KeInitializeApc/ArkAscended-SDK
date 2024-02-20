#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_CustomComboBoxOption.UI_CustomComboBoxOption_C
// (None)

class UClass* UUI_CustomComboBoxOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_CustomComboBoxOption_C");

	return Clss;
}


// UI_CustomComboBoxOption_C UI_CustomComboBoxOption.Default__UI_CustomComboBoxOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_CustomComboBoxOption_C* UUI_CustomComboBoxOption_C::GetDefaultObj()
{
	static class UUI_CustomComboBoxOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_CustomComboBoxOption_C*>(UUI_CustomComboBoxOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnOptionSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, GlobalConfig, SubobjectReference)
// int64                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// TScriptInterface<class IBPI_CustomComboBoxInterface_C>K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface              (BlueprintVisible, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_CustomComboBoxOption_C::OnOptionSelected(class FString* Option, int64* ID, TScriptInterface<class IBPI_CustomComboBoxInterface_C> K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnOptionSelected");

	Params::UUI_CustomComboBoxOption_C_OnOptionSelected_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface = K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface;

	UObject::ProcessEvent(Func, &Parms);

	if (Option != nullptr)
		*Option = std::move(Parms.Option);

	if (ID != nullptr)
		*ID = Parms.ID;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.UpdateHoveredOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)

bool UUI_CustomComboBoxOption_C::UpdateHoveredOption(int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "UpdateHoveredOption");

	Params::UUI_CustomComboBoxOption_C_UpdateHoveredOption_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnNavRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, EditFixedSize, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, Net, EditFixedSize, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class UUI_SubMinusCategory_C*      K2Node_DynamicCast_AsUI_Sub__Category                            (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_CustomComboBoxOption_C::OnNavRight(enum class EUINavigation Navigation, class UWidget* ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UUI_SubMinusCategory_C* K2Node_DynamicCast_AsUI_Sub__Category)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnNavRight");

	Params::UUI_CustomComboBoxOption_C_OnNavRight_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ReturnValue = ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Sub__Category = K2Node_DynamicCast_AsUI_Sub__Category;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)

int32 UUI_CustomComboBoxOption_C::RemoveSpacingIfNotHaveArrow(bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "RemoveSpacingIfNotHaveArrow");

	Params::UUI_CustomComboBoxOption_C_RemoveSpacingIfNotHaveArrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::RemoveSpacingIfNotHaveImage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "RemoveSpacingIfNotHaveImage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.CheckIfSubCategorySelected
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      SelectedOption                                                   (Edit, ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, EditConst)
// bool                               IsSelected                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)

bool UUI_CustomComboBoxOption_C::CheckIfSubCategorySelected(class FString* SelectedOption, bool* IsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "CheckIfSubCategorySelected");

	Params::UUI_CustomComboBoxOption_C_CheckIfSubCategorySelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedOption != nullptr)
		*SelectedOption = std::move(Parms.SelectedOption);

	if (IsSelected != nullptr)
		*IsSelected = Parms.IsSelected;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, EditFixedSize, Transient, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)

float UUI_CustomComboBoxOption_C::OnUpdate(double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnUpdate");

	Params::UUI_CustomComboBoxOption_C_OnUpdate_Params Parms{};

	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ContinueUpdating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (Edit, ConstParm, ExportObject, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (ConstParm, Net, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)

struct FTimerHandle UUI_CustomComboBoxOption_C::ContinueUpdating(bool CallFunc_K2_TimerExists_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "ContinueUpdating");

	Params::UUI_CustomComboBoxOption_C_ContinueUpdating_Params Parms{};

	Parms.CallFunc_K2_TimerExists_ReturnValue = CallFunc_K2_TimerExists_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.StopUpdating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::StopUpdating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "StopUpdating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnFail_2F79E7094E3FA19CAF12DEBE91370E8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_CustomComboBoxOption_C::OnFail_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnFail_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnFail_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_CustomComboBoxOption_C::OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UUI_CustomComboBoxOption_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "PreConstruct");

	Params::UUI_CustomComboBoxOption_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event On Sub Option Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

int64 UUI_CustomComboBoxOption_C::Event_On_Sub_Option_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event On Sub Option Clicked");

	Params::UUI_CustomComboBoxOption_C_Event_On_Sub_Option_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Check If Still Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Check_If_Still_Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Check If Still Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__CustomComboBoxOption_OptionButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Check If Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Check_If_Selected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Check If Selected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUI_CustomComboBoxOption_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnAddedToFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUI_CustomComboBoxOption_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnRemovedFromFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Update Navigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLast                                                           (BlueprintVisible, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

void UUI_CustomComboBoxOption_C::Event_Update_Navigation(bool IsLast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Update Navigation");

	Params::UUI_CustomComboBoxOption_C_Event_Update_Navigation_Params Parms{};

	Parms.IsLast = IsLast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Remove Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::Event_Remove_Scroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Remove Scroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "BndEvt__UI_CustomComboBoxOption_Button_Option_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_CustomComboBoxOption_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Tick");

	Params::UUI_CustomComboBoxOption_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.FocusON
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::FocusON()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "FocusON");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.FocusOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_CustomComboBoxOption_C::FocusOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "FocusOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ExecuteUbergraph_UI_CustomComboBoxOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference)
// enum class EUINavigationRule       Temp_byte_Variable                                               (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// enum class EUINavigationRule       Temp_byte_Variable_1                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, SubobjectReference)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_CustomEvent_SubCategory                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ConstParm, EditFixedSize, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CheckIfSubCategorySelected_IsSelected                   (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetViewportScale_ReturnValue                            (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (BlueprintVisible, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_CustomEvent_IsLast                                        (ExportObject, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UUI_SubMinusCategories_Scroll_C*CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// enum class EUINavigationRule       K2Node_Select_Default                                            (ConstParm, Net, Parm, OutParm, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Transient, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (BlueprintReadOnly, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (Edit, EditFixedSize, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_2                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_Select_Default_3                                          (ConstParm, Net, Parm, OutParm, Config, SubobjectReference, NonTransactional)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (OutParm, ZeroConstructor, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_CustomComboBoxOption_C::ExecuteUbergraph_UI_CustomComboBoxOption(bool* Temp_bool_Variable, enum class EUINavigationRule* Temp_byte_Variable, enum class EUINavigationRule* Temp_byte_Variable_1, bool* Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool* Temp_bool_Variable_2, class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility* Temp_byte_Variable_2, enum class ESlateVisibility* Temp_byte_Variable_3, class FText* CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, class FString* CallFunc_Conv_TextToString_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition, double* CallFunc_BreakVector2D_X, double* CallFunc_BreakVector2D_Y, bool* CallFunc_EqualEqual_IntInt_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_EqualEqual_IntInt_ReturnValue_1, class APlayerController** CallFunc_GetOwningPlayer_ReturnValue, bool K2Node_CustomEvent_IsLast, enum class EUINavigationRule* K2Node_Select_Default, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool* Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1, double* CallFunc_BreakVector2D_X_1, double* CallFunc_BreakVector2D_Y_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, bool* CallFunc_EqualEqual_IntInt_ReturnValue_2, struct FSlateColor* K2Node_Select_Default_2, struct FSlateColor* K2Node_Select_Default_3, const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, struct FButtonStyle* K2Node_MakeStruct_ButtonStyle, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "ExecuteUbergraph_UI_CustomComboBoxOption");

	Params::UUI_CustomComboBoxOption_C_ExecuteUbergraph_UI_CustomComboBoxOption_Params Parms{};

	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;
	Parms.K2Node_CustomEvent_IsLast = K2Node_CustomEvent_IsLast;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Temp_bool_Variable != nullptr)
		*Temp_bool_Variable = Parms.Temp_bool_Variable;

	if (Temp_byte_Variable != nullptr)
		*Temp_byte_Variable = Parms.Temp_byte_Variable;

	if (Temp_byte_Variable_1 != nullptr)
		*Temp_byte_Variable_1 = Parms.Temp_byte_Variable_1;

	if (Temp_bool_Variable_1 != nullptr)
		*Temp_bool_Variable_1 = Parms.Temp_bool_Variable_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (Temp_bool_Variable_2 != nullptr)
		*Temp_bool_Variable_2 = Parms.Temp_bool_Variable_2;

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (Temp_byte_Variable_2 != nullptr)
		*Temp_byte_Variable_2 = Parms.Temp_byte_Variable_2;

	if (Temp_byte_Variable_3 != nullptr)
		*Temp_byte_Variable_3 = Parms.Temp_byte_Variable_3;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	if (CallFunc_Conv_TextToString_ReturnValue != nullptr)
		*CallFunc_Conv_TextToString_ReturnValue = std::move(Parms.CallFunc_Conv_TextToString_ReturnValue);

	if (CallFunc_BreakVector2D_X != nullptr)
		*CallFunc_BreakVector2D_X = Parms.CallFunc_BreakVector2D_X;

	if (CallFunc_BreakVector2D_Y != nullptr)
		*CallFunc_BreakVector2D_Y = Parms.CallFunc_BreakVector2D_Y;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_1 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_1 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1;

	if (CallFunc_GetOwningPlayer_ReturnValue != nullptr)
		*CallFunc_GetOwningPlayer_ReturnValue = Parms.CallFunc_GetOwningPlayer_ReturnValue;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_Array_Contains_ReturnValue != nullptr)
		*CallFunc_Array_Contains_ReturnValue = Parms.CallFunc_Array_Contains_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (Temp_bool_Variable_3 != nullptr)
		*Temp_bool_Variable_3 = Parms.Temp_bool_Variable_3;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_BreakVector2D_X_1 != nullptr)
		*CallFunc_BreakVector2D_X_1 = Parms.CallFunc_BreakVector2D_X_1;

	if (CallFunc_BreakVector2D_Y_1 != nullptr)
		*CallFunc_BreakVector2D_Y_1 = Parms.CallFunc_BreakVector2D_Y_1;

	if (CallFunc_Add_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Add_DoubleDouble_ReturnValue = Parms.CallFunc_Add_DoubleDouble_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_2 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_2 = Parms.CallFunc_Conv_StringToText_ReturnValue_2;

	if (CallFunc_EqualEqual_IntInt_ReturnValue_2 != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue_2 = Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	if (K2Node_MakeStruct_ButtonStyle != nullptr)
		*K2Node_MakeStruct_ButtonStyle = std::move(Parms.K2Node_MakeStruct_ButtonStyle);

	return Parms.ReturnValue;

}

}


