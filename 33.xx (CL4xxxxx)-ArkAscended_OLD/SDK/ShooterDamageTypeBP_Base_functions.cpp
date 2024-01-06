#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShooterDamageTypeBP_Base.ShooterDamageTypeBP_Base_C
// (None)

class UClass* UShooterDamageTypeBP_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShooterDamageTypeBP_Base_C");

	return Clss;
}


// ShooterDamageTypeBP_Base_C ShooterDamageTypeBP_Base.Default__ShooterDamageTypeBP_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShooterDamageTypeBP_Base_C* UShooterDamageTypeBP_Base_C::GetDefaultObj()
{
	static class UShooterDamageTypeBP_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShooterDamageTypeBP_Base_C*>(UShooterDamageTypeBP_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


