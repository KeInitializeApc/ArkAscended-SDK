#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Sub-Category.UI_Sub-Category_C
// (None)

class UClass* UUI_SubMinusCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Sub-Category_C");

	return Clss;
}


// UI_Sub-Category_C UI_Sub-Category.Default__UI_Sub-Category_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_SubMinusCategory_C* UUI_SubMinusCategory_C::GetDefaultObj()
{
	static class UUI_SubMinusCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_SubMinusCategory_C*>(UUI_SubMinusCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Sub-Category.UI_Sub-Category_C.OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_SubMinusCategory_C::OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_SubMinusCategory_C::OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Sub-Category.UI_Sub-Category_C.BndEvt__Sub-Category1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_SubMinusCategory_C::BndEvt__SubMinusCategory1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "BndEvt__Sub-Category1_Btn_Category_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Category.UI_Sub-Category_C.Event Set Button Style
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FButtonStyle                InStyle                                                          (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

void UUI_SubMinusCategory_C::Event_Set_Button_Style(const struct FButtonStyle& InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "Event Set Button Style");

	Params::UUI_SubMinusCategory_C_Event_Set_Button_Style_Params Parms{};

	Parms.InStyle = InStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Sub-Category.UI_Sub-Category_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_SubMinusCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Sub-Category.UI_Sub-Category_C.ExecuteUbergraph_UI_Sub-Category
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintReadOnly, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// struct FButtonStyle                K2Node_CustomEvent_InStyle                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

struct FButtonStyle UUI_SubMinusCategory_C::ExecuteUbergraph_UI_SubMinusCategory(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "ExecuteUbergraph_UI_Sub-Category");

	Params::UUI_SubMinusCategory_C_ExecuteUbergraph_UI_SubMinusCategory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSubCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (Edit, ConstParm, ExportObject, Net, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

int64 UUI_SubMinusCategory_C::OnSubCategoryClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSubCategoryClicked__DelegateSignature");

	Params::UUI_SubMinusCategory_C_OnSubCategoryClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


