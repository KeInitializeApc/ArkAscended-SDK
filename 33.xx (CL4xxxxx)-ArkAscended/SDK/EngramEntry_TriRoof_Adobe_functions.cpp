#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriRoof_Adobe.EngramEntry_TriRoof_Adobe_C
// (None)

class UClass* UEngramEntry_TriRoof_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriRoof_Adobe_C");

	return Clss;
}


// EngramEntry_TriRoof_Adobe_C EngramEntry_TriRoof_Adobe.Default__EngramEntry_TriRoof_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriRoof_Adobe_C* UEngramEntry_TriRoof_Adobe_C::GetDefaultObj()
{
	static class UEngramEntry_TriRoof_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriRoof_Adobe_C*>(UEngramEntry_TriRoof_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


