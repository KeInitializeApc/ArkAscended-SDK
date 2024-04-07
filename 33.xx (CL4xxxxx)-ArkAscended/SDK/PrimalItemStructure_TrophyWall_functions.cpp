#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TrophyWall.PrimalItemStructure_TrophyWall_C
// (None)

class UClass* UPrimalItemStructure_TrophyWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TrophyWall_C");

	return Clss;
}


// PrimalItemStructure_TrophyWall_C PrimalItemStructure_TrophyWall.Default__PrimalItemStructure_TrophyWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TrophyWall_C* UPrimalItemStructure_TrophyWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TrophyWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TrophyWall_C*>(UPrimalItemStructure_TrophyWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


