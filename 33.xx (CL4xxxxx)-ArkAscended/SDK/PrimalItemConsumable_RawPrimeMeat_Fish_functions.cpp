#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_RawPrimeMeat_Fish.PrimalItemConsumable_RawPrimeMeat_Fish_C
// (None)

class UClass* UPrimalItemConsumable_RawPrimeMeat_Fish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_RawPrimeMeat_Fish_C");

	return Clss;
}


// PrimalItemConsumable_RawPrimeMeat_Fish_C PrimalItemConsumable_RawPrimeMeat_Fish.Default__PrimalItemConsumable_RawPrimeMeat_Fish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_RawPrimeMeat_Fish_C* UPrimalItemConsumable_RawPrimeMeat_Fish_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_RawPrimeMeat_Fish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_RawPrimeMeat_Fish_C*>(UPrimalItemConsumable_RawPrimeMeat_Fish_C::StaticClass()->DefaultObject);

	return Default;
}

}


