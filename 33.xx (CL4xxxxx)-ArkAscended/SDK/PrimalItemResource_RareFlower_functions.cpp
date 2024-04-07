#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_RareFlower.PrimalItemResource_RareFlower_C
// (None)

class UClass* UPrimalItemResource_RareFlower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_RareFlower_C");

	return Clss;
}


// PrimalItemResource_RareFlower_C PrimalItemResource_RareFlower.Default__PrimalItemResource_RareFlower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_RareFlower_C* UPrimalItemResource_RareFlower_C::GetDefaultObj()
{
	static class UPrimalItemResource_RareFlower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_RareFlower_C*>(UPrimalItemResource_RareFlower_C::StaticClass()->DefaultObject);

	return Default;
}

}


