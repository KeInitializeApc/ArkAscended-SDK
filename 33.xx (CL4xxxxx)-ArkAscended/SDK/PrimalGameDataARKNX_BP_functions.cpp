#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalGameDataARKNX_BP.PrimalGameDataARKNX_BP_C
// (None)

class UClass* UPrimalGameDataARKNX_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalGameDataARKNX_BP_C");

	return Clss;
}


// PrimalGameDataARKNX_BP_C PrimalGameDataARKNX_BP.Default__PrimalGameDataARKNX_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalGameDataARKNX_BP_C* UPrimalGameDataARKNX_BP_C::GetDefaultObj()
{
	static class UPrimalGameDataARKNX_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalGameDataARKNX_BP_C*>(UPrimalGameDataARKNX_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


