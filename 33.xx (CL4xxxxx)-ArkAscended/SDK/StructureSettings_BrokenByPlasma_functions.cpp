#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StructureSettings_BrokenByPlasma.StructureSettings_BrokenByPlasma_C
// (None)

class UClass* UStructureSettings_BrokenByPlasma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructureSettings_BrokenByPlasma_C");

	return Clss;
}


// StructureSettings_BrokenByPlasma_C StructureSettings_BrokenByPlasma.Default__StructureSettings_BrokenByPlasma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStructureSettings_BrokenByPlasma_C* UStructureSettings_BrokenByPlasma_C::GetDefaultObj()
{
	static class UStructureSettings_BrokenByPlasma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructureSettings_BrokenByPlasma_C*>(UStructureSettings_BrokenByPlasma_C::StaticClass()->DefaultObject);

	return Default;
}

}


