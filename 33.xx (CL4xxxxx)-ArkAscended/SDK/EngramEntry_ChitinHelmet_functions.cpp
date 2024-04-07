#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChitinHelmet.EngramEntry_ChitinHelmet_C
// (None)

class UClass* UEngramEntry_ChitinHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChitinHelmet_C");

	return Clss;
}


// EngramEntry_ChitinHelmet_C EngramEntry_ChitinHelmet.Default__EngramEntry_ChitinHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChitinHelmet_C* UEngramEntry_ChitinHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_ChitinHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChitinHelmet_C*>(UEngramEntry_ChitinHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


