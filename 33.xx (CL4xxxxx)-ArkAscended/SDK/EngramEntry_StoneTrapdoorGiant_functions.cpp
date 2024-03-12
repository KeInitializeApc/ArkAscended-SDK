#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneTrapdoorGiant.EngramEntry_StoneTrapdoorGiant_C
// (None)

class UClass* UEngramEntry_StoneTrapdoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneTrapdoorGiant_C");

	return Clss;
}


// EngramEntry_StoneTrapdoorGiant_C EngramEntry_StoneTrapdoorGiant.Default__EngramEntry_StoneTrapdoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneTrapdoorGiant_C* UEngramEntry_StoneTrapdoorGiant_C::GetDefaultObj()
{
	static class UEngramEntry_StoneTrapdoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneTrapdoorGiant_C*>(UEngramEntry_StoneTrapdoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


