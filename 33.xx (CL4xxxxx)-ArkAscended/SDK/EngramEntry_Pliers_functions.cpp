#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Pliers.EngramEntry_Pliers_C
// (None)

class UClass* UEngramEntry_Pliers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Pliers_C");

	return Clss;
}


// EngramEntry_Pliers_C EngramEntry_Pliers.Default__EngramEntry_Pliers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Pliers_C* UEngramEntry_Pliers_C::GetDefaultObj()
{
	static class UEngramEntry_Pliers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Pliers_C*>(UEngramEntry_Pliers_C::StaticClass()->DefaultObject);

	return Default;
}

}


