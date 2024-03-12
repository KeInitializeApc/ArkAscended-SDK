#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_WeapFlamethrower.PrimalItem_WeapFlamethrower_C
// (None)

class UClass* UPrimalItem_WeapFlamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_WeapFlamethrower_C");

	return Clss;
}


// PrimalItem_WeapFlamethrower_C PrimalItem_WeapFlamethrower.Default__PrimalItem_WeapFlamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_WeapFlamethrower_C* UPrimalItem_WeapFlamethrower_C::GetDefaultObj()
{
	static class UPrimalItem_WeapFlamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_WeapFlamethrower_C*>(UPrimalItem_WeapFlamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


