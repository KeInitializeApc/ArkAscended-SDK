#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MultiUseRadialSelectorBP.MultiUseRadialSelectorBP_C
// (None)

class UClass* UMultiUseRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MultiUseRadialSelectorBP_C");

	return Clss;
}


// MultiUseRadialSelectorBP_C MultiUseRadialSelectorBP.Default__MultiUseRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMultiUseRadialSelectorBP_C* UMultiUseRadialSelectorBP_C::GetDefaultObj()
{
	static class UMultiUseRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMultiUseRadialSelectorBP_C*>(UMultiUseRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


