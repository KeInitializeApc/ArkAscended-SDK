#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ThatchDoorPlacementEmitter.ThatchDoorPlacementEmitter_C
// (Actor)

class UClass* AThatchDoorPlacementEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThatchDoorPlacementEmitter_C");

	return Clss;
}


// ThatchDoorPlacementEmitter_C ThatchDoorPlacementEmitter.Default__ThatchDoorPlacementEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AThatchDoorPlacementEmitter_C* AThatchDoorPlacementEmitter_C::GetDefaultObj()
{
	static class AThatchDoorPlacementEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AThatchDoorPlacementEmitter_C*>(AThatchDoorPlacementEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


