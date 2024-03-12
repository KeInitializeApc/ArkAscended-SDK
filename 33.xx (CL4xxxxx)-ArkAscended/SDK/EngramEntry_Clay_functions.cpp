#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Clay.EngramEntry_Clay_C
// (None)

class UClass* UEngramEntry_Clay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Clay_C");

	return Clss;
}


// EngramEntry_Clay_C EngramEntry_Clay.Default__EngramEntry_Clay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Clay_C* UEngramEntry_Clay_C::GetDefaultObj()
{
	static class UEngramEntry_Clay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Clay_C*>(UEngramEntry_Clay_C::StaticClass()->DefaultObject);

	return Default;
}

}


