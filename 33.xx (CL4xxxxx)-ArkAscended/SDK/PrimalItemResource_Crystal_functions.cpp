#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Crystal.PrimalItemResource_Crystal_C
// (None)

class UClass* UPrimalItemResource_Crystal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Crystal_C");

	return Clss;
}


// PrimalItemResource_Crystal_C PrimalItemResource_Crystal.Default__PrimalItemResource_Crystal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Crystal_C* UPrimalItemResource_Crystal_C::GetDefaultObj()
{
	static class UPrimalItemResource_Crystal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Crystal_C*>(UPrimalItemResource_Crystal_C::StaticClass()->DefaultObject);

	return Default;
}

}


