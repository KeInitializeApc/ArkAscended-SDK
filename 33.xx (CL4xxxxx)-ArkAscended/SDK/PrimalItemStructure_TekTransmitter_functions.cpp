#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekTransmitter.PrimalItemStructure_TekTransmitter_C
// (None)

class UClass* UPrimalItemStructure_TekTransmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekTransmitter_C");

	return Clss;
}


// PrimalItemStructure_TekTransmitter_C PrimalItemStructure_TekTransmitter.Default__PrimalItemStructure_TekTransmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekTransmitter_C* UPrimalItemStructure_TekTransmitter_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekTransmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekTransmitter_C*>(UPrimalItemStructure_TekTransmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


