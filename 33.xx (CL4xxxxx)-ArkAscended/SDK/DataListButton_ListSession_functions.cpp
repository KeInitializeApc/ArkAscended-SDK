#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_ListSession.DataListButton_ListSession_C
// (None)

class UClass* UDataListButton_ListSession_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_ListSession_C");

	return Clss;
}


// DataListButton_ListSession_C DataListButton_ListSession.Default__DataListButton_ListSession_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_ListSession_C* UDataListButton_ListSession_C::GetDefaultObj()
{
	static class UDataListButton_ListSession_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_ListSession_C*>(UDataListButton_ListSession_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButton_ListSession.DataListButton_ListSession_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, BlueprintVisible, ExportObject, Net, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (BlueprintVisible, ExportObject, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, EditConst, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, Transient, DisableEditOnInstance, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)

bool UDataListButton_ListSession_C::OnPaint(class UPanelWidget** CallFunc_GetParent_ReturnValue, int32* CallFunc_GetChildIndex_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, struct FLinearColor* CallFunc_SelectColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ListSession_C", "OnPaint");

	Params::UDataListButton_ListSession_C_OnPaint_Params Parms{};


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


