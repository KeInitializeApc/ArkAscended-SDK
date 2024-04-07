#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_DedicatedStorage.PrimalItemStructure_DedicatedStorage_C
// (None)

class UClass* UPrimalItemStructure_DedicatedStorage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_DedicatedStorage_C");

	return Clss;
}


// PrimalItemStructure_DedicatedStorage_C PrimalItemStructure_DedicatedStorage.Default__PrimalItemStructure_DedicatedStorage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_DedicatedStorage_C* UPrimalItemStructure_DedicatedStorage_C::GetDefaultObj()
{
	static class UPrimalItemStructure_DedicatedStorage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_DedicatedStorage_C*>(UPrimalItemStructure_DedicatedStorage_C::StaticClass()->DefaultObject);

	return Default;
}

}


