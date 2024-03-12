#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ApexDrop_GasBag.PrimalItemResource_ApexDrop_GasBag_C
// (None)

class UClass* UPrimalItemResource_ApexDrop_GasBag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ApexDrop_GasBag_C");

	return Clss;
}


// PrimalItemResource_ApexDrop_GasBag_C PrimalItemResource_ApexDrop_GasBag.Default__PrimalItemResource_ApexDrop_GasBag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ApexDrop_GasBag_C* UPrimalItemResource_ApexDrop_GasBag_C::GetDefaultObj()
{
	static class UPrimalItemResource_ApexDrop_GasBag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ApexDrop_GasBag_C*>(UPrimalItemResource_ApexDrop_GasBag_C::StaticClass()->DefaultObject);

	return Default;
}

}


