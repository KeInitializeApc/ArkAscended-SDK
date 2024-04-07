#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ApexDrop_Sauro.PrimalItemResource_ApexDrop_Sauro_C
// (None)

class UClass* UPrimalItemResource_ApexDrop_Sauro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ApexDrop_Sauro_C");

	return Clss;
}


// PrimalItemResource_ApexDrop_Sauro_C PrimalItemResource_ApexDrop_Sauro.Default__PrimalItemResource_ApexDrop_Sauro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ApexDrop_Sauro_C* UPrimalItemResource_ApexDrop_Sauro_C::GetDefaultObj()
{
	static class UPrimalItemResource_ApexDrop_Sauro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ApexDrop_Sauro_C*>(UPrimalItemResource_ApexDrop_Sauro_C::StaticClass()->DefaultObject);

	return Default;
}

}


