#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SimpleShotgunBullet.EngramEntry_SimpleShotgunBullet_C
// (None)

class UClass* UEngramEntry_SimpleShotgunBullet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SimpleShotgunBullet_C");

	return Clss;
}


// EngramEntry_SimpleShotgunBullet_C EngramEntry_SimpleShotgunBullet.Default__EngramEntry_SimpleShotgunBullet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SimpleShotgunBullet_C* UEngramEntry_SimpleShotgunBullet_C::GetDefaultObj()
{
	static class UEngramEntry_SimpleShotgunBullet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SimpleShotgunBullet_C*>(UEngramEntry_SimpleShotgunBullet_C::StaticClass()->DefaultObject);

	return Default;
}

}


