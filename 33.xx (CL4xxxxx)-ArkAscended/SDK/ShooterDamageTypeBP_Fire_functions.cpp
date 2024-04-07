#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShooterDamageTypeBP_Fire.ShooterDamageTypeBP_Fire_C
// (None)

class UClass* UShooterDamageTypeBP_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShooterDamageTypeBP_Fire_C");

	return Clss;
}


// ShooterDamageTypeBP_Fire_C ShooterDamageTypeBP_Fire.Default__ShooterDamageTypeBP_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShooterDamageTypeBP_Fire_C* UShooterDamageTypeBP_Fire_C::GetDefaultObj()
{
	static class UShooterDamageTypeBP_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShooterDamageTypeBP_Fire_C*>(UShooterDamageTypeBP_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


