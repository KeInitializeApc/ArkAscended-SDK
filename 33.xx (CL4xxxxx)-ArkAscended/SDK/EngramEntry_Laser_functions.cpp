#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Laser.EngramEntry_Laser_C
// (None)

class UClass* UEngramEntry_Laser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Laser_C");

	return Clss;
}


// EngramEntry_Laser_C EngramEntry_Laser.Default__EngramEntry_Laser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Laser_C* UEngramEntry_Laser_C::GetDefaultObj()
{
	static class UEngramEntry_Laser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Laser_C*>(UEngramEntry_Laser_C::StaticClass()->DefaultObject);

	return Default;
}

}


