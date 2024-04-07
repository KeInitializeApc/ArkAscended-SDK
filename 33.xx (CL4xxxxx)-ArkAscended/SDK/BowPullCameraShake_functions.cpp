#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BowPullCameraShake.BowPullCameraShake_C
// (None)

class UClass* UBowPullCameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BowPullCameraShake_C");

	return Clss;
}


// BowPullCameraShake_C BowPullCameraShake.Default__BowPullCameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBowPullCameraShake_C* UBowPullCameraShake_C::GetDefaultObj()
{
	static class UBowPullCameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBowPullCameraShake_C*>(UBowPullCameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


