#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericStructurePlacementEmitter.GenericStructurePlacementEmitter_C
// (Actor)

class UClass* AGenericStructurePlacementEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericStructurePlacementEmitter_C");

	return Clss;
}


// GenericStructurePlacementEmitter_C GenericStructurePlacementEmitter.Default__GenericStructurePlacementEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGenericStructurePlacementEmitter_C* AGenericStructurePlacementEmitter_C::GetDefaultObj()
{
	static class AGenericStructurePlacementEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericStructurePlacementEmitter_C*>(AGenericStructurePlacementEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


