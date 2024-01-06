#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Projectile.DmgType_Projectile_C
// (None)

class UClass* UDmgType_Projectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Projectile_C");

	return Clss;
}


// DmgType_Projectile_C DmgType_Projectile.Default__DmgType_Projectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Projectile_C* UDmgType_Projectile_C::GetDefaultObj()
{
	static class UDmgType_Projectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Projectile_C*>(UDmgType_Projectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


