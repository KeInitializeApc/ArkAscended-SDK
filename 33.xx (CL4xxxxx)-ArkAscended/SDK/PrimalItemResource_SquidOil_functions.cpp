#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_SquidOil.PrimalItemResource_SquidOil_C
// (None)

class UClass* UPrimalItemResource_SquidOil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_SquidOil_C");

	return Clss;
}


// PrimalItemResource_SquidOil_C PrimalItemResource_SquidOil.Default__PrimalItemResource_SquidOil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_SquidOil_C* UPrimalItemResource_SquidOil_C::GetDefaultObj()
{
	static class UPrimalItemResource_SquidOil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_SquidOil_C*>(UPrimalItemResource_SquidOil_C::StaticClass()->DefaultObject);

	return Default;
}

}


