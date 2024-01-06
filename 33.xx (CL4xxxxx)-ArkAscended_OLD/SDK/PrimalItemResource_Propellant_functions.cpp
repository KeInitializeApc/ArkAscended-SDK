#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Propellant.PrimalItemResource_Propellant_C
// (None)

class UClass* UPrimalItemResource_Propellant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Propellant_C");

	return Clss;
}


// PrimalItemResource_Propellant_C PrimalItemResource_Propellant.Default__PrimalItemResource_Propellant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Propellant_C* UPrimalItemResource_Propellant_C::GetDefaultObj()
{
	static class UPrimalItemResource_Propellant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Propellant_C*>(UPrimalItemResource_Propellant_C::StaticClass()->DefaultObject);

	return Default;
}

}


