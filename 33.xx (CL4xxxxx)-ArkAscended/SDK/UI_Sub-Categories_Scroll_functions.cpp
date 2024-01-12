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
// struct FGeometry                   MyGeometry                                                       (ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// struct FKeyEvent                   InKeyEvent                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// struct FEventReply                 ReturnValue                                                      (Edit, ConstParm, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_SubMinusCategories_Scroll_C::OnKeyDown(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnKeyDown");

	Params::UUI_SubMinusCategories_Scroll_C_OnKeyDown_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

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
// class FString                      SubCategory                                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::Event_On_Subcategory_Select_Event(class FString* SubCategory, int64* SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "Event On Subcategory Select Event");

	Params::UUI_SubMinusCategories_Scroll_C_Event_On_Subcategory_Select_Event_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubCategory != nullptr)
		*SubCategory = std::move(Parms.SubCategory);

	if (SubCategoryID != nullptr)
		*SubCategoryID = Parms.SubCategoryID;

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
// class UUI_SubMinusCategory_C*      SubCategoryWidget_Ref                                            (ConstParm, ExportObject, Parm, DisableEditOnTemplate, InstancedReference, SubobjectReference)
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
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUI_SubMinusCategories_Scroll_C::OnRemovedFromFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnRemovedFromFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnRemovedFromFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)

struct FFocusEvent UUI_SubMinusCategories_Scroll_C::OnAddedToFocusPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnAddedToFocusPath");

	Params::UUI_SubMinusCategories_Scroll_C_OnAddedToFocusPath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Categories_Scroll.UI_Sub-Categories_Scroll_C.ExecuteUbergraph_UI_Sub-Categories_Scroll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// bool                               CallFunc_IsVisible_ReturnValue                                   (Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UUI_SubMinusCategory_C*      CallFunc_Create_ReturnValue                                      (ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
// class FString                      K2Node_CustomEvent_SubCategory                                   (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// int64                              K2Node_CustomEvent_SubCategoryID                                 (Edit, BlueprintVisible, ExportObject, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// int32                              Temp_int_Array_Index_Variable                                    (Edit, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (Edit, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UUI_SubMinusCategory_C*      K2Node_CustomEvent_SubCategoryWidget_Ref                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// class FString                      K2Node_CustomEvent_Text                                          (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FText                        CallFunc_GetText_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, Transient, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, InstancedReference, SubobjectReference)
// struct FFocusEvent                 K2Node_Event_InFocusEvent_1                                      (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference, Interp)
// struct FSTRUCT_SubOptions          CallFunc_Array_Get_Item                                          (Edit, ConstParm, BlueprintVisible, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference, Interp)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (Edit, ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, InstancedReference, SubobjectReference)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UUI_SubMinusCategories_Scroll_C::ExecuteUbergraph_UI_SubMinusCategories_Scroll(int64 K2Node_CustomEvent_SubCategoryID, int32 CallFunc_Add_IntInt_ReturnValue, class UUI_SubMinusCategory_C* K2Node_CustomEvent_SubCategoryWidget_Ref, const class FString& K2Node_CustomEvent_Text, class FText CallFunc_Conv_StringToText_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, struct FSTRUCT_SubOptions* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFocusEvent& K2Node_Event_InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "ExecuteUbergraph_UI_Sub-Categories_Scroll");

	Params::UUI_SubMinusCategories_Scroll_C_ExecuteUbergraph_UI_SubMinusCategories_Scroll_Params Parms{};

	Parms.K2Node_CustomEvent_SubCategoryID = K2Node_CustomEvent_SubCategoryID;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_SubCategoryWidget_Ref = K2Node_CustomEvent_SubCategoryWidget_Ref;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.K2Node_Event_InFocusEvent_1 = K2Node_Event_InFocusEvent_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_Array_Get_Item != nullptr)
		*CallFunc_Array_Get_Item = std::move(Parms.CallFunc_Array_Get_Item);

	if (CallFunc_Array_Length_ReturnValue != nullptr)
		*CallFunc_Array_Length_ReturnValue = Parms.CallFunc_Array_Length_ReturnValue;

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
// class FString                      SubCategory                                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_SubMinusCategories_Scroll_C::OnSubcategorySelect__DelegateSignature(class FString* SubCategory, int64* SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Categories_Scroll_C", "OnSubcategorySelect__DelegateSignature");

	Params::UUI_SubMinusCategories_Scroll_C_OnSubcategorySelect__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubCategory != nullptr)
		*SubCategory = std::move(Parms.SubCategory);

	if (SubCategoryID != nullptr)
		*SubCategoryID = Parms.SubCategoryID;

}

}


