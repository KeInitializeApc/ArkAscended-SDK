#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BallistaTurret.EngramEntry_BallistaTurret_C
// (None)

class UClass* UEngramEntry_BallistaTurret_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BallistaTurret_C");

	return Clss;
}


// EngramEntry_BallistaTurret_C EngramEntry_BallistaTurret.Default__EngramEntry_BallistaTurret_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BallistaTurret_C* UEngramEntry_BallistaTurret_C::GetDefaultObj()
{
	static class UEngramEntry_BallistaTurret_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BallistaTurret_C*>(UEngramEntry_BallistaTurret_C::StaticClass()->DefaultObject);

	return Default;
}

}


