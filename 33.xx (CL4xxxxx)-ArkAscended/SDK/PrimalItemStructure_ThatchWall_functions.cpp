#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_ThatchWall.PrimalItemStructure_ThatchWall_C
// (None)

class UClass* UPrimalItemStructure_ThatchWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_ThatchWall_C");

	return Clss;
}


// PrimalItemStructure_ThatchWall_C PrimalItemStructure_ThatchWall.Default__PrimalItemStructure_ThatchWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_ThatchWall_C* UPrimalItemStructure_ThatchWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_ThatchWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_ThatchWall_C*>(UPrimalItemStructure_ThatchWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


