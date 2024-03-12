#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FurGloves.EngramEntry_FurGloves_C
// (None)

class UClass* UEngramEntry_FurGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FurGloves_C");

	return Clss;
}


// EngramEntry_FurGloves_C EngramEntry_FurGloves.Default__EngramEntry_FurGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FurGloves_C* UEngramEntry_FurGloves_C::GetDefaultObj()
{
	static class UEngramEntry_FurGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FurGloves_C*>(UEngramEntry_FurGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


