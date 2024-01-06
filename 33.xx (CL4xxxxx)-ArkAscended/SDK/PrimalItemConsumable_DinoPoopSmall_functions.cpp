#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_DinoPoopSmall.PrimalItemConsumable_DinoPoopSmall_C
// (None)

class UClass* UPrimalItemConsumable_DinoPoopSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_DinoPoopSmall_C");

	return Clss;
}


// PrimalItemConsumable_DinoPoopSmall_C PrimalItemConsumable_DinoPoopSmall.Default__PrimalItemConsumable_DinoPoopSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_DinoPoopSmall_C* UPrimalItemConsumable_DinoPoopSmall_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_DinoPoopSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_DinoPoopSmall_C*>(UPrimalItemConsumable_DinoPoopSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


