#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekBow.EngramEntry_TekBow_C
// (None)

class UClass* UEngramEntry_TekBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekBow_C");

	return Clss;
}


// EngramEntry_TekBow_C EngramEntry_TekBow.Default__EngramEntry_TekBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekBow_C* UEngramEntry_TekBow_C::GetDefaultObj()
{
	static class UEngramEntry_TekBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekBow_C*>(UEngramEntry_TekBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


