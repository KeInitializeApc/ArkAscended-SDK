#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageType_UnsubmergedRecoverOxygen.DamageType_UnsubmergedRecoverOxygen_C
// (None)

class UClass* UDamageType_UnsubmergedRecoverOxygen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageType_UnsubmergedRecoverOxygen_C");

	return Clss;
}


// DamageType_UnsubmergedRecoverOxygen_C DamageType_UnsubmergedRecoverOxygen.Default__DamageType_UnsubmergedRecoverOxygen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageType_UnsubmergedRecoverOxygen_C* UDamageType_UnsubmergedRecoverOxygen_C::GetDefaultObj()
{
	static class UDamageType_UnsubmergedRecoverOxygen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageType_UnsubmergedRecoverOxygen_C*>(UDamageType_UnsubmergedRecoverOxygen_C::StaticClass()->DefaultObject);

	return Default;
}

}


