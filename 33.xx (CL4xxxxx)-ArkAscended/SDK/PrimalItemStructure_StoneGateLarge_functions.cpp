#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneGateLarge.PrimalItemStructure_StoneGateLarge_C
// (None)

class UClass* UPrimalItemStructure_StoneGateLarge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneGateLarge_C");

	return Clss;
}


// PrimalItemStructure_StoneGateLarge_C PrimalItemStructure_StoneGateLarge.Default__PrimalItemStructure_StoneGateLarge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneGateLarge_C* UPrimalItemStructure_StoneGateLarge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneGateLarge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneGateLarge_C*>(UPrimalItemStructure_StoneGateLarge_C::StaticClass()->DefaultObject);

	return Default;
}

}


