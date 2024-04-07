#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneFloor.EngramEntry_StoneFloor_C
// (None)

class UClass* UEngramEntry_StoneFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneFloor_C");

	return Clss;
}


// EngramEntry_StoneFloor_C EngramEntry_StoneFloor.Default__EngramEntry_StoneFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneFloor_C* UEngramEntry_StoneFloor_C::GetDefaultObj()
{
	static class UEngramEntry_StoneFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneFloor_C*>(UEngramEntry_StoneFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


