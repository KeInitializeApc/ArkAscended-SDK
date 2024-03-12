#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_RecipeNote_BattleTartare.PrimalItem_RecipeNote_BattleTartare_C
// (None)

class UClass* UPrimalItem_RecipeNote_BattleTartare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_RecipeNote_BattleTartare_C");

	return Clss;
}


// PrimalItem_RecipeNote_BattleTartare_C PrimalItem_RecipeNote_BattleTartare.Default__PrimalItem_RecipeNote_BattleTartare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_RecipeNote_BattleTartare_C* UPrimalItem_RecipeNote_BattleTartare_C::GetDefaultObj()
{
	static class UPrimalItem_RecipeNote_BattleTartare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_RecipeNote_BattleTartare_C*>(UPrimalItem_RecipeNote_BattleTartare_C::StaticClass()->DefaultObject);

	return Default;
}

}


