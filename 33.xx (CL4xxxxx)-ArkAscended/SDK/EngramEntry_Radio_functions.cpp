#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Radio.EngramEntry_Radio_C
// (None)

class UClass* UEngramEntry_Radio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Radio_C");

	return Clss;
}


// EngramEntry_Radio_C EngramEntry_Radio.Default__EngramEntry_Radio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Radio_C* UEngramEntry_Radio_C::GetDefaultObj()
{
	static class UEngramEntry_Radio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Radio_C*>(UEngramEntry_Radio_C::StaticClass()->DefaultObject);

	return Default;
}

}


