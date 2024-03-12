#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneClub.EngramEntry_StoneClub_C
// (None)

class UClass* UEngramEntry_StoneClub_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneClub_C");

	return Clss;
}


// EngramEntry_StoneClub_C EngramEntry_StoneClub.Default__EngramEntry_StoneClub_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneClub_C* UEngramEntry_StoneClub_C::GetDefaultObj()
{
	static class UEngramEntry_StoneClub_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneClub_C*>(UEngramEntry_StoneClub_C::StaticClass()->DefaultObject);

	return Default;
}

}


