#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Spear.EngramEntry_Spear_C
// (None)

class UClass* UEngramEntry_Spear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Spear_C");

	return Clss;
}


// EngramEntry_Spear_C EngramEntry_Spear.Default__EngramEntry_Spear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Spear_C* UEngramEntry_Spear_C::GetDefaultObj()
{
	static class UEngramEntry_Spear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Spear_C*>(UEngramEntry_Spear_C::StaticClass()->DefaultObject);

	return Default;
}

}


