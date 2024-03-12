#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C
// (None)

class UClass* UDataListEnrtyWidgitCheatFunctionInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEnrtyWidgitCheatFunctionInfo_C");

	return Clss;
}


// DataListEnrtyWidgitCheatFunctionInfo_C DataListEnrtyWidgitCheatFunctionInfo.Default__DataListEnrtyWidgitCheatFunctionInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEnrtyWidgitCheatFunctionInfo_C* UDataListEnrtyWidgitCheatFunctionInfo_C::GetDefaultObj()
{
	static class UDataListEnrtyWidgitCheatFunctionInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEnrtyWidgitCheatFunctionInfo_C*>(UDataListEnrtyWidgitCheatFunctionInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEnrtyWidgitCheatFunctionInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitCheatFunctionInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEnrtyWidgitCheatFunctionInfo.DataListEnrtyWidgitCheatFunctionInfo_C.ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListEnrtyWidgitCheatFunctionInfo_C::ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo(int32* EntryPoint, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitCheatFunctionInfo_C", "ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo");

	Params::UDataListEnrtyWidgitCheatFunctionInfo_C_ExecuteUbergraph_DataListEnrtyWidgitCheatFunctionInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


