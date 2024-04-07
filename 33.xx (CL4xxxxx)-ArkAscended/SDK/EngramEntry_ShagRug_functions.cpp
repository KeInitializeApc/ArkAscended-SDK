#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ShagRug.EngramEntry_ShagRug_C
// (None)

class UClass* UEngramEntry_ShagRug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ShagRug_C");

	return Clss;
}


// EngramEntry_ShagRug_C EngramEntry_ShagRug.Default__EngramEntry_ShagRug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ShagRug_C* UEngramEntry_ShagRug_C::GetDefaultObj()
{
	static class UEngramEntry_ShagRug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ShagRug_C*>(UEngramEntry_ShagRug_C::StaticClass()->DefaultObject);

	return Default;
}

}


