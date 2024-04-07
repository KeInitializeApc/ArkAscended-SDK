#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseRoof.PrimalItemStructure_BaseRoof_C
// (None)

class UClass* UPrimalItemStructure_BaseRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseRoof_C");

	return Clss;
}


// PrimalItemStructure_BaseRoof_C PrimalItemStructure_BaseRoof.Default__PrimalItemStructure_BaseRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseRoof_C* UPrimalItemStructure_BaseRoof_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseRoof_C*>(UPrimalItemStructure_BaseRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


