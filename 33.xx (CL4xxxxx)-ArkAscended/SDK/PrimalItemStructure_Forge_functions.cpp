#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Forge.PrimalItemStructure_Forge_C
// (None)

class UClass* UPrimalItemStructure_Forge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Forge_C");

	return Clss;
}


// PrimalItemStructure_Forge_C PrimalItemStructure_Forge.Default__PrimalItemStructure_Forge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Forge_C* UPrimalItemStructure_Forge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Forge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Forge_C*>(UPrimalItemStructure_Forge_C::StaticClass()->DefaultObject);

	return Default;
}

}


