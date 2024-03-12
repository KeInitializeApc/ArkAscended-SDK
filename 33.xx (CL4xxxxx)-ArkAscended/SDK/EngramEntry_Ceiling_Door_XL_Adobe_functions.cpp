#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Ceiling_Door_XL_Adobe.EngramEntry_Ceiling_Door_XL_Adobe_C
// (None)

class UClass* UEngramEntry_Ceiling_Door_XL_Adobe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Ceiling_Door_XL_Adobe_C");

	return Clss;
}


// EngramEntry_Ceiling_Door_XL_Adobe_C EngramEntry_Ceiling_Door_XL_Adobe.Default__EngramEntry_Ceiling_Door_XL_Adobe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Ceiling_Door_XL_Adobe_C* UEngramEntry_Ceiling_Door_XL_Adobe_C::GetDefaultObj()
{
	static class UEngramEntry_Ceiling_Door_XL_Adobe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Ceiling_Door_XL_Adobe_C*>(UEngramEntry_Ceiling_Door_XL_Adobe_C::StaticClass()->DefaultObject);

	return Default;
}

}


