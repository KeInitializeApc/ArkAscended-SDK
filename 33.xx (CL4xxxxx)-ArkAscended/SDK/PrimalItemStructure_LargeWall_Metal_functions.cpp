#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_LargeWall_Metal.PrimalItemStructure_LargeWall_Metal_C
// (None)

class UClass* UPrimalItemStructure_LargeWall_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_LargeWall_Metal_C");

	return Clss;
}


// PrimalItemStructure_LargeWall_Metal_C PrimalItemStructure_LargeWall_Metal.Default__PrimalItemStructure_LargeWall_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_LargeWall_Metal_C* UPrimalItemStructure_LargeWall_Metal_C::GetDefaultObj()
{
	static class UPrimalItemStructure_LargeWall_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_LargeWall_Metal_C*>(UPrimalItemStructure_LargeWall_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


