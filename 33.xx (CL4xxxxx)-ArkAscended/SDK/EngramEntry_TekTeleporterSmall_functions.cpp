#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTeleporterSmall.EngramEntry_TekTeleporterSmall_C
// (None)

class UClass* UEngramEntry_TekTeleporterSmall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTeleporterSmall_C");

	return Clss;
}


// EngramEntry_TekTeleporterSmall_C EngramEntry_TekTeleporterSmall.Default__EngramEntry_TekTeleporterSmall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTeleporterSmall_C* UEngramEntry_TekTeleporterSmall_C::GetDefaultObj()
{
	static class UEngramEntry_TekTeleporterSmall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTeleporterSmall_C*>(UEngramEntry_TekTeleporterSmall_C::StaticClass()->DefaultObject);

	return Default;
}

}


