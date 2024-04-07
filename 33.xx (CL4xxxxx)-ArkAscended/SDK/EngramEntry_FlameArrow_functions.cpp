#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FlameArrow.EngramEntry_FlameArrow_C
// (None)

class UClass* UEngramEntry_FlameArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FlameArrow_C");

	return Clss;
}


// EngramEntry_FlameArrow_C EngramEntry_FlameArrow.Default__EngramEntry_FlameArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FlameArrow_C* UEngramEntry_FlameArrow_C::GetDefaultObj()
{
	static class UEngramEntry_FlameArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FlameArrow_C*>(UEngramEntry_FlameArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


