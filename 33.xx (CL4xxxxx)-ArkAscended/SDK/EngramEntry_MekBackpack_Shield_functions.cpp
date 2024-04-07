#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekBackpack_Shield.EngramEntry_MekBackpack_Shield_C
// (None)

class UClass* UEngramEntry_MekBackpack_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekBackpack_Shield_C");

	return Clss;
}


// EngramEntry_MekBackpack_Shield_C EngramEntry_MekBackpack_Shield.Default__EngramEntry_MekBackpack_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekBackpack_Shield_C* UEngramEntry_MekBackpack_Shield_C::GetDefaultObj()
{
	static class UEngramEntry_MekBackpack_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekBackpack_Shield_C*>(UEngramEntry_MekBackpack_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


