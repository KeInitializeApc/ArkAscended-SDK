#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EmoteRadialSelectorBP.EmoteRadialSelectorBP_C
// (None)

class UClass* UEmoteRadialSelectorBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteRadialSelectorBP_C");

	return Clss;
}


// EmoteRadialSelectorBP_C EmoteRadialSelectorBP.Default__EmoteRadialSelectorBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmoteRadialSelectorBP_C* UEmoteRadialSelectorBP_C::GetDefaultObj()
{
	static class UEmoteRadialSelectorBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteRadialSelectorBP_C*>(UEmoteRadialSelectorBP_C::StaticClass()->DefaultObject);

	return Default;
}

}


