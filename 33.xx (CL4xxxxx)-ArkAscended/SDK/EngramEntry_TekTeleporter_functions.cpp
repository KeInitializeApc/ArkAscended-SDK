#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTeleporter.EngramEntry_TekTeleporter_C
// (None)

class UClass* UEngramEntry_TekTeleporter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTeleporter_C");

	return Clss;
}


// EngramEntry_TekTeleporter_C EngramEntry_TekTeleporter.Default__EngramEntry_TekTeleporter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTeleporter_C* UEngramEntry_TekTeleporter_C::GetDefaultObj()
{
	static class UEngramEntry_TekTeleporter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTeleporter_C*>(UEngramEntry_TekTeleporter_C::StaticClass()->DefaultObject);

	return Default;
}

}


