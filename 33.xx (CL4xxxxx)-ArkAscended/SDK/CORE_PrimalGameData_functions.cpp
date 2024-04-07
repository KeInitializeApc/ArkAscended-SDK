#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CORE_PrimalGameData.CORE_PrimalGameData_C
// (None)

class UClass* UCORE_PrimalGameData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CORE_PrimalGameData_C");

	return Clss;
}


// CORE_PrimalGameData_C CORE_PrimalGameData.Default__CORE_PrimalGameData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCORE_PrimalGameData_C* UCORE_PrimalGameData_C::GetDefaultObj()
{
	static class UCORE_PrimalGameData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCORE_PrimalGameData_C*>(UCORE_PrimalGameData_C::StaticClass()->DefaultObject);

	return Default;
}

}


