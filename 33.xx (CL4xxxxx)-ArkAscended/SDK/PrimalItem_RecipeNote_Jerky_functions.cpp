#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_RecipeNote_Jerky.PrimalItem_RecipeNote_Jerky_C
// (None)

class UClass* UPrimalItem_RecipeNote_Jerky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_RecipeNote_Jerky_C");

	return Clss;
}


// PrimalItem_RecipeNote_Jerky_C PrimalItem_RecipeNote_Jerky.Default__PrimalItem_RecipeNote_Jerky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_RecipeNote_Jerky_C* UPrimalItem_RecipeNote_Jerky_C::GetDefaultObj()
{
	static class UPrimalItem_RecipeNote_Jerky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_RecipeNote_Jerky_C*>(UPrimalItem_RecipeNote_Jerky_C::StaticClass()->DefaultObject);

	return Default;
}

}


