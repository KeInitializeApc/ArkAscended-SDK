#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Waterskin.EngramEntry_Waterskin_C
// (None)

class UClass* UEngramEntry_Waterskin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Waterskin_C");

	return Clss;
}


// EngramEntry_Waterskin_C EngramEntry_Waterskin.Default__EngramEntry_Waterskin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Waterskin_C* UEngramEntry_Waterskin_C::GetDefaultObj()
{
	static class UEngramEntry_Waterskin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Waterskin_C*>(UEngramEntry_Waterskin_C::StaticClass()->DefaultObject);

	return Default;
}

}


