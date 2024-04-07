#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C
// (None)

class UClass* UDataListEnrtyWidgitAdminMangment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEnrtyWidgitAdminMangment_C");

	return Clss;
}


// DataListEnrtyWidgitAdminMangment_C DataListEnrtyWidgitAdminMangment.Default__DataListEnrtyWidgitAdminMangment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEnrtyWidgitAdminMangment_C* UDataListEnrtyWidgitAdminMangment_C::GetDefaultObj()
{
	static class UDataListEnrtyWidgitAdminMangment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEnrtyWidgitAdminMangment_C*>(UDataListEnrtyWidgitAdminMangment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEnrtyWidgitAdminMangment_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitAdminMangment_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEnrtyWidgitAdminMangment.DataListEnrtyWidgitAdminMangment_C.ExecuteUbergraph_DataListEnrtyWidgitAdminMangment
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListEnrtyWidgitAdminMangment_C::ExecuteUbergraph_DataListEnrtyWidgitAdminMangment(int32* EntryPoint, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEnrtyWidgitAdminMangment_C", "ExecuteUbergraph_DataListEnrtyWidgitAdminMangment");

	Params::UDataListEnrtyWidgitAdminMangment_C_ExecuteUbergraph_DataListEnrtyWidgitAdminMangment_Params Parms{};


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


