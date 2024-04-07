#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Scope.EngramEntry_Scope_C
// (None)

class UClass* UEngramEntry_Scope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Scope_C");

	return Clss;
}


// EngramEntry_Scope_C EngramEntry_Scope.Default__EngramEntry_Scope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Scope_C* UEngramEntry_Scope_C::GetDefaultObj()
{
	static class UEngramEntry_Scope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Scope_C*>(UEngramEntry_Scope_C::StaticClass()->DefaultObject);

	return Default;
}

}


