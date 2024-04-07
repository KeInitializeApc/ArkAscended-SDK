#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Cannon.PrimalItemStructure_Cannon_C
// (None)

class UClass* UPrimalItemStructure_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Cannon_C");

	return Clss;
}


// PrimalItemStructure_Cannon_C PrimalItemStructure_Cannon.Default__PrimalItemStructure_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Cannon_C* UPrimalItemStructure_Cannon_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Cannon_C*>(UPrimalItemStructure_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


