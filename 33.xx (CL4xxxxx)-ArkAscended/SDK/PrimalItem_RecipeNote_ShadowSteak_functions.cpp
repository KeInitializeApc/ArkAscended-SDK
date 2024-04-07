#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_RecipeNote_ShadowSteak.PrimalItem_RecipeNote_ShadowSteak_C
// (None)

class UClass* UPrimalItem_RecipeNote_ShadowSteak_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_RecipeNote_ShadowSteak_C");

	return Clss;
}


// PrimalItem_RecipeNote_ShadowSteak_C PrimalItem_RecipeNote_ShadowSteak.Default__PrimalItem_RecipeNote_ShadowSteak_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_RecipeNote_ShadowSteak_C* UPrimalItem_RecipeNote_ShadowSteak_C::GetDefaultObj()
{
	static class UPrimalItem_RecipeNote_ShadowSteak_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_RecipeNote_ShadowSteak_C*>(UPrimalItem_RecipeNote_ShadowSteak_C::StaticClass()->DefaultObject);

	return Default;
}

}


