#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Lance.EngramEntry_Lance_C
// (None)

class UClass* UEngramEntry_Lance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Lance_C");

	return Clss;
}


// EngramEntry_Lance_C EngramEntry_Lance.Default__EngramEntry_Lance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Lance_C* UEngramEntry_Lance_C::GetDefaultObj()
{
	static class UEngramEntry_Lance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Lance_C*>(UEngramEntry_Lance_C::StaticClass()->DefaultObject);

	return Default;
}

}


