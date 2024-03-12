#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumableSoap.PrimalItemConsumableSoap_C
// (None)

class UClass* UPrimalItemConsumableSoap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumableSoap_C");

	return Clss;
}


// PrimalItemConsumableSoap_C PrimalItemConsumableSoap.Default__PrimalItemConsumableSoap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumableSoap_C* UPrimalItemConsumableSoap_C::GetDefaultObj()
{
	static class UPrimalItemConsumableSoap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumableSoap_C*>(UPrimalItemConsumableSoap_C::StaticClass()->DefaultObject);

	return Default;
}

}


