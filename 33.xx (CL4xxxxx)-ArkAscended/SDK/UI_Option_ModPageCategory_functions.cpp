#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Option_ModPageCategory.UI_Option_ModPageCategory_C
// (None)

class UClass* UUI_Option_ModPageCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Option_ModPageCategory_C");

	return Clss;
}


// UI_Option_ModPageCategory_C UI_Option_ModPageCategory.Default__UI_Option_ModPageCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Option_ModPageCategory_C* UUI_Option_ModPageCategory_C::GetDefaultObj()
{
	static class UUI_Option_ModPageCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Option_ModPageCategory_C*>(UUI_Option_ModPageCategory_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.UpdateThemeSettings
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (Edit, ConstParm, BlueprintVisible, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)

struct FSlateColor UUI_Option_ModPageCategory_C::UpdateThemeSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "UpdateThemeSettings");

	Params::UUI_Option_ModPageCategory_C_UpdateThemeSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnFail_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_Option_ModPageCategory_C::OnFail_20B338B847EF646EF76186BFC4DF1AD5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "OnFail_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Option_ModPageCategory_C_OnFail_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnSuccess_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, EditConst)

class UTexture2DDynamic* UUI_Option_ModPageCategory_C::OnSuccess_20B338B847EF646EF76186BFC4DF1AD5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "OnSuccess_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Option_ModPageCategory_C_OnSuccess_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Option_ModPageCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.ExecuteUbergraph_UI_Option_ModPageCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, ConstParm, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ExportObject, OutParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, Transient, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (Edit, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (Edit, BlueprintVisible, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference, Interp)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Option_ModPageCategory_C::ExecuteUbergraph_UI_Option_ModPageCategory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTexture2DDynamic** K2Node_CustomEvent_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTexture2DDynamic** K2Node_CustomEvent_Texture, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAsyncTaskDownloadImage* CallFunc_DownloadImage_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "ExecuteUbergraph_UI_Option_ModPageCategory");

	Params::UUI_Option_ModPageCategory_C_ExecuteUbergraph_UI_Option_ModPageCategory_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_DownloadImage_ReturnValue = CallFunc_DownloadImage_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_CustomEvent_Texture_1 != nullptr)
		*K2Node_CustomEvent_Texture_1 = Parms.K2Node_CustomEvent_Texture_1;

	if (K2Node_CustomEvent_Texture != nullptr)
		*K2Node_CustomEvent_Texture = Parms.K2Node_CustomEvent_Texture;

	return Parms.ReturnValue;

}

}


