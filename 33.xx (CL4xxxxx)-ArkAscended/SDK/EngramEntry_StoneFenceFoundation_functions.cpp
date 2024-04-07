#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneFenceFoundation.EngramEntry_StoneFenceFoundation_C
// (None)

class UClass* UEngramEntry_StoneFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneFenceFoundation_C");

	return Clss;
}


// EngramEntry_StoneFenceFoundation_C EngramEntry_StoneFenceFoundation.Default__EngramEntry_StoneFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneFenceFoundation_C* UEngramEntry_StoneFenceFoundation_C::GetDefaultObj()
{
	static class UEngramEntry_StoneFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneFenceFoundation_C*>(UEngramEntry_StoneFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


