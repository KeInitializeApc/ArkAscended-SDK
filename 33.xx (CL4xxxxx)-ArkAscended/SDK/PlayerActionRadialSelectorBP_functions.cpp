#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerActionRadialSelectorBP.PlayerActionRadialSelectorBP_C
// (None)

class UClass* UPlayerActionRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerActionRadialSelectorBP_C");

	return Clss;
}


// PlayerActionRadialSelectorBP_C PlayerActionRadialSelectorBP.Default__PlayerActionRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerActionRadialSelectorBP_C* UPlayerActionRadialSelectorBP_C::GetDefaultObj()
{
	static class UPlayerActionRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerActionRadialSelectorBP_C*>(UPlayerActionRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


