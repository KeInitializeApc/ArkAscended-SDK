#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_DedicatedStorage.EngramEntry_DedicatedStorage_C
// (None)

class UClass* UEngramEntry_DedicatedStorage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_DedicatedStorage_C");

	return Clss;
}


// EngramEntry_DedicatedStorage_C EngramEntry_DedicatedStorage.Default__EngramEntry_DedicatedStorage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_DedicatedStorage_C* UEngramEntry_DedicatedStorage_C::GetDefaultObj()
{
	static class UEngramEntry_DedicatedStorage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_DedicatedStorage_C*>(UEngramEntry_DedicatedStorage_C::StaticClass()->DefaultObject);

	return Default;
}

}


