#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Berry_Cianberry.PrimalItemConsumable_Berry_Cianberry_C
// (None)

class UClass* UPrimalItemConsumable_Berry_Cianberry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Berry_Cianberry_C");

	return Clss;
}


// PrimalItemConsumable_Berry_Cianberry_C PrimalItemConsumable_Berry_Cianberry.Default__PrimalItemConsumable_Berry_Cianberry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Berry_Cianberry_C* UPrimalItemConsumable_Berry_Cianberry_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Berry_Cianberry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Berry_Cianberry_C*>(UPrimalItemConsumable_Berry_Cianberry_C::StaticClass()->DefaultObject);

	return Default;
}

}


