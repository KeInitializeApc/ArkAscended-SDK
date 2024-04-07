#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekExosuit.EngramEntry_TekExosuit_C
// (None)

class UClass* UEngramEntry_TekExosuit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekExosuit_C");

	return Clss;
}


// EngramEntry_TekExosuit_C EngramEntry_TekExosuit.Default__EngramEntry_TekExosuit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekExosuit_C* UEngramEntry_TekExosuit_C::GetDefaultObj()
{
	static class UEngramEntry_TekExosuit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekExosuit_C*>(UEngramEntry_TekExosuit_C::StaticClass()->DefaultObject);

	return Default;
}

}


