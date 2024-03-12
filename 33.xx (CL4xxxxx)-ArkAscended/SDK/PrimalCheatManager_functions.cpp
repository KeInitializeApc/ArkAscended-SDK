#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalCheatManager.PrimalCheatManager_C
// (None)

class UClass* UPrimalCheatManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalCheatManager_C");

	return Clss;
}


// PrimalCheatManager_C PrimalCheatManager.Default__PrimalCheatManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalCheatManager_C* UPrimalCheatManager_C::GetDefaultObj()
{
	static class UPrimalCheatManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalCheatManager_C*>(UPrimalCheatManager_C::StaticClass()->DefaultObject);

	return Default;
}

}


