#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Explosion_Demolition_TekProjectile.DmgType_Explosion_Demolition_TekProjectile_C
// (None)

class UClass* UDmgType_Explosion_Demolition_TekProjectile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Explosion_Demolition_TekProjectile_C");

	return Clss;
}


// DmgType_Explosion_Demolition_TekProjectile_C DmgType_Explosion_Demolition_TekProjectile.Default__DmgType_Explosion_Demolition_TekProjectile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Explosion_Demolition_TekProjectile_C* UDmgType_Explosion_Demolition_TekProjectile_C::GetDefaultObj()
{
	static class UDmgType_Explosion_Demolition_TekProjectile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Explosion_Demolition_TekProjectile_C*>(UDmgType_Explosion_Demolition_TekProjectile_C::StaticClass()->DefaultObject);

	return Default;
}

}


