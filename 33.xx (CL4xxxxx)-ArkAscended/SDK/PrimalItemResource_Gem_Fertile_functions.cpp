#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gem_Fertile.PrimalItemResource_Gem_Fertile_C
// (None)

class UClass* UPrimalItemResource_Gem_Fertile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gem_Fertile_C");

	return Clss;
}


// PrimalItemResource_Gem_Fertile_C PrimalItemResource_Gem_Fertile.Default__PrimalItemResource_Gem_Fertile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gem_Fertile_C* UPrimalItemResource_Gem_Fertile_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gem_Fertile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gem_Fertile_C*>(UPrimalItemResource_Gem_Fertile_C::StaticClass()->DefaultObject);

	return Default;
}

}


