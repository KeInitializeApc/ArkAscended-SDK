#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_DinoSpecs.PrimalItemSkin_DinoSpecs_C
// (None)

class UClass* UPrimalItemSkin_DinoSpecs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_DinoSpecs_C");

	return Clss;
}


// PrimalItemSkin_DinoSpecs_C PrimalItemSkin_DinoSpecs.Default__PrimalItemSkin_DinoSpecs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_DinoSpecs_C* UPrimalItemSkin_DinoSpecs_C::GetDefaultObj()
{
	static class UPrimalItemSkin_DinoSpecs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_DinoSpecs_C*>(UPrimalItemSkin_DinoSpecs_C::StaticClass()->DefaultObject);

	return Default;
}

}


