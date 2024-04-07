#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Flag.PrimalItemStructure_Flag_C
// (None)

class UClass* UPrimalItemStructure_Flag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Flag_C");

	return Clss;
}


// PrimalItemStructure_Flag_C PrimalItemStructure_Flag.Default__PrimalItemStructure_Flag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Flag_C* UPrimalItemStructure_Flag_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Flag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Flag_C*>(UPrimalItemStructure_Flag_C::StaticClass()->DefaultObject);

	return Default;
}

}


