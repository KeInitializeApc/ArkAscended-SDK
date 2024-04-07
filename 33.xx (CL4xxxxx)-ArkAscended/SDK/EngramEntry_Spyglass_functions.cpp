#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Spyglass.EngramEntry_Spyglass_C
// (None)

class UClass* UEngramEntry_Spyglass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Spyglass_C");

	return Clss;
}


// EngramEntry_Spyglass_C EngramEntry_Spyglass.Default__EngramEntry_Spyglass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Spyglass_C* UEngramEntry_Spyglass_C::GetDefaultObj()
{
	static class UEngramEntry_Spyglass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Spyglass_C*>(UEngramEntry_Spyglass_C::StaticClass()->DefaultObject);

	return Default;
}

}


