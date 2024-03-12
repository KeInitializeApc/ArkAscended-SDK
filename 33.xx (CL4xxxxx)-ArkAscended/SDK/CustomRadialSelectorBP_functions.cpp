#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CustomRadialSelectorBP.CustomRadialSelectorBP_C
// (None)

class UClass* UCustomRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomRadialSelectorBP_C");

	return Clss;
}


// CustomRadialSelectorBP_C CustomRadialSelectorBP.Default__CustomRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCustomRadialSelectorBP_C* UCustomRadialSelectorBP_C::GetDefaultObj()
{
	static class UCustomRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomRadialSelectorBP_C*>(UCustomRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


