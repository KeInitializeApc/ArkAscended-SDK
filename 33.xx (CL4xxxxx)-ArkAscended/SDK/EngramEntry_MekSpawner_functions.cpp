#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_MekSpawner.EngramEntry_MekSpawner_C
// (None)

class UClass* UEngramEntry_MekSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_MekSpawner_C");

	return Clss;
}


// EngramEntry_MekSpawner_C EngramEntry_MekSpawner.Default__EngramEntry_MekSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_MekSpawner_C* UEngramEntry_MekSpawner_C::GetDefaultObj()
{
	static class UEngramEntry_MekSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_MekSpawner_C*>(UEngramEntry_MekSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


