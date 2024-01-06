#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_CondensedGas.PrimalItemResource_CondensedGas_C
// (None)

class UClass* UPrimalItemResource_CondensedGas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_CondensedGas_C");

	return Clss;
}


// PrimalItemResource_CondensedGas_C PrimalItemResource_CondensedGas.Default__PrimalItemResource_CondensedGas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_CondensedGas_C* UPrimalItemResource_CondensedGas_C::GetDefaultObj()
{
	static class UPrimalItemResource_CondensedGas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_CondensedGas_C*>(UPrimalItemResource_CondensedGas_C::StaticClass()->DefaultObject);

	return Default;
}

}


