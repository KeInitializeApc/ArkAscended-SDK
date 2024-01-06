#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Charcoal.PrimalItemResource_Charcoal_C
// (None)

class UClass* UPrimalItemResource_Charcoal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Charcoal_C");

	return Clss;
}


// PrimalItemResource_Charcoal_C PrimalItemResource_Charcoal.Default__PrimalItemResource_Charcoal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Charcoal_C* UPrimalItemResource_Charcoal_C::GetDefaultObj()
{
	static class UPrimalItemResource_Charcoal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Charcoal_C*>(UPrimalItemResource_Charcoal_C::StaticClass()->DefaultObject);

	return Default;
}

}


