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
// struct FButtonStyle                InStyle                                                          (ConstParm, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)

struct FButtonStyle UUI_SubMinusCategory_C::Event_Set_Button_Style()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "Event Set Button Style");

	Params::UUI_SubMinusCategory_C_Event_Set_Button_Style_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (Edit, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
// struct FButtonStyle                K2Node_CustomEvent_InStyle                                       (ConstParm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UUI_SubMinusCategory_C::ExecuteUbergraph_UI_SubMinusCategory(class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic** K2Node_CustomEvent_Texture, class UTexture2DDynamic** Temp_object_Variable, struct FButtonStyle* K2Node_CustomEvent_InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "ExecuteUbergraph_UI_Sub-Category");

	Params::UUI_SubMinusCategory_C_ExecuteUbergraph_UI_SubMinusCategory_Params Parms{};

	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	if (Temp_object_Variable != nullptr)
		*Temp_object_Variable = Parms.Temp_object_Variable;

	if (K2Node_CustomEvent_InStyle != nullptr)
		*K2Node_CustomEvent_InStyle = std::move(Parms.K2Node_CustomEvent_InStyle);

	return Parms.ReturnValue;

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSubCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (Edit, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

void UUI_SubMinusCategory_C::OnSubCategoryClicked__DelegateSignature(class FString* SubCategory, int64* SubCategoryID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSubCategoryClicked__DelegateSignature");

	Params::UUI_SubMinusCategory_C_OnSubCategoryClicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SubCategory != nullptr)
		*SubCategory = std::move(Parms.SubCategory);

	if (SubCategoryID != nullptr)
		*SubCategoryID = Parms.SubCategoryID;

}

}


