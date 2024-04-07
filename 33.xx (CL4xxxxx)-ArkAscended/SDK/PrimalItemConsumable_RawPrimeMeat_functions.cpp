#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_RawPrimeMeat.PrimalItemConsumable_RawPrimeMeat_C
// (None)

class UClass* UPrimalItemConsumable_RawPrimeMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_RawPrimeMeat_C");

	return Clss;
}


// PrimalItemConsumable_RawPrimeMeat_C PrimalItemConsumable_RawPrimeMeat.Default__PrimalItemConsumable_RawPrimeMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_RawPrimeMeat_C* UPrimalItemConsumable_RawPrimeMeat_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_RawPrimeMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_RawPrimeMeat_C*>(UPrimalItemConsumable_RawPrimeMeat_C::StaticClass()->DefaultObject);

	return Default;
}

}


