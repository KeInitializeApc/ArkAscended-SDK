#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekShirt.EngramEntry_TekShirt_C
// (None)

class UClass* UEngramEntry_TekShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekShirt_C");

	return Clss;
}


// EngramEntry_TekShirt_C EngramEntry_TekShirt.Default__EngramEntry_TekShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekShirt_C* UEngramEntry_TekShirt_C::GetDefaultObj()
{
	static class UEngramEntry_TekShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekShirt_C*>(UEngramEntry_TekShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


