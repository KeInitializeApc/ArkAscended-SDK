#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeCeiling.PrimalItemStructure_AdobeCeiling_C
// (None)

class UClass* UPrimalItemStructure_AdobeCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeCeiling_C");

	return Clss;
}


// PrimalItemStructure_AdobeCeiling_C PrimalItemStructure_AdobeCeiling.Default__PrimalItemStructure_AdobeCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeCeiling_C* UPrimalItemStructure_AdobeCeiling_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeCeiling_C*>(UPrimalItemStructure_AdobeCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


