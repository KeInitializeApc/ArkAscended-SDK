#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_ProjectileWithImpactFX.DmgType_ProjectileWithImpactFX_C
// (None)

class UClass* UDmgType_ProjectileWithImpactFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_ProjectileWithImpactFX_C");

	return Clss;
}


// DmgType_ProjectileWithImpactFX_C DmgType_ProjectileWithImpactFX.Default__DmgType_ProjectileWithImpactFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_ProjectileWithImpactFX_C* UDmgType_ProjectileWithImpactFX_C::GetDefaultObj()
{
	static class UDmgType_ProjectileWithImpactFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_ProjectileWithImpactFX_C*>(UDmgType_ProjectileWithImpactFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


