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
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

struct FSlateColor UUI_Option_ModPageCategory_C::UpdateThemeSettings(bool* CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "UpdateThemeSettings");

	Params::UUI_Option_ModPageCategory_C_UpdateThemeSettings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	return Parms.ReturnValue;

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnFail_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Option_ModPageCategory_C::OnFail_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "OnFail_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Option_ModPageCategory_C_OnFail_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_Option_ModPageCategory.UI_Option_ModPageCategory_C.OnSuccess_20B338B847EF646EF76186BFC4DF1AD5
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Edit, ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, DisableEditOnTemplate, EditConst)

void UUI_Option_ModPageCategory_C::OnSuccess_20B338B847EF646EF76186BFC4DF1AD5(class UTexture2DDynamic** Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "OnSuccess_20B338B847EF646EF76186BFC4DF1AD5");

	Params::UUI_Option_ModPageCategory_C_OnSuccess_20B338B847EF646EF76186BFC4DF1AD5_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

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
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture_1                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference, Interp)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// class UTexture2DDynamic*           K2Node_CustomEvent_Texture                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (BlueprintVisible, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, RepNotify, Interp)
// class UTexture2DDynamic*           Temp_object_Variable                                             (ConstParm, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class UAsyncTaskDownloadImage*     CallFunc_DownloadImage_ReturnValue                               (ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (BlueprintVisible, Net, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference, Interp)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)

bool UUI_Option_ModPageCategory_C::ExecuteUbergraph_UI_Option_ModPageCategory(class UTexture2DDynamic* K2Node_CustomEvent_Texture_1, class UTexture2DDynamic* K2Node_CustomEvent_Texture, class UTexture2DDynamic* Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Option_ModPageCategory_C", "ExecuteUbergraph_UI_Option_ModPageCategory");

	Params::UUI_Option_ModPageCategory_C_ExecuteUbergraph_UI_Option_ModPageCategory_Params Parms{};

	Parms.K2Node_CustomEvent_Texture_1 = K2Node_CustomEvent_Texture_1;
	Parms.K2Node_CustomEvent_Texture = K2Node_CustomEvent_Texture;
	Parms.Temp_object_Variable = Temp_object_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_IsValid_ReturnValue != nullptr)
		*CallFunc_IsValid_ReturnValue = Parms.CallFunc_IsValid_ReturnValue;

	if (CallFunc_IsValid_ReturnValue_1 != nullptr)
		*CallFunc_IsValid_ReturnValue_1 = Parms.CallFunc_IsValid_ReturnValue_1;

	return Parms.ReturnValue;

}

}


