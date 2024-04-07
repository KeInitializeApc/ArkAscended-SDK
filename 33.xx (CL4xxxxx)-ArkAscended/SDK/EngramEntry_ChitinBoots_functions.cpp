#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinBoots.EngramEntry_ChitinBoots_C
// (None)

class UClass* UEngramEntry_ChitinBoots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinBoots_C");

	return Clss;
}


// EngramEntry_ChitinBoots_C EngramEntry_ChitinBoots.Default__EngramEntry_ChitinBoots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinBoots_C* UEngramEntry_ChitinBoots_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinBoots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinBoots_C*>(UEngramEntry_ChitinBoots_C::StaticClass()->DefaultObject);

	return Default;
}

}


