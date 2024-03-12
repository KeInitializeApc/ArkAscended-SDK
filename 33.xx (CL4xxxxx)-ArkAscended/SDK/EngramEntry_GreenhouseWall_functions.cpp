#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GreenhouseWall.EngramEntry_GreenhouseWall_C
// (None)

class UClass* UEngramEntry_GreenhouseWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GreenhouseWall_C");

	return Clss;
}


// EngramEntry_GreenhouseWall_C EngramEntry_GreenhouseWall.Default__EngramEntry_GreenhouseWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GreenhouseWall_C* UEngramEntry_GreenhouseWall_C::GetDefaultObj()
{
	static class UEngramEntry_GreenhouseWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GreenhouseWall_C*>(UEngramEntry_GreenhouseWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


