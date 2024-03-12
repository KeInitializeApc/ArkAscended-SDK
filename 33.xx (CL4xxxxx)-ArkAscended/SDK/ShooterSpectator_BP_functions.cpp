#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ShooterSpectator_BP.ShooterSpectator_BP_C
// (Actor, Pawn)

class UClass* AShooterSpectator_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShooterSpectator_BP_C");

	return Clss;
}


// ShooterSpectator_BP_C ShooterSpectator_BP.Default__ShooterSpectator_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShooterSpectator_BP_C* AShooterSpectator_BP_C::GetDefaultObj()
{
	static class AShooterSpectator_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShooterSpectator_BP_C*>(AShooterSpectator_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


