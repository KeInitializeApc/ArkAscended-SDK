#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_LargeWall_Stone.PrimalItemStructure_LargeWall_Stone_C
// (None)

class UClass* UPrimalItemStructure_LargeWall_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_LargeWall_Stone_C");

	return Clss;
}


// PrimalItemStructure_LargeWall_Stone_C PrimalItemStructure_LargeWall_Stone.Default__PrimalItemStructure_LargeWall_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_LargeWall_Stone_C* UPrimalItemStructure_LargeWall_Stone_C::GetDefaultObj()
{
	static class UPrimalItemStructure_LargeWall_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_LargeWall_Stone_C*>(UPrimalItemStructure_LargeWall_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


