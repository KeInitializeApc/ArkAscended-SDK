#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseSign.PrimalItemStructure_BaseSign_C
// (None)

class UClass* UPrimalItemStructure_BaseSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseSign_C");

	return Clss;
}


// PrimalItemStructure_BaseSign_C PrimalItemStructure_BaseSign.Default__PrimalItemStructure_BaseSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseSign_C* UPrimalItemStructure_BaseSign_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseSign_C*>(UPrimalItemStructure_BaseSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


