#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_BloodExtractor.PrimalItem_BloodExtractor_C
// (None)

class UClass* UPrimalItem_BloodExtractor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_BloodExtractor_C");

	return Clss;
}


// PrimalItem_BloodExtractor_C PrimalItem_BloodExtractor.Default__PrimalItem_BloodExtractor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_BloodExtractor_C* UPrimalItem_BloodExtractor_C::GetDefaultObj()
{
	static class UPrimalItem_BloodExtractor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_BloodExtractor_C*>(UPrimalItem_BloodExtractor_C::StaticClass()->DefaultObject);

	return Default;
}

}


