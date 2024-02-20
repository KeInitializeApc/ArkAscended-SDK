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
// struct FGeometry                   MyGeometry                                                       (Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, SubobjectReference)
// float                              InDeltaTime                                                      (ConstParm, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, SubobjectReference)

float UUI_Button_Ark_Global_Purchase_C::Tick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Purchase_C", "Tick");

	Params::UUI_Button_Ark_Global_Purchase_C_Tick_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Button_Ark_Global_Purchase.UI_Button_Ark_Global_Purchase_C.ExecuteUbergraph_UI_Button_Ark_Global_Purchase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (BlueprintVisible, ZeroConstructor, Config, SubobjectReference)
// float                              K2Node_Event_InDeltaTime                                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, SubobjectReference)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Contains_ReturnValue                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, Config, SubobjectReference)

int32 UUI_Button_Ark_Global_Purchase_C::ExecuteUbergraph_UI_Button_Ark_Global_Purchase(const struct FGeometry& K2Node_Event_MyGeometry, float* K2Node_Event_InDeltaTime, const class FString& CallFunc_GetPlatformName_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Button_Ark_Global_Purchase_C", "ExecuteUbergraph_UI_Button_Ark_Global_Purchase");

	Params::UUI_Button_Ark_Global_Purchase_C_ExecuteUbergraph_UI_Button_Ark_Global_Purchase_Params Parms{};

	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (K2Node_Event_InDeltaTime != nullptr)
		*K2Node_Event_InDeltaTime = Parms.K2Node_Event_InDeltaTime;

	return Parms.ReturnValue;

}

}


