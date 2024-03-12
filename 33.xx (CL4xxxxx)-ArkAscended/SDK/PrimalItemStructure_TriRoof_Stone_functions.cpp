#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TriRoof_Stone.PrimalItemStructure_TriRoof_Stone_C
// (None)

class UClass* UPrimalItemStructure_TriRoof_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TriRoof_Stone_C");

	return Clss;
}


// PrimalItemStructure_TriRoof_Stone_C PrimalItemStructure_TriRoof_Stone.Default__PrimalItemStructure_TriRoof_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TriRoof_Stone_C* UPrimalItemStructure_TriRoof_Stone_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TriRoof_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TriRoof_Stone_C*>(UPrimalItemStructure_TriRoof_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


