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
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (BlueprintVisible, ExportObject, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ConstParm, BlueprintVisible, ExportObject, Net, ZeroConstructor, ReturnParm, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListButton_ListSession_C::OnPaint(struct FPaintContext* Context, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ListSession_C", "OnPaint");

	Params::UDataListButton_ListSession_C_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}

}


