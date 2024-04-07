#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Compass.EngramEntry_Compass_C
// (None)

class UClass* UEngramEntry_Compass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Compass_C");

	return Clss;
}


// EngramEntry_Compass_C EngramEntry_Compass.Default__EngramEntry_Compass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Compass_C* UEngramEntry_Compass_C::GetDefaultObj()
{
	static class UEngramEntry_Compass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Compass_C*>(UEngramEntry_Compass_C::StaticClass()->DefaultObject);

	return Default;
}

}


