#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_StaminaSoup.PrimalItemConsumable_StaminaSoup_C
// (None)

class UClass* UPrimalItemConsumable_StaminaSoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_StaminaSoup_C");

	return Clss;
}


// PrimalItemConsumable_StaminaSoup_C PrimalItemConsumable_StaminaSoup.Default__PrimalItemConsumable_StaminaSoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_StaminaSoup_C* UPrimalItemConsumable_StaminaSoup_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_StaminaSoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_StaminaSoup_C*>(UPrimalItemConsumable_StaminaSoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


