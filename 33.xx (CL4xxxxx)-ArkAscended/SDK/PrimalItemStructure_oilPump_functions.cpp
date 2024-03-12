#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_oilPump.PrimalItemStructure_oilPump_C
// (None)

class UClass* UPrimalItemStructure_oilPump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_oilPump_C");

	return Clss;
}


// PrimalItemStructure_oilPump_C PrimalItemStructure_oilPump.Default__PrimalItemStructure_oilPump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_oilPump_C* UPrimalItemStructure_oilPump_C::GetDefaultObj()
{
	static class UPrimalItemStructure_oilPump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_oilPump_C*>(UPrimalItemStructure_oilPump_C::StaticClass()->DefaultObject);

	return Default;
}

}


