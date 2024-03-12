#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalDestructibleStructure.PrimalDestructibleStructure_C
// (Actor)

class UClass* APrimalDestructibleStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalDestructibleStructure_C");

	return Clss;
}


// PrimalDestructibleStructure_C PrimalDestructibleStructure.Default__PrimalDestructibleStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APrimalDestructibleStructure_C* APrimalDestructibleStructure_C::GetDefaultObj()
{
	static class APrimalDestructibleStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APrimalDestructibleStructure_C*>(APrimalDestructibleStructure_C::StaticClass()->DefaultObject);

	return Default;
}

}


