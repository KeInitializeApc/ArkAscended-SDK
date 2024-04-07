#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodSign.EngramEntry_WoodSign_C
// (None)

class UClass* UEngramEntry_WoodSign_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodSign_C");

	return Clss;
}


// EngramEntry_WoodSign_C EngramEntry_WoodSign.Default__EngramEntry_WoodSign_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodSign_C* UEngramEntry_WoodSign_C::GetDefaultObj()
{
	static class UEngramEntry_WoodSign_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodSign_C*>(UEngramEntry_WoodSign_C::StaticClass()->DefaultObject);

	return Default;
}

}


