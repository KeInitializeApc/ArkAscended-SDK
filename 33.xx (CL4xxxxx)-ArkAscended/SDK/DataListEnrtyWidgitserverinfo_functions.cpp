#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C
// (None)

class UClass* UDataListEnrtyWidgitserverinfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEnrtyWidgitserverinfo_C");

	return Clss;
}


// DataListEnrtyWidgitserverinfo_C DataListEnrtyWidgitserverinfo.Default__DataListEnrtyWidgitserverinfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEnrtyWidgitserverinfo_C* UDataListEnrtyWidgitserverinfo_C::GetDefaultObj()
{
	static class UDataListEnrtyWidgitserverinfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEnrtyWidgitserverinfo_C*>(UDataListEnrtyWidgitserverinfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEnrtyWidgitserverinfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitserverinfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEnrtyWidgitserverinfo.DataListEnrtyWidgitserverinfo_C.ExecuteUbergraph_DataListEnrtyWidgitserverinfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListEnrtyWidgitserverinfo_C::ExecuteUbergraph_DataListEnrtyWidgitserverinfo(int32* EntryPoint, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitserverinfo_C", "ExecuteUbergraph_DataListEnrtyWidgitserverinfo");

	Params::UDataListEnrtyWidgitserverinfo_C_ExecuteUbergraph_DataListEnrtyWidgitserverinfo_Params Parms{};


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


