#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C
// (None)

class UClass* UDataListEntry_EngramListWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataListEntry_EngramListWidget_C");

	return Clss;
}


// DataListEntry_EngramListWidget_C DataListEntry_EngramListWidget.Default__DataListEntry_EngramListWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDataListEntry_EngramListWidget_C* UDataListEntry_EngramListWidget_C::GetDefaultObj()
{
	static class UDataListEntry_EngramListWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataListEntry_EngramListWidget_C*>(UDataListEntry_EngramListWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDataListEntry_EngramListWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntry_EngramListWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DataListEntry_EngramListWidget.DataListEntry_EngramListWidget_C.ExecuteUbergraph_DataListEntry_EngramListWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, DisableEditOnInstance, SubobjectReference)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, SubobjectReference)

bool UDataListEntry_EngramListWidget_C::ExecuteUbergraph_DataListEntry_EngramListWidget(int32* EntryPoint, enum class ESlateVisibility* CallFunc_GetVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DataListEntry_EngramListWidget_C", "ExecuteUbergraph_DataListEntry_EngramListWidget");

	Params::UDataListEntry_EngramListWidget_C_ExecuteUbergraph_DataListEntry_EngramListWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

	if (CallFunc_GetVisibility_ReturnValue != nullptr)
		*CallFunc_GetVisibility_ReturnValue = Parms.CallFunc_GetVisibility_ReturnValue;

	return Parms.ReturnValue;

}

}


