#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_LamppostOmni.PrimalItemStructure_LamppostOmni_C
// (None)

class UClass* UPrimalItemStructure_LamppostOmni_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_LamppostOmni_C");

	return Clss;
}


// PrimalItemStructure_LamppostOmni_C PrimalItemStructure_LamppostOmni.Default__PrimalItemStructure_LamppostOmni_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_LamppostOmni_C* UPrimalItemStructure_LamppostOmni_C::GetDefaultObj()
{
	static class UPrimalItemStructure_LamppostOmni_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_LamppostOmni_C*>(UPrimalItemStructure_LamppostOmni_C::StaticClass()->DefaultObject);

	return Default;
}

}


