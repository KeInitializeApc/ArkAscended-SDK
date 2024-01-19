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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintVisible, Net, Parm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (Edit, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ExportObject, Parm, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Edit, ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_SubMinusCategories_Scroll_C::OnKeyDown(const struct FGeometry& MyGeometry, struct FKeyEvent* InKeyEvent, const struct FEventReply& ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnKeyDown");

	Params::UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InKeyEvent != nullptr)
		*InKeyEvent = std::move(Parms.InKeyEvent);

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
// class FString                      SubCategory                                                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::Event_On_Subcategory_Select_Event(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event On Subcategory Select Event");

	Params::UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

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
// class UUI_SubMinusCategory_C*      SubCategoryWidget_Ref                                            (BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      Text                                                             (BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)

class FString UUI_SubMinusCategories_Scroll_C::Event_Check_If_Selected(class UUI_SubMinusCategory_C* SubCategoryWidget_Ref)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event Check If Selected");

	Params::UUI_SubMinusCategories_Scroll_C_Event_Check_If_Selected_Params Parms{};

	Parms.SubCategoryWidget_Ref = SubCategoryWidget_Ref;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnRemovedFromFocusPath(struct FFocusEvent* InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnRemovedFromFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InFocusEvent != nullptr)
		*InFocusEvent = std::move(Parms.InFocusEvent);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, EditConst, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnAddedToFocusPath(struct FFocusEvent* InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnAddedToFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InFocusEvent != nullptr)
		*InFocusEvent = std::move(Parms.InFocusEvent);

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UUI_SubMinusCategory_C*      CallFunc_Create_ReturnValue                                      (ConstParm, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FString                      K2Node_CustomEvent_SubCategory                                   (ExportObject, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (ExportObject, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ExportObject, BlueprintReadOnly, Net, Parm, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnInstance, SubobjectReference)
// class UUI_SubMinusCategory_C*      K2Node_CustomEvent_SubCategoryWidget_Ref                         (Edit, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ConstParm, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (Edit, ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

class FText UUI_SubMinusCategories_Scroll_C::ExecuteUbergraph_UI_SubMinusCategories_Scroll(int32 EntryPoint, bool* CallFunc_IsVisible_ReturnValue, class UUI_SubMinusCategory_C* CallFunc_Create_ReturnValue, const class FString& K2Node_CustomEvent_SubCategory, int64 K2Node_CustomEvent_SubCategoryID, class UPanelSlot** CallFunc_AddChild_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, bool* CallFunc_EqualEqual_TextText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, struct FTimerHandle* CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FSTRUCT_SubOptions& CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool* CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "ExecuteUbergraph_UI_Sub-Categories_Scroll");

	Params::UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_SubCategory = K2Node_CustomEvent_SubCategory;
	Parms.K2Node_CustomEvent_SubCategoryID = K2Node_CustomEvent_SubCategoryID;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_CustomEvent_SubCategoryWidget_Ref = K2Node_CustomEvent_SubCategoryWidget_Ref;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsVisible_ReturnValue != nullptr)
		*CallFunc_IsVisible_ReturnValue = Parms.CallFunc_IsVisible_ReturnValue;

	if (CallFunc_AddChild_ReturnValue != nullptr)
		*CallFunc_AddChild_ReturnValue = Parms.CallFunc_AddChild_ReturnValue;

	if (CallFunc_EqualEqual_TextText_ReturnValue != nullptr)
		*CallFunc_EqualEqual_TextText_ReturnValue = Parms.CallFunc_EqualEqual_TextText_ReturnValue;

	if (CallFunc_K2_SetTimerDelegate_ReturnValue != nullptr)
		*CallFunc_K2_SetTimerDelegate_ReturnValue = std::move(Parms.CallFunc_K2_SetTimerDelegate_ReturnValue);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

	if (CallFunc_BooleanOR_ReturnValue != nullptr)
		*CallFunc_BooleanOR_ReturnValue = Parms.CallFunc_BooleanOR_ReturnValue;

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
// class FString                      SubCategory                                                      (Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnSubcategorySelect__DelegateSignature(const class FString& SubCategory, int64 SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnSubcategorySelect__DelegateSignature");

	Params::UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params Parms{};

	Parms.SubCategory = SubCategory;
	Parms.SubCategoryID = SubCategoryID;

	UObject::ProcessEvent(Func, &Parms);

}

}


