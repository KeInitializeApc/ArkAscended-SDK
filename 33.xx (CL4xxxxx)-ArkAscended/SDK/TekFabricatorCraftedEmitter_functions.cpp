#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TekFabricatorCraftedEmitter.TekFabricatorCraftedEmitter_C
// (Actor)

class UClass* ATekFabricatorCraftedEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TekFabricatorCraftedEmitter_C");

	return Clss;
}


// TekFabricatorCraftedEmitter_C TekFabricatorCraftedEmitter.Default__TekFabricatorCraftedEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATekFabricatorCraftedEmitter_C* ATekFabricatorCraftedEmitter_C::GetDefaultObj()
{
	static class ATekFabricatorCraftedEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATekFabricatorCraftedEmitter_C*>(ATekFabricatorCraftedEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


