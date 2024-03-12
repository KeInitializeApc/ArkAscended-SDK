#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GPS.EngramEntry_GPS_C
// (None)

class UClass* UEngramEntry_GPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GPS_C");

	return Clss;
}


// EngramEntry_GPS_C EngramEntry_GPS.Default__EngramEntry_GPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GPS_C* UEngramEntry_GPS_C::GetDefaultObj()
{
	static class UEngramEntry_GPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GPS_C*>(UEngramEntry_GPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


