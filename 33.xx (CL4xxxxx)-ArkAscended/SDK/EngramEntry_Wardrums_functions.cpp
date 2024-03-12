#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Wardrums.EngramEntry_Wardrums_C
// (None)

class UClass* UEngramEntry_Wardrums_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Wardrums_C");

	return Clss;
}


// EngramEntry_Wardrums_C EngramEntry_Wardrums.Default__EngramEntry_Wardrums_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Wardrums_C* UEngramEntry_Wardrums_C::GetDefaultObj()
{
	static class UEngramEntry_Wardrums_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Wardrums_C*>(UEngramEntry_Wardrums_C::StaticClass()->DefaultObject);

	return Default;
}

}


