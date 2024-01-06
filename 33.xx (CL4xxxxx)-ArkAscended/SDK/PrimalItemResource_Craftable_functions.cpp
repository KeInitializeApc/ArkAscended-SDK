#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Craftable.PrimalItemResource_Craftable_C
// (None)

class UClass* UPrimalItemResource_Craftable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Craftable_C");

	return Clss;
}


// PrimalItemResource_Craftable_C PrimalItemResource_Craftable.Default__PrimalItemResource_Craftable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Craftable_C* UPrimalItemResource_Craftable_C::GetDefaultObj()
{
	static class UPrimalItemResource_Craftable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Craftable_C*>(UPrimalItemResource_Craftable_C::StaticClass()->DefaultObject);

	return Default;
}

}


