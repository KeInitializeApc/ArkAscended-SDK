#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_WallTorch.PrimalItemStructure_WallTorch_C
// (None)

class UClass* UPrimalItemStructure_WallTorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_WallTorch_C");

	return Clss;
}


// PrimalItemStructure_WallTorch_C PrimalItemStructure_WallTorch.Default__PrimalItemStructure_WallTorch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_WallTorch_C* UPrimalItemStructure_WallTorch_C::GetDefaultObj()
{
	static class UPrimalItemStructure_WallTorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_WallTorch_C*>(UPrimalItemStructure_WallTorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


