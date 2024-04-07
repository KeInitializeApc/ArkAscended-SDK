#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Ceiling_Door_XL_Metal.EngramEntry_Ceiling_Door_XL_Metal_C
// (None)

class UClass* UEngramEntry_Ceiling_Door_XL_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Ceiling_Door_XL_Metal_C");

	return Clss;
}


// EngramEntry_Ceiling_Door_XL_Metal_C EngramEntry_Ceiling_Door_XL_Metal.Default__EngramEntry_Ceiling_Door_XL_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Ceiling_Door_XL_Metal_C* UEngramEntry_Ceiling_Door_XL_Metal_C::GetDefaultObj()
{
	static class UEngramEntry_Ceiling_Door_XL_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Ceiling_Door_XL_Metal_C*>(UEngramEntry_Ceiling_Door_XL_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


