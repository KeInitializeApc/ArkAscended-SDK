#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C
// (None)

class UClass* UUI_SubMinusCategories_Scroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Sub-Categories_Scroll_C");

	return Clss;
}


// UI_Sub-Categories_Scroll_C UI_Sub-Categories_Scroll.Default__UI_Sub-Categories_Scroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SubMinusCategories_Scroll_C* UUI_SubMinusCategories_Scroll_C::GetDefaultObj()
{
	static class UUI_SubMinusCategories_Scroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SubMinusCategories_Scroll_C*>(UUI_SubMinusCategories_Scroll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (ConstParm, EditFixedSize, Parm, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FGeometry UUI_SubMinusCategories_Scroll_C::OnKeyDown(const struct FKeyEvent& InKeyEvent, const struct FEventReply& ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnKeyDown");

	Params::UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params Parms{};

	Parms.InKeyEvent = InKeyEvent;
	Parms.ReturnValue = ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Create Scroll
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::Event_Create_Scroll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Create Scroll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event On Subcategory Select Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

int64 UUI_SubMinusCategories_Scroll_C::Event_On_Subcategory_Select_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event On Subcategory Select Event");

	Params::UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Is Still Hovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::Event_Is_Still_Hovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Is Still Hovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::BndEvt__SubMinusCategories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "BndEvt__Sub-Categories_Scroll_Btn_Category_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.Event Check If Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_SubMinusCategory_C*      SubCategoryWidget_Ref                                            (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)

class UUI_SubMinusCategory_C* UUI_SubMinusCategories_Scroll_C::Event_Check_If_Selected(class FString* Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Check If Selected");

	Params::UUI_SubMinusCategories_Scroll_C_Event_Check_If_Selected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnRemovedFromFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnAddedToFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, ConstParm, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, Config, SubobjectReference)
// class UUI_SubMinusCategory_C*      CallFunc_Create_ReturnValue                                      (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, SubobjectReference)
// class FString                      K2Node_CustomEvent_SubCategory                                   (Edit, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ConstParm, ExportObject, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UUI_SubMinusCategory_C*      K2Node_CustomEvent_SubCategoryWidget_Ref                         (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (Edit, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (Edit, ConstParm, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

bool UUI_SubMinusCategories_Scroll_C::ExecuteUbergraph_UI_SubMinusCategories_Scroll(class FString* K2Node_CustomEvent_Text, class FText* CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "ExecuteUbergraph_UI_Sub-Categories_Scroll");

	Params::UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params Parms{};

	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Text != nullptr)
		*K2Node_CustomEvent_Text = std::move(Parms.K2Node_CustomEvent_Text);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Conv_StringToText_ReturnValue_1 != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue_1 = Parms.CallFunc_Conv_StringToText_ReturnValue_1;

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.PreRemoval__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategories_Scroll_C::PreRemoval__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "PreRemoval__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnSubcategorySelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

int64 UUI_SubMinusCategories_Scroll_C::OnSubcategorySelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnSubcategorySelect__DelegateSignature");

	Params::UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


