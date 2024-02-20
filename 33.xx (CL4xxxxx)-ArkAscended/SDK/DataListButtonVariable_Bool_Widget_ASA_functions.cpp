#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C
// (None)

class UClass* UDataListButtonVariable_Bool_Widget_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButtonVariable_Bool_Widget_ASA_C");

	return Clss;
}


// DataListButtonVariable_Bool_Widget_ASA_C DataListButtonVariable_Bool_Widget_ASA.Default__DataListButtonVariable_Bool_Widget_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButtonVariable_Bool_Widget_ASA_C* UDataListButtonVariable_Bool_Widget_ASA_C::GetDefaultObj()
{
	static class UDataListButtonVariable_Bool_Widget_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButtonVariable_Bool_Widget_ASA_C*>(UDataListButtonVariable_Bool_Widget_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.SetupTextValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
// class FText                        ReturnText                                                       (Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// class FString                      CallFunc_SelectString_ReturnValue                                (EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (ExportObject, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)

bool UDataListButtonVariable_Bool_Widget_ASA_C::SetupTextValue(class FText* Text, class FString* CallFunc_SelectString_ReturnValue, class FText* CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "SetupTextValue");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_SetupTextValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

	if (CallFunc_SelectString_ReturnValue != nullptr)
		*CallFunc_SelectString_ReturnValue = std::move(Parms.CallFunc_SelectString_ReturnValue);

	if (CallFunc_Conv_StringToText_ReturnValue != nullptr)
		*CallFunc_Conv_StringToText_ReturnValue = Parms.CallFunc_Conv_StringToText_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExtraSetupToggledButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (ConstParm, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
// bool                               FromSelectOtherOption                                            (EditFixedSize, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (ConstParm, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (Edit, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)

class FString UDataListButtonVariable_Bool_Widget_ASA_C::ExtraSetupToggledButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "ExtraSetupToggledButton");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_ExtraSetupToggledButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListButtonVariable_Bool_Widget_ASA_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, GlobalConfig, SubobjectReference)

void UDataListButtonVariable_Bool_Widget_ASA_C::PreConstruct(bool* IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "PreConstruct");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_PreConstruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsDesignTime != nullptr)
		*IsDesignTime = Parms.IsDesignTime;

}


// Function DataListButtonVariable_Bool_Widget_ASA.DataListButtonVariable_Bool_Widget_ASA_C.ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
// bool                               K2Node_Event_IsDesignTime                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, Config, GlobalConfig, SubobjectReference)

bool UDataListButtonVariable_Bool_Widget_ASA_C::ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButtonVariable_Bool_Widget_ASA_C", "ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA");

	Params::UDataListButtonVariable_Bool_Widget_ASA_C_ExecuteUbergraph_DataListButtonVariable_Bool_Widget_ASA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


