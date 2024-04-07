#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_HideShirt.EngramEntry_HideShirt_C
// (None)

class UClass* UEngramEntry_HideShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_HideShirt_C");

	return Clss;
}


// EngramEntry_HideShirt_C EngramEntry_HideShirt.Default__EngramEntry_HideShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_HideShirt_C* UEngramEntry_HideShirt_C::GetDefaultObj()
{
	static class UEngramEntry_HideShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_HideShirt_C*>(UEngramEntry_HideShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


