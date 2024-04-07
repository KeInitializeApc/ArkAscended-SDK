#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneGateframe.PrimalItemStructure_StoneGateframe_C
// (None)

class UClass* UPrimalItemStructure_StoneGateframe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneGateframe_C");

	return Clss;
}


// PrimalItemStructure_StoneGateframe_C PrimalItemStructure_StoneGateframe.Default__PrimalItemStructure_StoneGateframe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneGateframe_C* UPrimalItemStructure_StoneGateframe_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneGateframe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneGateframe_C*>(UPrimalItemStructure_StoneGateframe_C::StaticClass()->DefaultObject);

	return Default;
}

}


