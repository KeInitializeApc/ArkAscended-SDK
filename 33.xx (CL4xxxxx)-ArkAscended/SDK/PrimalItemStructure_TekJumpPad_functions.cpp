#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekJumpPad.PrimalItemStructure_TekJumpPad_C
// (None)

class UClass* UPrimalItemStructure_TekJumpPad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekJumpPad_C");

	return Clss;
}


// PrimalItemStructure_TekJumpPad_C PrimalItemStructure_TekJumpPad.Default__PrimalItemStructure_TekJumpPad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekJumpPad_C* UPrimalItemStructure_TekJumpPad_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekJumpPad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekJumpPad_C*>(UPrimalItemStructure_TekJumpPad_C::StaticClass()->DefaultObject);

	return Default;
}

}


