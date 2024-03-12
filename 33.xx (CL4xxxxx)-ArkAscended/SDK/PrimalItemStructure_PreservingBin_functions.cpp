#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_PreservingBin.PrimalItemStructure_PreservingBin_C
// (None)

class UClass* UPrimalItemStructure_PreservingBin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_PreservingBin_C");

	return Clss;
}


// PrimalItemStructure_PreservingBin_C PrimalItemStructure_PreservingBin.Default__PrimalItemStructure_PreservingBin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_PreservingBin_C* UPrimalItemStructure_PreservingBin_C::GetDefaultObj()
{
	static class UPrimalItemStructure_PreservingBin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_PreservingBin_C*>(UPrimalItemStructure_PreservingBin_C::StaticClass()->DefaultObject);

	return Default;
}

}


