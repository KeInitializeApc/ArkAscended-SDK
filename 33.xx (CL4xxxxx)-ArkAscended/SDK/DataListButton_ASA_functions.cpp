#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListButton_ASA.DataListButton_ASA_C
// (None)

class UClass* UDataListButton_ASA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListButton_ASA_C");

	return Clss;
}


// DataListButton_ASA_C DataListButton_ASA.Default__DataListButton_ASA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListButton_ASA_C* UDataListButton_ASA_C::GetDefaultObj()
{
	static class UDataListButton_ASA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListButton_ASA_C*>(UDataListButton_ASA_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListButton_ASA.DataListButton_ASA_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, EditConst, SubobjectReference)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ExportObject, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_GetChildIndex_ReturnValue                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// bool                               CallFunc_GetToggledState_ReturnValue                             (ConstParm, Net, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (BlueprintVisible, Net, OutParm, ZeroConstructor, Transient, Config, SubobjectReference)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ExportObject, BlueprintReadOnly, ReturnParm, DisableEditOnInstance, GlobalConfig, SubobjectReference)

struct FLinearColor UDataListButton_ASA_C::OnPaint(struct FPaintContext* Context, int32* CallFunc_GetChildIndex_ReturnValue, bool* CallFunc_GetToggledState_ReturnValue, int32* CallFunc_Percent_IntInt_ReturnValue, bool* CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ASA_C", "OnPaint");

	Params::UDataListButton_ASA_C_OnPaint_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = std::move(Parms.Context);

	if (CallFunc_GetChildIndex_ReturnValue != nullptr)
		*CallFunc_GetChildIndex_ReturnValue = Parms.CallFunc_GetChildIndex_ReturnValue;

	if (CallFunc_GetToggledState_ReturnValue != nullptr)
		*CallFunc_GetToggledState_ReturnValue = Parms.CallFunc_GetToggledState_ReturnValue;

	if (CallFunc_Percent_IntInt_ReturnValue != nullptr)
		*CallFunc_Percent_IntInt_ReturnValue = Parms.CallFunc_Percent_IntInt_ReturnValue;

	if (CallFunc_EqualEqual_IntInt_ReturnValue != nullptr)
		*CallFunc_EqualEqual_IntInt_ReturnValue = Parms.CallFunc_EqualEqual_IntInt_ReturnValue;

	return Parms.ReturnValue;

}


// Function DataListButton_ASA.DataListButton_ASA_C.BndEvt__DataListButton_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UDataListButton_ASA_C::BndEvt__DataListButton_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ASA_C", "BndEvt__DataListButton_ASA_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListButton_ASA.DataListButton_ASA_C.ExecuteUbergraph_DataListButton_ASA
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UDataListButton_ASA_C::ExecuteUbergraph_DataListButton_ASA(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ASA_C", "ExecuteUbergraph_DataListButton_ASA");

	Params::UDataListButton_ASA_C_ExecuteUbergraph_DataListButton_ASA_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}


// Function DataListButton_ASA.DataListButton_ASA_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDinoListButtonWidget*       DataList                                                         (ExportObject, BlueprintReadOnly, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

class UDinoListButtonWidget* UDataListButton_ASA_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListButton_ASA_C", "Clicked__DelegateSignature");

	Params::UDataListButton_ASA_C_Clicked__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


