#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekShield.PrimalItemStructure_TekShield_C
// (None)

class UClass* UPrimalItemStructure_TekShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekShield_C");

	return Clss;
}


// PrimalItemStructure_TekShield_C PrimalItemStructure_TekShield.Default__PrimalItemStructure_TekShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekShield_C* UPrimalItemStructure_TekShield_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekShield_C*>(UPrimalItemStructure_TekShield_C::StaticClass()->DefaultObject);

	return Default;
}

}


