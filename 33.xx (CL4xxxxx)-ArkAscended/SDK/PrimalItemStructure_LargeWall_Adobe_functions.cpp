#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_LargeWall_Adobe.PrimalItemStructure_LargeWall_Adobe_C
// (None)

class UClass* UPrimalItemStructure_LargeWall_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_LargeWall_Adobe_C");

	return Clss;
}


// PrimalItemStructure_LargeWall_Adobe_C PrimalItemStructure_LargeWall_Adobe.Default__PrimalItemStructure_LargeWall_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_LargeWall_Adobe_C* UPrimalItemStructure_LargeWall_Adobe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_LargeWall_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_LargeWall_Adobe_C*>(UPrimalItemStructure_LargeWall_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


