#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Soup_CalienSoup.PrimalItemConsumable_Soup_CalienSoup_C
// (None)

class UClass* UPrimalItemConsumable_Soup_CalienSoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Soup_CalienSoup_C");

	return Clss;
}


// PrimalItemConsumable_Soup_CalienSoup_C PrimalItemConsumable_Soup_CalienSoup.Default__PrimalItemConsumable_Soup_CalienSoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Soup_CalienSoup_C* UPrimalItemConsumable_Soup_CalienSoup_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Soup_CalienSoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Soup_CalienSoup_C*>(UPrimalItemConsumable_Soup_CalienSoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


