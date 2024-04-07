#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleRifleBullet.EngramEntry_SimpleRifleBullet_C
// (None)

class UClass* UEngramEntry_SimpleRifleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleRifleBullet_C");

	return Clss;
}


// EngramEntry_SimpleRifleBullet_C EngramEntry_SimpleRifleBullet.Default__EngramEntry_SimpleRifleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleRifleBullet_C* UEngramEntry_SimpleRifleBullet_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleRifleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleRifleBullet_C*>(UEngramEntry_SimpleRifleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


