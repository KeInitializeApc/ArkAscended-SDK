#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroppedItemGeneric.DroppedItemGeneric_C
// (Actor)

class UClass* ADroppedItemGeneric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroppedItemGeneric_C");

	return Clss;
}


// DroppedItemGeneric_C DroppedItemGeneric.Default__DroppedItemGeneric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADroppedItemGeneric_C* ADroppedItemGeneric_C::GetDefaultObj()
{
	static class ADroppedItemGeneric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroppedItemGeneric_C*>(ADroppedItemGeneric_C::StaticClass()->DefaultObject);

	return Default;
}

}


