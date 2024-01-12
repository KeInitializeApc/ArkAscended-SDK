#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CheatMenuMapOpenButton.CheatMenuMapOpenButton_C
// (None)

class UClass* UCheatMenuMapOpenButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CheatMenuMapOpenButton_C");

	return Clss;
}


// CheatMenuMapOpenButton_C CheatMenuMapOpenButton.Default__CheatMenuMapOpenButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCheatMenuMapOpenButton_C* UCheatMenuMapOpenButton_C::GetDefaultObj()
{
	static class UCheatMenuMapOpenButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCheatMenuMapOpenButton_C*>(UCheatMenuMapOpenButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CheatMenuMapOpenButton.CheatMenuMapOpenButton_C.BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCheatMenuMapOpenButton_C::BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuMapOpenButton_C", "BndEvt__SpawnButton_K2Node_ComponentBoundEvent_160_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CheatMenuMapOpenButton.CheatMenuMapOpenButton_C.ExecuteUbergraph_CheatMenuMapOpenButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, DisableEditOnInstance, EditConst, SubobjectReference)

int32 UCheatMenuMapOpenButton_C::ExecuteUbergraph_CheatMenuMapOpenButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheatMenuMapOpenButton_C", "ExecuteUbergraph_CheatMenuMapOpenButton");

	Params::UCheatMenuMapOpenButton_C_ExecuteUbergraph_CheatMenuMapOpenButton_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


