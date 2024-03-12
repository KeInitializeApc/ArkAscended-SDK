#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeWall.PrimalItemStructure_AdobeWall_C
// (None)

class UClass* UPrimalItemStructure_AdobeWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeWall_C");

	return Clss;
}


// PrimalItemStructure_AdobeWall_C PrimalItemStructure_AdobeWall.Default__PrimalItemStructure_AdobeWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeWall_C* UPrimalItemStructure_AdobeWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeWall_C*>(UPrimalItemStructure_AdobeWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


