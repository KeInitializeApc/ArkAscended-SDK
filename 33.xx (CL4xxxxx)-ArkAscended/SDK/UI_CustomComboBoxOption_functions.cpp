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
// class FString                      Option                                                           (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int64                              ID                                                               (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor)
// TScriptInterface<class IBPI_CustomComboBoxInterface_C>K2Node_DynamicCast_AsBPI_Custom_Combo_Box_Interface              (Edit, ConstParm, BlueprintReadOnly, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

TScriptInterface<class IBPI_CustomComboBoxInterface_C> UUI_CustomComboBoxOption_C::OnOptionSelected(int64* ID, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnOptionSelected");

	Params::UUI_CustomComboBoxOption_C_OnOptionSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.UpdateHoveredOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UUI_CustomComboBoxOption_C*  CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Add_ReturnValue                                   (BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

bool UUI_CustomComboBoxOption_C::UpdateHoveredOption(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, class UUI_CustomComboBoxOption_C** CallFunc_Array_Get_Item, int32* CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "UpdateHoveredOption");

	Params::UUI_CustomComboBoxOption_C_UpdateHoveredOption_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = Parms.CallFunc_Array_Get_Item;

	if (CallFunc_Array_Add_ReturnValue != nullptr)
		*CallFunc_Array_Add_ReturnValue = Parms.CallFunc_Array_Add_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnNavRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// class UWidget*                     ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// class UUI_SubMinusCategory_C*      K2Node_DynamicCast_AsUI_Sub__Category                            (ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class UUI_SubMinusCategory_C* UUI_CustomComboBoxOption_C::OnNavRight(enum class EUINavigation* Navigation, bool* CallFunc_IsValid_ReturnValue, bool* K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnNavRight");

	Params::UUI_CustomComboBoxOption_C_OnNavRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Navigation != nullptr)
		*Navigation = Parms.Navigation;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.RemoveSpacingIfNotHaveArrow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)

bool UUI_CustomComboBoxOption_C::RemoveSpacingIfNotHaveArrow(int32* CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "RemoveSpacingIfNotHaveArrow");

	Params::UUI_CustomComboBoxOption_C_RemoveSpacingIfNotHaveArrow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

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
// class FString                      SelectedOption                                                   (BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
// bool                               IsSelected                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, DisableEditOnInstance, EditConst)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (Edit, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

bool UUI_CustomComboBoxOption_C::CheckIfSubCategorySelected(int32 CallFunc_Add_IntInt_ReturnValue, int32* CallFunc_Array_Length_ReturnValue, struct FSTRUCT_SubOptions* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "CheckIfSubCategorySelected");

	Params::UUI_CustomComboBoxOption_C_CheckIfSubCategorySelected_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_Multiply_IntFloat_ReturnValue                           (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, EditConst, SubobjectReference)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ConstParm, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// float                              CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast            (Edit, ConstParm, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

float UUI_CustomComboBoxOption_C::OnUpdate(double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, bool* CallFunc_HasAnyUserFocus_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnUpdate");

	Params::UUI_CustomComboBoxOption_C_OnUpdate_Params Parms{};

	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.ContinueUpdating
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_TimerExists_ReturnValue                              (ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, EditConst, SubobjectReference)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

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
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_CustomComboBoxOption_C::OnFail_2F79E7094E3FA19CAF12DEBE91370E8A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnFail_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnFail_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_CustomComboBoxOption_C::OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A");

	Params::UUI_CustomComboBoxOption_C_OnSuccess_2F79E7094E3FA19CAF12DEBE91370E8A_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

void UUI_CustomComboBoxOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "PreConstruct");

	Params::UUI_CustomComboBoxOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

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
// class FString                      SubCategory                                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_CustomComboBoxOption_C::Event_On_Sub_Option_Clicked(class FString* SubCategory, int64* SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event On Sub Option Clicked");

	Params::UUI_CustomComboBoxOption_C_Event_On_Sub_Option_Clicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubCategory != nullptr)
		*SubCategory = std::move(Parms.SubCategory);

	if (SubCategoryID != nullptr)
		*SubCategoryID = Parms.SubCategoryID;

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
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUI_CustomComboBoxOption_C::OnAddedToFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnAddedToFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnAddedToFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUI_CustomComboBoxOption_C::OnRemovedFromFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "OnRemovedFromFocusPath");

	Params::UUI_CustomComboBoxOption_C_OnRemovedFromFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_CustomComboBoxOption.UI_CustomComboBoxOption_C.Event Update Navigation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLast                                                           (Edit, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)

bool UUI_CustomComboBoxOption_C::Event_Update_Navigation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Event Update Navigation");

	Params::UUI_CustomComboBoxOption_C_Event_Update_Navigation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

float UUI_CustomComboBoxOption_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "Tick");

	Params::UUI_CustomComboBoxOption_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EUINavigationRule       Temp_byte_Variable                                               (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// enum class EUINavigationRule       Temp_byte_Variable_1                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UCanvasPanelSlot*            K2Node_DynamicCast_AsCanvas_Panel_Slot                           (Edit, BlueprintVisible, ExportObject, Transient, EditConst, SubobjectReference)
// bool                               K2Node_DynamicCast_bSuccess                                      (Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (ConstParm, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class FString                      K2Node_CustomEvent_SubCategory                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (BlueprintVisible, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_CheckIfSubCategorySelected_IsSelected                   (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// float                              CallFunc_GetViewportScale_ReturnValue                            (Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// double                             CallFunc_BreakVector2D_X                                         (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// double                             CallFunc_BreakVector2D_Y                                         (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, RepNotify, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               K2Node_CustomEvent_IsLast                                        (Edit, BlueprintVisible, Parm, ReturnParm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class UUI_SubMinusCategories_Scroll_C*CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// enum class EUINavigationRule       K2Node_Select_Default                                            (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ConstParm, BlueprintReadOnly, Parm, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, NonTransactional)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ConstParm, BlueprintReadOnly, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ExportObject, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, NonTransactional)
// bool                               Temp_bool_Variable_3                                             (ConstParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_X_1                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_BreakVector2D_Y_1                                       (BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, DisableEditOnInstance, SubobjectReference)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ExportObject, BlueprintReadOnly, Parm, DisableEditOnInstance, SubobjectReference)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference, Interp)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, RepNotify, Interp)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference, Interp)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSlateColor                 K2Node_Select_Default_2                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// struct FSlateColor                 K2Node_Select_Default_3                                          (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, Transient, DisableEditOnInstance, SubobjectReference, NonTransactional)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, DisableEditOnInstance, SubobjectReference)

bool UUI_CustomComboBoxOption_C::ExecuteUbergraph_UI_CustomComboBoxOption(bool Temp_bool_Variable, enum class EUINavigationRule Temp_byte_Variable, enum class EUINavigationRule Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool* CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, bool Temp_bool_IsClosed_Variable, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool* K2Node_DynamicCast_bSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_2, int64 K2Node_CustomEvent_SubCategoryID, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool* CallFunc_CheckIfSubCategorySelected_IsSelected, struct FGeometry* CallFunc_GetCachedGeometry_ReturnValue, float* CallFunc_GetViewportScale_ReturnValue, struct FVector2D* CallFunc_LocalToViewport_PixelPosition, struct FVector2D* CallFunc_LocalToViewport_ViewportPosition, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32* CallFunc_Array_Length_ReturnValue, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool* CallFunc_IsValid_ReturnValue_2, int32* CallFunc_Array_Length_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, enum class EUINavigationRule* K2Node_Select_Default, bool CallFunc_Array_IsValidIndex_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility* K2Node_Select_Default_1, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue_2, struct FSlateColor* K2Node_Select_Default_2, struct FSlateColor* K2Node_Select_Default_3, struct FGeometry* K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, bool* CallFunc_HasAnyUserFocus_ReturnValue, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, double* CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_CustomComboBoxOption_C", "ExecuteUbergraph_UI_CustomComboBoxOption");

	Params::UUI_CustomComboBoxOption_C_ExecuteUbergraph_UI_CustomComboBoxOption_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsCanvas_Panel_Slot = K2Node_DynamicCast_AsCanvas_Panel_Slot;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_CustomEvent_SubCategoryID = K2Node_CustomEvent_SubCategoryID;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (K2Node_DynamicCast_bSuccess != nullptr)
		*K2Node_DynamicCast_bSuccess = Parms.K2Node_DynamicCast_bSuccess;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	if (CallFunc_CheckIfSubCategorySelected_IsSelected != nullptr)
		*CallFunc_CheckIfSubCategorySelected_IsSelected = Parms.CallFunc_CheckIfSubCategorySelected_IsSelected;

	if (CallFunc_GetCachedGeometry_ReturnValue != nullptr)
		*CallFunc_GetCachedGeometry_ReturnValue = std::move(Parms.CallFunc_GetCachedGeometry_ReturnValue);

	if (CallFunc_GetViewportScale_ReturnValue != nullptr)
		*CallFunc_GetViewportScale_ReturnValue = Parms.CallFunc_GetViewportScale_ReturnValue;

	if (CallFunc_LocalToViewport_PixelPosition != nullptr)
		*CallFunc_LocalToViewport_PixelPosition = std::move(Parms.CallFunc_LocalToViewport_PixelPosition);

	if (CallFunc_LocalToViewport_ViewportPosition != nullptr)
		*CallFunc_LocalToViewport_ViewportPosition = std::move(Parms.CallFunc_LocalToViewport_ViewportPosition);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_2 != nullptr)
		*CallFunc_IsValid_ReturnValue_2 = Parms.CallFunc_IsValid_ReturnValue_2;

	if (CallFunc_Array_Length_ReturnValue_1 != nullptr)
		*CallFunc_Array_Length_ReturnValue_1 = Parms.CallFunc_Array_Length_ReturnValue_1;

	if (K2Node_Select_Default != nullptr)
		*K2Node_Select_Default = Parms.K2Node_Select_Default;

	if (CallFunc_IsValid_ReturnValue_3 != nullptr)
		*CallFunc_IsValid_ReturnValue_3 = Parms.CallFunc_IsValid_ReturnValue_3;

	if (K2Node_Select_Default_1 != nullptr)
		*K2Node_Select_Default_1 = Parms.K2Node_Select_Default_1;

	if (CallFunc_Multiply_DoubleDouble_ReturnValue != nullptr)
		*CallFunc_Multiply_DoubleDouble_ReturnValue = Parms.CallFunc_Multiply_DoubleDouble_ReturnValue;

	if (CallFunc_Array_Length_ReturnValue_2 != nullptr)
		*CallFunc_Array_Length_ReturnValue_2 = Parms.CallFunc_Array_Length_ReturnValue_2;

	if (K2Node_Select_Default_2 != nullptr)
		*K2Node_Select_Default_2 = std::move(Parms.K2Node_Select_Default_2);

	if (K2Node_Select_Default_3 != nullptr)
		*K2Node_Select_Default_3 = std::move(Parms.K2Node_Select_Default_3);

	if (K2Node_Event_MyGeometry != nullptr)
		*K2Node_Event_MyGeometry = std::move(Parms.K2Node_Event_MyGeometry);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	if (CallFunc_HasAnyUserFocus_ReturnValue != nullptr)
		*CallFunc_HasAnyUserFocus_ReturnValue = Parms.CallFunc_HasAnyUserFocus_ReturnValue;

	if (CallFunc_Multiply_DoubleDouble_A_ImplicitCast != nullptr)
		*CallFunc_Multiply_DoubleDouble_A_ImplicitCast = Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	return Parms.ReturnValue;

}

}


