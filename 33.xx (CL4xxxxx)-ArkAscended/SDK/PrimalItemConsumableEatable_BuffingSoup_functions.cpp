#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableEatable_BuffingSoup.PrimalItemConsumableEatable_BuffingSoup_C
// (None)

class UClass* UPrimalItemConsumableEatable_BuffingSoup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableEatable_BuffingSoup_C");

	return Clss;
}


// PrimalItemConsumableEatable_BuffingSoup_C PrimalItemConsumableEatable_BuffingSoup.Default__PrimalItemConsumableEatable_BuffingSoup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableEatable_BuffingSoup_C* UPrimalItemConsumableEatable_BuffingSoup_C::GetDefaultObj()
{
	static class UPrimalItemConsumableEatable_BuffingSoup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableEatable_BuffingSoup_C*>(UPrimalItemConsumableEatable_BuffingSoup_C::StaticClass()->DefaultObject);

	return Default;
}

}


