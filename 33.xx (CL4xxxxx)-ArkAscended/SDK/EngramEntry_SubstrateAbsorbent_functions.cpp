#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SubstrateAbsorbent.EngramEntry_SubstrateAbsorbent_C
// (None)

class UClass* UEngramEntry_SubstrateAbsorbent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SubstrateAbsorbent_C");

	return Clss;
}


// EngramEntry_SubstrateAbsorbent_C EngramEntry_SubstrateAbsorbent.Default__EngramEntry_SubstrateAbsorbent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SubstrateAbsorbent_C* UEngramEntry_SubstrateAbsorbent_C::GetDefaultObj()
{
	static class UEngramEntry_SubstrateAbsorbent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SubstrateAbsorbent_C*>(UEngramEntry_SubstrateAbsorbent_C::StaticClass()->DefaultObject);

	return Default;
}

}


