#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C
// (None)

class UClass* UUI_Button_Ark_Global_Purchase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Button_Ark_Global_Purchase_C");

	return Clss;
}


// UI_Button_Ark_Global_Purchase_C UI_Button_Ark_Global_Purchase.Default__UI_Button_Ark_Global_Purchase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Button_Ark_Global_Purchase_C* UUI_Button_Ark_Global_Purchase_C::GetDefaultObj()
{
	static class UUI_Button_Ark_Global_Purchase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Button_Ark_Global_Purchase_C*>(UUI_Button_Ark_Global_Purchase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
// float                              InDeltaTime                                                      (ExportObject, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Button_Ark_Global_Purchase_C::Tick(struct FGeometry* MyGeometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Purchase_C", "Tick");

	Params::UUI_Button_Ark_Global_Purchase_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MyGeometry != nullptr)
		*MyGeometry = std::move(Parms.MyGeometry);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C.ExecuteUbergraph_UI_Button_Ark_Global_Purchase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (Edit, ConstParm, ExportObject, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (Edit, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, SubobjectReference)

bool UUI_Button_Ark_Global_Purchase_C::ExecuteUbergraph_UI_Button_Ark_Global_Purchase(int32* EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Purchase_C", "ExecuteUbergraph_UI_Button_Ark_Global_Purchase");

	Params::UUI_Button_Ark_Global_Purchase_C_ExecuteUbergraph_UI_Button_Ark_Global_Purchase_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	return Parms.ReturnValue;

}

}


