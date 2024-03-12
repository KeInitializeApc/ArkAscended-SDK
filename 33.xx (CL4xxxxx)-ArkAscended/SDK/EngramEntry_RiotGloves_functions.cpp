#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RiotGloves.EngramEntry_RiotGloves_C
// (None)

class UClass* UEngramEntry_RiotGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RiotGloves_C");

	return Clss;
}


// EngramEntry_RiotGloves_C EngramEntry_RiotGloves.Default__EngramEntry_RiotGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RiotGloves_C* UEngramEntry_RiotGloves_C::GetDefaultObj()
{
	static class UEngramEntry_RiotGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RiotGloves_C*>(UEngramEntry_RiotGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


