#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekUnderwaterBase.EngramEntry_TekUnderwaterBase_C
// (None)

class UClass* UEngramEntry_TekUnderwaterBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekUnderwaterBase_C");

	return Clss;
}


// EngramEntry_TekUnderwaterBase_C EngramEntry_TekUnderwaterBase.Default__EngramEntry_TekUnderwaterBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekUnderwaterBase_C* UEngramEntry_TekUnderwaterBase_C::GetDefaultObj()
{
	static class UEngramEntry_TekUnderwaterBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekUnderwaterBase_C*>(UEngramEntry_TekUnderwaterBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


