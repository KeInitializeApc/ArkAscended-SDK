#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WoodWall.PrimalItemStructure_WoodWall_C
// (None)

class UClass* UPrimalItemStructure_WoodWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WoodWall_C");

	return Clss;
}


// PrimalItemStructure_WoodWall_C PrimalItemStructure_WoodWall.Default__PrimalItemStructure_WoodWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WoodWall_C* UPrimalItemStructure_WoodWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WoodWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WoodWall_C*>(UPrimalItemStructure_WoodWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


