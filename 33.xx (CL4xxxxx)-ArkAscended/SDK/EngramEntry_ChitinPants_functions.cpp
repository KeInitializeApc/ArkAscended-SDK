#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinPants.EngramEntry_ChitinPants_C
// (None)

class UClass* UEngramEntry_ChitinPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinPants_C");

	return Clss;
}


// EngramEntry_ChitinPants_C EngramEntry_ChitinPants.Default__EngramEntry_ChitinPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinPants_C* UEngramEntry_ChitinPants_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinPants_C*>(UEngramEntry_ChitinPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


