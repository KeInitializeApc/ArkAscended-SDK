#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Fibers.PrimalItemResource_Fibers_C
// (None)

class UClass* UPrimalItemResource_Fibers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Fibers_C");

	return Clss;
}


// PrimalItemResource_Fibers_C PrimalItemResource_Fibers.Default__PrimalItemResource_Fibers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Fibers_C* UPrimalItemResource_Fibers_C::GetDefaultObj()
{
	static class UPrimalItemResource_Fibers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Fibers_C*>(UPrimalItemResource_Fibers_C::StaticClass()->DefaultObject);

	return Default;
}

}


