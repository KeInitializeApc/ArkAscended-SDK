#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekBridge.EngramEntry_TekBridge_C
// (None)

class UClass* UEngramEntry_TekBridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekBridge_C");

	return Clss;
}


// EngramEntry_TekBridge_C EngramEntry_TekBridge.Default__EngramEntry_TekBridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekBridge_C* UEngramEntry_TekBridge_C::GetDefaultObj()
{
	static class UEngramEntry_TekBridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekBridge_C*>(UEngramEntry_TekBridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


