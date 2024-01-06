#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Flint.PrimalItemResource_Flint_C
// (None)

class UClass* UPrimalItemResource_Flint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Flint_C");

	return Clss;
}


// PrimalItemResource_Flint_C PrimalItemResource_Flint.Default__PrimalItemResource_Flint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Flint_C* UPrimalItemResource_Flint_C::GetDefaultObj()
{
	static class UPrimalItemResource_Flint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Flint_C*>(UPrimalItemResource_Flint_C::StaticClass()->DefaultObject);

	return Default;
}

}


