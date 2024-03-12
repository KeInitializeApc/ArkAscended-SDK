#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CompoundArrow.EngramEntry_CompoundArrow_C
// (None)

class UClass* UEngramEntry_CompoundArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CompoundArrow_C");

	return Clss;
}


// EngramEntry_CompoundArrow_C EngramEntry_CompoundArrow.Default__EngramEntry_CompoundArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CompoundArrow_C* UEngramEntry_CompoundArrow_C::GetDefaultObj()
{
	static class UEngramEntry_CompoundArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CompoundArrow_C*>(UEngramEntry_CompoundArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


