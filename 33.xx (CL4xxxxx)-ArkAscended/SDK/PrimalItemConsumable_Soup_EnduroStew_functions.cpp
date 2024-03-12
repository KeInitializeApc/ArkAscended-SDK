#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Soup_EnduroStew.PrimalItemConsumable_Soup_EnduroStew_C
// (None)

class UClass* UPrimalItemConsumable_Soup_EnduroStew_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Soup_EnduroStew_C");

	return Clss;
}


// PrimalItemConsumable_Soup_EnduroStew_C PrimalItemConsumable_Soup_EnduroStew.Default__PrimalItemConsumable_Soup_EnduroStew_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Soup_EnduroStew_C* UPrimalItemConsumable_Soup_EnduroStew_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Soup_EnduroStew_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Soup_EnduroStew_C*>(UPrimalItemConsumable_Soup_EnduroStew_C::StaticClass()->DefaultObject);

	return Default;
}

}


