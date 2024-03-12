#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_AnglerGel.PrimalItemResource_AnglerGel_C
// (None)

class UClass* UPrimalItemResource_AnglerGel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_AnglerGel_C");

	return Clss;
}


// PrimalItemResource_AnglerGel_C PrimalItemResource_AnglerGel.Default__PrimalItemResource_AnglerGel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_AnglerGel_C* UPrimalItemResource_AnglerGel_C::GetDefaultObj()
{
	static class UPrimalItemResource_AnglerGel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_AnglerGel_C*>(UPrimalItemResource_AnglerGel_C::StaticClass()->DefaultObject);

	return Default;
}

}


