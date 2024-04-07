#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructurePlacerBlueprint.StructurePlacerBlueprint_C
// (Actor)

class UClass* AStructurePlacerBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructurePlacerBlueprint_C");

	return Clss;
}


// StructurePlacerBlueprint_C StructurePlacerBlueprint.Default__StructurePlacerBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStructurePlacerBlueprint_C* AStructurePlacerBlueprint_C::GetDefaultObj()
{
	static class AStructurePlacerBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStructurePlacerBlueprint_C*>(AStructurePlacerBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


