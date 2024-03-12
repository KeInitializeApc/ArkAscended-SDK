#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GrapplingHook.EngramEntry_GrapplingHook_C
// (None)

class UClass* UEngramEntry_GrapplingHook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GrapplingHook_C");

	return Clss;
}


// EngramEntry_GrapplingHook_C EngramEntry_GrapplingHook.Default__EngramEntry_GrapplingHook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GrapplingHook_C* UEngramEntry_GrapplingHook_C::GetDefaultObj()
{
	static class UEngramEntry_GrapplingHook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GrapplingHook_C*>(UEngramEntry_GrapplingHook_C::StaticClass()->DefaultObject);

	return Default;
}

}


