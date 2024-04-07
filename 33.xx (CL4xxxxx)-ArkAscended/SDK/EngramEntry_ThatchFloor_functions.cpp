#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchFloor.EngramEntry_ThatchFloor_C
// (None)

class UClass* UEngramEntry_ThatchFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchFloor_C");

	return Clss;
}


// EngramEntry_ThatchFloor_C EngramEntry_ThatchFloor.Default__EngramEntry_ThatchFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchFloor_C* UEngramEntry_ThatchFloor_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchFloor_C*>(UEngramEntry_ThatchFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


