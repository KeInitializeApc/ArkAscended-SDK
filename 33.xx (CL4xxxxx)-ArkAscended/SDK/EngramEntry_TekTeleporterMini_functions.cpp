#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTeleporterMini.EngramEntry_TekTeleporterMini_C
// (None)

class UClass* UEngramEntry_TekTeleporterMini_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTeleporterMini_C");

	return Clss;
}


// EngramEntry_TekTeleporterMini_C EngramEntry_TekTeleporterMini.Default__EngramEntry_TekTeleporterMini_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTeleporterMini_C* UEngramEntry_TekTeleporterMini_C::GetDefaultObj()
{
	static class UEngramEntry_TekTeleporterMini_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTeleporterMini_C*>(UEngramEntry_TekTeleporterMini_C::StaticClass()->DefaultObject);

	return Default;
}

}


