#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Flamethrower.EngramEntry_Flamethrower_C
// (None)

class UClass* UEngramEntry_Flamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Flamethrower_C");

	return Clss;
}


// EngramEntry_Flamethrower_C EngramEntry_Flamethrower.Default__EngramEntry_Flamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Flamethrower_C* UEngramEntry_Flamethrower_C::GetDefaultObj()
{
	static class UEngramEntry_Flamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Flamethrower_C*>(UEngramEntry_Flamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


