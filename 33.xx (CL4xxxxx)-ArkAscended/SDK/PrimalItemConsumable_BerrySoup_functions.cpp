#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_BerrySoup.PrimalItemConsumable_BerrySoup_C
// (None)

class UClass* UPrimalItemConsumable_BerrySoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_BerrySoup_C");

	return Clss;
}


// PrimalItemConsumable_BerrySoup_C PrimalItemConsumable_BerrySoup.Default__PrimalItemConsumable_BerrySoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_BerrySoup_C* UPrimalItemConsumable_BerrySoup_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_BerrySoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_BerrySoup_C*>(UPrimalItemConsumable_BerrySoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


