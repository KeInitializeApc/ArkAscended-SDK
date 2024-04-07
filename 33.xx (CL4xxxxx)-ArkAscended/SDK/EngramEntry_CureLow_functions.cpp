#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CureLow.EngramEntry_CureLow_C
// (None)

class UClass* UEngramEntry_CureLow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CureLow_C");

	return Clss;
}


// EngramEntry_CureLow_C EngramEntry_CureLow.Default__EngramEntry_CureLow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CureLow_C* UEngramEntry_CureLow_C::GetDefaultObj()
{
	static class UEngramEntry_CureLow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CureLow_C*>(UEngramEntry_CureLow_C::StaticClass()->DefaultObject);

	return Default;
}

}


