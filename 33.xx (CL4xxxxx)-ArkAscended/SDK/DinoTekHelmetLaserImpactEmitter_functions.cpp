#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoTekHelmetLaserImpactEmitter.DinoTekHelmetLaserImpactEmitter_C
// (Actor)

class UClass* ADinoTekHelmetLaserImpactEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoTekHelmetLaserImpactEmitter_C");

	return Clss;
}


// DinoTekHelmetLaserImpactEmitter_C DinoTekHelmetLaserImpactEmitter.Default__DinoTekHelmetLaserImpactEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADinoTekHelmetLaserImpactEmitter_C* ADinoTekHelmetLaserImpactEmitter_C::GetDefaultObj()
{
	static class ADinoTekHelmetLaserImpactEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADinoTekHelmetLaserImpactEmitter_C*>(ADinoTekHelmetLaserImpactEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


