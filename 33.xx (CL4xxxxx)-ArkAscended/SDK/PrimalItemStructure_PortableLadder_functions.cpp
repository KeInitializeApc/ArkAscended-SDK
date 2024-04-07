#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_PortableLadder.PrimalItemStructure_PortableLadder_C
// (None)

class UClass* UPrimalItemStructure_PortableLadder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_PortableLadder_C");

	return Clss;
}


// PrimalItemStructure_PortableLadder_C PrimalItemStructure_PortableLadder.Default__PrimalItemStructure_PortableLadder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_PortableLadder_C* UPrimalItemStructure_PortableLadder_C::GetDefaultObj()
{
	static class UPrimalItemStructure_PortableLadder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_PortableLadder_C*>(UPrimalItemStructure_PortableLadder_C::StaticClass()->DefaultObject);

	return Default;
}

}


