#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekReplicator.EngramEntry_TekReplicator_C
// (None)

class UClass* UEngramEntry_TekReplicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekReplicator_C");

	return Clss;
}


// EngramEntry_TekReplicator_C EngramEntry_TekReplicator.Default__EngramEntry_TekReplicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekReplicator_C* UEngramEntry_TekReplicator_C::GetDefaultObj()
{
	static class UEngramEntry_TekReplicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekReplicator_C*>(UEngramEntry_TekReplicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


