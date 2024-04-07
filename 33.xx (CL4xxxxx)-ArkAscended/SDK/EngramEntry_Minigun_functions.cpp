#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Minigun.EngramEntry_Minigun_C
// (None)

class UClass* UEngramEntry_Minigun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Minigun_C");

	return Clss;
}


// EngramEntry_Minigun_C EngramEntry_Minigun.Default__EngramEntry_Minigun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Minigun_C* UEngramEntry_Minigun_C::GetDefaultObj()
{
	static class UEngramEntry_Minigun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Minigun_C*>(UEngramEntry_Minigun_C::StaticClass()->DefaultObject);

	return Default;
}

}


