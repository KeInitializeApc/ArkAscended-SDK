#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RefinedShards.EngramEntry_RefinedShards_C
// (None)

class UClass* UEngramEntry_RefinedShards_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RefinedShards_C");

	return Clss;
}


// EngramEntry_RefinedShards_C EngramEntry_RefinedShards.Default__EngramEntry_RefinedShards_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RefinedShards_C* UEngramEntry_RefinedShards_C::GetDefaultObj()
{
	static class UEngramEntry_RefinedShards_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RefinedShards_C*>(UEngramEntry_RefinedShards_C::StaticClass()->DefaultObject);

	return Default;
}

}


