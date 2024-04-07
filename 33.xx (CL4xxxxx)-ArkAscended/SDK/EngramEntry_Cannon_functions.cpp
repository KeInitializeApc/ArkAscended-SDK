#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Cannon.EngramEntry_Cannon_C
// (None)

class UClass* UEngramEntry_Cannon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Cannon_C");

	return Clss;
}


// EngramEntry_Cannon_C EngramEntry_Cannon.Default__EngramEntry_Cannon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Cannon_C* UEngramEntry_Cannon_C::GetDefaultObj()
{
	static class UEngramEntry_Cannon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Cannon_C*>(UEngramEntry_Cannon_C::StaticClass()->DefaultObject);

	return Default;
}

}


