#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTrough.EngramEntry_TekTrough_C
// (None)

class UClass* UEngramEntry_TekTrough_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTrough_C");

	return Clss;
}


// EngramEntry_TekTrough_C EngramEntry_TekTrough.Default__EngramEntry_TekTrough_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTrough_C* UEngramEntry_TekTrough_C::GetDefaultObj()
{
	static class UEngramEntry_TekTrough_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTrough_C*>(UEngramEntry_TekTrough_C::StaticClass()->DefaultObject);

	return Default;
}

}


