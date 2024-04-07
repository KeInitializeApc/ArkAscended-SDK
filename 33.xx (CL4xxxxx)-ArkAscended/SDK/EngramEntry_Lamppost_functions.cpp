#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Lamppost.EngramEntry_Lamppost_C
// (None)

class UClass* UEngramEntry_Lamppost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Lamppost_C");

	return Clss;
}


// EngramEntry_Lamppost_C EngramEntry_Lamppost.Default__EngramEntry_Lamppost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Lamppost_C* UEngramEntry_Lamppost_C::GetDefaultObj()
{
	static class UEngramEntry_Lamppost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Lamppost_C*>(UEngramEntry_Lamppost_C::StaticClass()->DefaultObject);

	return Default;
}

}


