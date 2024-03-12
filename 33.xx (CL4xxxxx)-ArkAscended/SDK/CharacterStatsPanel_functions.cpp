#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CharacterStatsPanel.CharacterStatsPanel_C
// (None)

class UClass* UCharacterStatsPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterStatsPanel_C");

	return Clss;
}


// CharacterStatsPanel_C CharacterStatsPanel.Default__CharacterStatsPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacterStatsPanel_C* UCharacterStatsPanel_C::GetDefaultObj()
{
	static class UCharacterStatsPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacterStatsPanel_C*>(UCharacterStatsPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterStatsPanel_C::BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterStatsPanel_C", "BndEvt__CharacterStatsPanel_ShowBuffs_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStatsPanel.CharacterStatsPanel_C.BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharacterStatsPanel_C::BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterStatsPanel_C", "BndEvt__CharacterStatsPanel_ShowBuffs_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterStatsPanel.CharacterStatsPanel_C.ExecuteUbergraph_CharacterStatsPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, Transient, EditConst, SubobjectReference)

void UCharacterStatsPanel_C::ExecuteUbergraph_CharacterStatsPanel(int32* EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterStatsPanel_C", "ExecuteUbergraph_CharacterStatsPanel");

	Params::UCharacterStatsPanel_C_ExecuteUbergraph_CharacterStatsPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryPoint != nullptr)
		*EntryPoint = Parms.EntryPoint;

}

}


