#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RefinedElement.EngramEntry_RefinedElement_C
// (None)

class UClass* UEngramEntry_RefinedElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RefinedElement_C");

	return Clss;
}


// EngramEntry_RefinedElement_C EngramEntry_RefinedElement.Default__EngramEntry_RefinedElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RefinedElement_C* UEngramEntry_RefinedElement_C::GetDefaultObj()
{
	static class UEngramEntry_RefinedElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RefinedElement_C*>(UEngramEntry_RefinedElement_C::StaticClass()->DefaultObject);

	return Default;
}

}


