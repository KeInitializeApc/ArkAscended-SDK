#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_RecipeNote_EnduroStew.PrimalItem_RecipeNote_EnduroStew_C
// (None)

class UClass* UPrimalItem_RecipeNote_EnduroStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_RecipeNote_EnduroStew_C");

	return Clss;
}


// PrimalItem_RecipeNote_EnduroStew_C PrimalItem_RecipeNote_EnduroStew.Default__PrimalItem_RecipeNote_EnduroStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_RecipeNote_EnduroStew_C* UPrimalItem_RecipeNote_EnduroStew_C::GetDefaultObj()
{
	static class UPrimalItem_RecipeNote_EnduroStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_RecipeNote_EnduroStew_C*>(UPrimalItem_RecipeNote_EnduroStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


