#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeLader.PrimalItemStructure_AdobeLader_C
// (None)

class UClass* UPrimalItemStructure_AdobeLader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeLader_C");

	return Clss;
}


// PrimalItemStructure_AdobeLader_C PrimalItemStructure_AdobeLader.Default__PrimalItemStructure_AdobeLader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeLader_C* UPrimalItemStructure_AdobeLader_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeLader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeLader_C*>(UPrimalItemStructure_AdobeLader_C::StaticClass()->DefaultObject);

	return Default;
}

}


