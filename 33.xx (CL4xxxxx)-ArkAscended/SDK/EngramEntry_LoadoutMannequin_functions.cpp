#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_LoadoutMannequin.EngramEntry_LoadoutMannequin_C
// (None)

class UClass* UEngramEntry_LoadoutMannequin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_LoadoutMannequin_C");

	return Clss;
}


// EngramEntry_LoadoutMannequin_C EngramEntry_LoadoutMannequin.Default__EngramEntry_LoadoutMannequin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_LoadoutMannequin_C* UEngramEntry_LoadoutMannequin_C::GetDefaultObj()
{
	static class UEngramEntry_LoadoutMannequin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_LoadoutMannequin_C*>(UEngramEntry_LoadoutMannequin_C::StaticClass()->DefaultObject);

	return Default;
}

}


