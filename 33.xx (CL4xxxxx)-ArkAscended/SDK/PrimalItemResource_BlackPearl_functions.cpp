#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_BlackPearl.PrimalItemResource_BlackPearl_C
// (None)

class UClass* UPrimalItemResource_BlackPearl_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_BlackPearl_C");

	return Clss;
}


// PrimalItemResource_BlackPearl_C PrimalItemResource_BlackPearl.Default__PrimalItemResource_BlackPearl_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_BlackPearl_C* UPrimalItemResource_BlackPearl_C::GetDefaultObj()
{
	static class UPrimalItemResource_BlackPearl_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_BlackPearl_C*>(UPrimalItemResource_BlackPearl_C::StaticClass()->DefaultObject);

	return Default;
}

}


