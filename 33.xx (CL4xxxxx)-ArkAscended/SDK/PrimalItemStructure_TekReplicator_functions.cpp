#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekReplicator.PrimalItemStructure_TekReplicator_C
// (None)

class UClass* UPrimalItemStructure_TekReplicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekReplicator_C");

	return Clss;
}


// PrimalItemStructure_TekReplicator_C PrimalItemStructure_TekReplicator.Default__PrimalItemStructure_TekReplicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekReplicator_C* UPrimalItemStructure_TekReplicator_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekReplicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekReplicator_C*>(UPrimalItemStructure_TekReplicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


