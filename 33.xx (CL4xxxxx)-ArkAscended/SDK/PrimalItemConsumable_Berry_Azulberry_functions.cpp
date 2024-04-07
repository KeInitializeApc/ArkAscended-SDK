#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Berry_Azulberry.PrimalItemConsumable_Berry_Azulberry_C
// (None)

class UClass* UPrimalItemConsumable_Berry_Azulberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Berry_Azulberry_C");

	return Clss;
}


// PrimalItemConsumable_Berry_Azulberry_C PrimalItemConsumable_Berry_Azulberry.Default__PrimalItemConsumable_Berry_Azulberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Berry_Azulberry_C* UPrimalItemConsumable_Berry_Azulberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Berry_Azulberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Berry_Azulberry_C*>(UPrimalItemConsumable_Berry_Azulberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


