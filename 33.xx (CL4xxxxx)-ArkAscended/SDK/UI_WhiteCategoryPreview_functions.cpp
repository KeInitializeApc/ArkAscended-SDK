#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_WhiteCategoryPreview.UI_WhiteCategoryPreview_C
// (None)

class UClass* UUI_WhiteCategoryPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_WhiteCategoryPreview_C");

	return Clss;
}


// UI_WhiteCategoryPreview_C UI_WhiteCategoryPreview.Default__UI_WhiteCategoryPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_WhiteCategoryPreview_C* UUI_WhiteCategoryPreview_C::GetDefaultObj()
{
	static class UUI_WhiteCategoryPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_WhiteCategoryPreview_C*>(UUI_WhiteCategoryPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_WhiteCategoryPreview.UI_WhiteCategoryPreview_C.UpdateText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)

class FText UUI_WhiteCategoryPreview_C::UpdateText(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WhiteCategoryPreview_C", "UpdateText");

	Params::UUI_WhiteCategoryPreview_C_UpdateText_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_WhiteCategoryPreview.UI_WhiteCategoryPreview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_WhiteCategoryPreview_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WhiteCategoryPreview_C", "PreConstruct");

	Params::UUI_WhiteCategoryPreview_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function UI_WhiteCategoryPreview.UI_WhiteCategoryPreview_C.ExecuteUbergraph_UI_WhiteCategoryPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)

void UUI_WhiteCategoryPreview_C::ExecuteUbergraph_UI_WhiteCategoryPreview(int32* EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_WhiteCategoryPreview_C", "ExecuteUbergraph_UI_WhiteCategoryPreview");

	Params::UUI_WhiteCategoryPreview_C_ExecuteUbergraph_UI_WhiteCategoryPreview_Params Parms{};

	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


