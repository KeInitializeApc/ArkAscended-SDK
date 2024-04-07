#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gem_Element.PrimalItemResource_Gem_Element_C
// (None)

class UClass* UPrimalItemResource_Gem_Element_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gem_Element_C");

	return Clss;
}


// PrimalItemResource_Gem_Element_C PrimalItemResource_Gem_Element.Default__PrimalItemResource_Gem_Element_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gem_Element_C* UPrimalItemResource_Gem_Element_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gem_Element_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gem_Element_C*>(UPrimalItemResource_Gem_Element_C::StaticClass()->DefaultObject);

	return Default;
}

}


