#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Tent.EngramEntry_Tent_C
// (None)

class UClass* UEngramEntry_Tent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Tent_C");

	return Clss;
}


// EngramEntry_Tent_C EngramEntry_Tent.Default__EngramEntry_Tent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Tent_C* UEngramEntry_Tent_C::GetDefaultObj()
{
	static class UEngramEntry_Tent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Tent_C*>(UEngramEntry_Tent_C::StaticClass()->DefaultObject);

	return Default;
}

}


