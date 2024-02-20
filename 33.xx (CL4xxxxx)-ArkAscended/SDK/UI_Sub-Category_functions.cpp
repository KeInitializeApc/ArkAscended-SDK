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
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_SubMinusCategory_C::OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnFail_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_SubMinusCategory_C::OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8");

	Params::UUI_SubMinusCategory_C_OnSuccess_B7C25CB3474DE2A4D0BC4DAA4F40DDC8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

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
// struct FButtonStyle                InStyle                                                          (Edit, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// struct FButtonStyle                K2Node_CustomEvent_InStyle                                       (ConstParm, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

FDelegateProperty_ UUI_SubMinusCategory_C::ExecuteUbergraph_UI_SubMinusCategory(class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, bool* CallFunc_IsValid_ReturnValue, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, struct FButtonStyle* K2Node_CustomEvent_InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Sub-Category_C", "ExecuteUbergraph_UI_Sub-Category");

	Params::UUI_SubMinusCategory_C_ExecuteUbergraph_UI_SubMinusCategory_Params Parms{};

	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.Temp_object_Variable = Temp_object_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (K2Node_CustomEvent_InStyle != nullptr)
		*K2Node_CustomEvent_InStyle = std::move(Parms.K2Node_CustomEvent_InStyle);

	return Parms.ReturnValue;

}


// Function UI_Sub-Category.UI_Sub-Category_C.OnSubCategoryClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      SubCategory                                                      (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// int64                              SubCategoryID                                                    (Edit, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)

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


