#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_FeedingTrough.PrimalItemStructure_FeedingTrough_C
// (None)

class UClass* UPrimalItemStructure_FeedingTrough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_FeedingTrough_C");

	return Clss;
}


// PrimalItemStructure_FeedingTrough_C PrimalItemStructure_FeedingTrough.Default__PrimalItemStructure_FeedingTrough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_FeedingTrough_C* UPrimalItemStructure_FeedingTrough_C::GetDefaultObj()
{
	static class UPrimalItemStructure_FeedingTrough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_FeedingTrough_C*>(UPrimalItemStructure_FeedingTrough_C::StaticClass()->DefaultObject);

	return Default;
}

}


