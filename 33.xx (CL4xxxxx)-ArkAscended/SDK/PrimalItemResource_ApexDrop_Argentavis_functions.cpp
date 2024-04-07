#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ApexDrop_Argentavis.PrimalItemResource_ApexDrop_Argentavis_C
// (None)

class UClass* UPrimalItemResource_ApexDrop_Argentavis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ApexDrop_Argentavis_C");

	return Clss;
}


// PrimalItemResource_ApexDrop_Argentavis_C PrimalItemResource_ApexDrop_Argentavis.Default__PrimalItemResource_ApexDrop_Argentavis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ApexDrop_Argentavis_C* UPrimalItemResource_ApexDrop_Argentavis_C::GetDefaultObj()
{
	static class UPrimalItemResource_ApexDrop_Argentavis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ApexDrop_Argentavis_C*>(UPrimalItemResource_ApexDrop_Argentavis_C::StaticClass()->DefaultObject);

	return Default;
}

}


