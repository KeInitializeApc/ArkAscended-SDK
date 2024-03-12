#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FogOfWarBlueprint.FogOfWarBlueprint_C
// (None)

class UClass* UFogOfWarBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FogOfWarBlueprint_C");

	return Clss;
}


// FogOfWarBlueprint_C FogOfWarBlueprint.Default__FogOfWarBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFogOfWarBlueprint_C* UFogOfWarBlueprint_C::GetDefaultObj()
{
	static class UFogOfWarBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFogOfWarBlueprint_C*>(UFogOfWarBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}

}


