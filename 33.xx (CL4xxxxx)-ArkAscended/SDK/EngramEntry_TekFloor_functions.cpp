#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekFloor.EngramEntry_TekFloor_C
// (None)

class UClass* UEngramEntry_TekFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekFloor_C");

	return Clss;
}


// EngramEntry_TekFloor_C EngramEntry_TekFloor.Default__EngramEntry_TekFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekFloor_C* UEngramEntry_TekFloor_C::GetDefaultObj()
{
	static class UEngramEntry_TekFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekFloor_C*>(UEngramEntry_TekFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


