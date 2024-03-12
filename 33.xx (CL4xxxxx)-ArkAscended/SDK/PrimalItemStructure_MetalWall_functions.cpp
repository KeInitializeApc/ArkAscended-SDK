#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_MetalWall.PrimalItemStructure_MetalWall_C
// (None)

class UClass* UPrimalItemStructure_MetalWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_MetalWall_C");

	return Clss;
}


// PrimalItemStructure_MetalWall_C PrimalItemStructure_MetalWall.Default__PrimalItemStructure_MetalWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_MetalWall_C* UPrimalItemStructure_MetalWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_MetalWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_MetalWall_C*>(UPrimalItemStructure_MetalWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


