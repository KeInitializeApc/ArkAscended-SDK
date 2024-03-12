#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Fishbasket.EngramEntry_Fishbasket_C
// (None)

class UClass* UEngramEntry_Fishbasket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Fishbasket_C");

	return Clss;
}


// EngramEntry_Fishbasket_C EngramEntry_Fishbasket.Default__EngramEntry_Fishbasket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Fishbasket_C* UEngramEntry_Fishbasket_C::GetDefaultObj()
{
	static class UEngramEntry_Fishbasket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Fishbasket_C*>(UEngramEntry_Fishbasket_C::StaticClass()->DefaultObject);

	return Default;
}

}


