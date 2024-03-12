#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericStructureSettings.GenericStructureSettings_C
// (None)

class UClass* UGenericStructureSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericStructureSettings_C");

	return Clss;
}


// GenericStructureSettings_C GenericStructureSettings.Default__GenericStructureSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericStructureSettings_C* UGenericStructureSettings_C::GetDefaultObj()
{
	static class UGenericStructureSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericStructureSettings_C*>(UGenericStructureSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


