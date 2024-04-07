#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleBullet.EngramEntry_SimpleBullet_C
// (None)

class UClass* UEngramEntry_SimpleBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleBullet_C");

	return Clss;
}


// EngramEntry_SimpleBullet_C EngramEntry_SimpleBullet.Default__EngramEntry_SimpleBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleBullet_C* UEngramEntry_SimpleBullet_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleBullet_C*>(UEngramEntry_SimpleBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


