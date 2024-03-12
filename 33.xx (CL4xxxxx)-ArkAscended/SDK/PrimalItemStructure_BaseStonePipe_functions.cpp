#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseStonePipe.PrimalItemStructure_BaseStonePipe_C
// (None)

class UClass* UPrimalItemStructure_BaseStonePipe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseStonePipe_C");

	return Clss;
}


// PrimalItemStructure_BaseStonePipe_C PrimalItemStructure_BaseStonePipe.Default__PrimalItemStructure_BaseStonePipe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseStonePipe_C* UPrimalItemStructure_BaseStonePipe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseStonePipe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseStonePipe_C*>(UPrimalItemStructure_BaseStonePipe_C::StaticClass()->DefaultObject);

	return Default;
}

}


