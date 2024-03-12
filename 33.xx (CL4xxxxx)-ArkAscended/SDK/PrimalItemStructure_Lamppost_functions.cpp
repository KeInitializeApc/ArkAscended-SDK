#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Lamppost.PrimalItemStructure_Lamppost_C
// (None)

class UClass* UPrimalItemStructure_Lamppost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Lamppost_C");

	return Clss;
}


// PrimalItemStructure_Lamppost_C PrimalItemStructure_Lamppost.Default__PrimalItemStructure_Lamppost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Lamppost_C* UPrimalItemStructure_Lamppost_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Lamppost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Lamppost_C*>(UPrimalItemStructure_Lamppost_C::StaticClass()->DefaultObject);

	return Default;
}

}


