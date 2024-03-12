#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Flag.EngramEntry_Flag_C
// (None)

class UClass* UEngramEntry_Flag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Flag_C");

	return Clss;
}


// EngramEntry_Flag_C EngramEntry_Flag.Default__EngramEntry_Flag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Flag_C* UEngramEntry_Flag_C::GetDefaultObj()
{
	static class UEngramEntry_Flag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Flag_C*>(UEngramEntry_Flag_C::StaticClass()->DefaultObject);

	return Default;
}

}


