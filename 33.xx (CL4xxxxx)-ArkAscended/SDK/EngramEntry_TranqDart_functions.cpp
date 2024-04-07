#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TranqDart.EngramEntry_TranqDart_C
// (None)

class UClass* UEngramEntry_TranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TranqDart_C");

	return Clss;
}


// EngramEntry_TranqDart_C EngramEntry_TranqDart.Default__EngramEntry_TranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TranqDart_C* UEngramEntry_TranqDart_C::GetDefaultObj()
{
	static class UEngramEntry_TranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TranqDart_C*>(UEngramEntry_TranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


