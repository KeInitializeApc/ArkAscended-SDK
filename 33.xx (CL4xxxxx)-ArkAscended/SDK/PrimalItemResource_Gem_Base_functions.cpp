#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gem_Base.PrimalItemResource_Gem_Base_C
// (None)

class UClass* UPrimalItemResource_Gem_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gem_Base_C");

	return Clss;
}


// PrimalItemResource_Gem_Base_C PrimalItemResource_Gem_Base.Default__PrimalItemResource_Gem_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gem_Base_C* UPrimalItemResource_Gem_Base_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gem_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gem_Base_C*>(UPrimalItemResource_Gem_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


