#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_OilPump.EngramEntry_OilPump_C
// (None)

class UClass* UEngramEntry_OilPump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_OilPump_C");

	return Clss;
}


// EngramEntry_OilPump_C EngramEntry_OilPump.Default__EngramEntry_OilPump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_OilPump_C* UEngramEntry_OilPump_C::GetDefaultObj()
{
	static class UEngramEntry_OilPump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_OilPump_C*>(UEngramEntry_OilPump_C::StaticClass()->DefaultObject);

	return Default;
}

}


