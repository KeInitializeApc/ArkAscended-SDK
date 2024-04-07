#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Berry_Verdberry.PrimalItemConsumable_Berry_Verdberry_C
// (None)

class UClass* UPrimalItemConsumable_Berry_Verdberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Berry_Verdberry_C");

	return Clss;
}


// PrimalItemConsumable_Berry_Verdberry_C PrimalItemConsumable_Berry_Verdberry.Default__PrimalItemConsumable_Berry_Verdberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Berry_Verdberry_C* UPrimalItemConsumable_Berry_Verdberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Berry_Verdberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Berry_Verdberry_C*>(UPrimalItemConsumable_Berry_Verdberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


