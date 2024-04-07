#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RefinedTranqDart.EngramEntry_RefinedTranqDart_C
// (None)

class UClass* UEngramEntry_RefinedTranqDart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RefinedTranqDart_C");

	return Clss;
}


// EngramEntry_RefinedTranqDart_C EngramEntry_RefinedTranqDart.Default__EngramEntry_RefinedTranqDart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RefinedTranqDart_C* UEngramEntry_RefinedTranqDart_C::GetDefaultObj()
{
	static class UEngramEntry_RefinedTranqDart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RefinedTranqDart_C*>(UEngramEntry_RefinedTranqDart_C::StaticClass()->DefaultObject);

	return Default;
}

}


