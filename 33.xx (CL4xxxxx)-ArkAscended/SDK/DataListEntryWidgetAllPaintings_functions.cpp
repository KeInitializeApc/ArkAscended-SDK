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
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UDataListEntryWidgetAllPaintings_C::OnPaint(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "OnPaint");

	Params::UDataListEntryWidgetAllPaintings_C_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetParent_ReturnValue != nullptr)
		*CallFunc_GetParent_ReturnValue = Parms.CallFunc_GetParent_ReturnValue;

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_SelectColor_ReturnValue != nullptr)
		*CallFunc_SelectColor_ReturnValue = std::move(Parms.CallFunc_SelectColor_ReturnValue);

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
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UDataListEntryWidgetAllPaintings_C::ExecuteUbergraph_DataListEntryWidgetAllPaintings(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntryWidgetAllPaintings_C", "ExecuteUbergraph_DataListEntryWidgetAllPaintings");

	Params::UDataListEntryWidgetAllPaintings_C_ExecuteUbergraph_DataListEntryWidgetAllPaintings_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CallFunc_GetParent_ReturnValue != nullptr)
		*CallFunc_GetParent_ReturnValue = Parms.CallFunc_GetParent_ReturnValue;

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_SelectColor_ReturnValue != nullptr)
		*CallFunc_SelectColor_ReturnValue = std::move(Parms.CallFunc_SelectColor_ReturnValue);

	return Parms.ReturnValue;

}

}


