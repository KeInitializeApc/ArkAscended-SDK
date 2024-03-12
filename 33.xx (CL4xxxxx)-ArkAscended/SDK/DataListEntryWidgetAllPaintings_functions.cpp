#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C
// (None)

class UClass* UDataListEntryWidgetAllPaintings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntryWidgetAllPaintings_C");

	return Clss;
}


// DataListEntryWidgetAllPaintings_C DataListEntryWidgetAllPaintings.Default__DataListEntryWidgetAllPaintings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntryWidgetAllPaintings_C* UDataListEntryWidgetAllPaintings_C::GetDefaultObj()
{
	static class UDataListEntryWidgetAllPaintings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntryWidgetAllPaintings_C*>(UDataListEntryWidgetAllPaintings_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListEntryWidgetAllPaintings_C::OnPaint(struct FPaintContext* Context, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "OnPaint");

	Params::UDataListEntryWidgetAllPaintings_C_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEntryWidgetAllPaintings_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEntryWidgetAllPaintings.DataListEntryWidgetAllPaintings_C.ExecuteUbergraph_DataListEntryWidgetAllPaintings
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListEntryWidgetAllPaintings_C::ExecuteUbergraph_DataListEntryWidgetAllPaintings(int32* EntryPoint, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "ExecuteUbergraph_DataListEntryWidgetAllPaintings");

	Params::UDataListEntryWidgetAllPaintings_C_ExecuteUbergraph_DataListEntryWidgetAllPaintings_Params Parms{};


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


