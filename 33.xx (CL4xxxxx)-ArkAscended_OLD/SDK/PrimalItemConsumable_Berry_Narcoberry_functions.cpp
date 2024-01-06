#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Berry_Narcoberry.PrimalItemConsumable_Berry_Narcoberry_C
// (None)

class UClass* UPrimalItemConsumable_Berry_Narcoberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Berry_Narcoberry_C");

	return Clss;
}


// PrimalItemConsumable_Berry_Narcoberry_C PrimalItemConsumable_Berry_Narcoberry.Default__PrimalItemConsumable_Berry_Narcoberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Berry_Narcoberry_C* UPrimalItemConsumable_Berry_Narcoberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Berry_Narcoberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Berry_Narcoberry_C*>(UPrimalItemConsumable_Berry_Narcoberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


