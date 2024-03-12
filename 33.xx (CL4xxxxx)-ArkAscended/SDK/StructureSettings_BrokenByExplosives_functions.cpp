#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureSettings_BrokenByExplosives.StructureSettings_BrokenByExplosives_C
// (None)

class UClass* UStructureSettings_BrokenByExplosives_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureSettings_BrokenByExplosives_C");

	return Clss;
}


// StructureSettings_BrokenByExplosives_C StructureSettings_BrokenByExplosives.Default__StructureSettings_BrokenByExplosives_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructureSettings_BrokenByExplosives_C* UStructureSettings_BrokenByExplosives_C::GetDefaultObj()
{
	static class UStructureSettings_BrokenByExplosives_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructureSettings_BrokenByExplosives_C*>(UStructureSettings_BrokenByExplosives_C::StaticClass()->DefaultObject);

	return Default;
}

}


