#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StonePick.EngramEntry_StonePick_C
// (None)

class UClass* UEngramEntry_StonePick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StonePick_C");

	return Clss;
}


// EngramEntry_StonePick_C EngramEntry_StonePick.Default__EngramEntry_StonePick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StonePick_C* UEngramEntry_StonePick_C::GetDefaultObj()
{
	static class UEngramEntry_StonePick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StonePick_C*>(UEngramEntry_StonePick_C::StaticClass()->DefaultObject);

	return Default;
}

}


