#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CruiseMissile.EngramEntry_CruiseMissile_C
// (None)

class UClass* UEngramEntry_CruiseMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CruiseMissile_C");

	return Clss;
}


// EngramEntry_CruiseMissile_C EngramEntry_CruiseMissile.Default__EngramEntry_CruiseMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CruiseMissile_C* UEngramEntry_CruiseMissile_C::GetDefaultObj()
{
	static class UEngramEntry_CruiseMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CruiseMissile_C*>(UEngramEntry_CruiseMissile_C::StaticClass()->DefaultObject);

	return Default;
}

}


