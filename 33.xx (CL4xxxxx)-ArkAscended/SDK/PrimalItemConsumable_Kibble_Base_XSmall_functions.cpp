#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Kibble_Base_XSmall.PrimalItemConsumable_Kibble_Base_XSmall_C
// (None)

class UClass* UPrimalItemConsumable_Kibble_Base_XSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Kibble_Base_XSmall_C");

	return Clss;
}


// PrimalItemConsumable_Kibble_Base_XSmall_C PrimalItemConsumable_Kibble_Base_XSmall.Default__PrimalItemConsumable_Kibble_Base_XSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Kibble_Base_XSmall_C* UPrimalItemConsumable_Kibble_Base_XSmall_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Kibble_Base_XSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Kibble_Base_XSmall_C*>(UPrimalItemConsumable_Kibble_Base_XSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


