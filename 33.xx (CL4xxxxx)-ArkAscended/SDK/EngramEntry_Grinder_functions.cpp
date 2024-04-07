#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Grinder.EngramEntry_Grinder_C
// (None)

class UClass* UEngramEntry_Grinder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Grinder_C");

	return Clss;
}


// EngramEntry_Grinder_C EngramEntry_Grinder.Default__EngramEntry_Grinder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Grinder_C* UEngramEntry_Grinder_C::GetDefaultObj()
{
	static class UEngramEntry_Grinder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Grinder_C*>(UEngramEntry_Grinder_C::StaticClass()->DefaultObject);

	return Default;
}

}


