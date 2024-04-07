#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WhistleRadialSelectorBP.WhistleRadialSelectorBP_C
// (None)

class UClass* UWhistleRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WhistleRadialSelectorBP_C");

	return Clss;
}


// WhistleRadialSelectorBP_C WhistleRadialSelectorBP.Default__WhistleRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWhistleRadialSelectorBP_C* UWhistleRadialSelectorBP_C::GetDefaultObj()
{
	static class UWhistleRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWhistleRadialSelectorBP_C*>(UWhistleRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


