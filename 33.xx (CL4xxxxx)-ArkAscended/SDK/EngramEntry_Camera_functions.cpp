#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Camera.EngramEntry_Camera_C
// (None)

class UClass* UEngramEntry_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Camera_C");

	return Clss;
}


// EngramEntry_Camera_C EngramEntry_Camera.Default__EngramEntry_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Camera_C* UEngramEntry_Camera_C::GetDefaultObj()
{
	static class UEngramEntry_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Camera_C*>(UEngramEntry_Camera_C::StaticClass()->DefaultObject);

	return Default;
}

}


