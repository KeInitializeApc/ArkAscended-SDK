#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_PreservingSalt.PrimalItemResource_PreservingSalt_C
// (None)

class UClass* UPrimalItemResource_PreservingSalt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_PreservingSalt_C");

	return Clss;
}


// PrimalItemResource_PreservingSalt_C PrimalItemResource_PreservingSalt.Default__PrimalItemResource_PreservingSalt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_PreservingSalt_C* UPrimalItemResource_PreservingSalt_C::GetDefaultObj()
{
	static class UPrimalItemResource_PreservingSalt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_PreservingSalt_C*>(UPrimalItemResource_PreservingSalt_C::StaticClass()->DefaultObject);

	return Default;
}

}


