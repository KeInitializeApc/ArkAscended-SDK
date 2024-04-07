#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Tek_DinoLaser_TrailEmitter.Tek_DinoLaser_TrailEmitter_C
// (Actor)

class UClass* ATek_DinoLaser_TrailEmitter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Tek_DinoLaser_TrailEmitter_C");

	return Clss;
}


// Tek_DinoLaser_TrailEmitter_C Tek_DinoLaser_TrailEmitter.Default__Tek_DinoLaser_TrailEmitter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATek_DinoLaser_TrailEmitter_C* ATek_DinoLaser_TrailEmitter_C::GetDefaultObj()
{
	static class ATek_DinoLaser_TrailEmitter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATek_DinoLaser_TrailEmitter_C*>(ATek_DinoLaser_TrailEmitter_C::StaticClass()->DefaultObject);

	return Default;
}

}


