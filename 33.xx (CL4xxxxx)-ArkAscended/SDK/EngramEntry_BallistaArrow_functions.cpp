#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BallistaArrow.EngramEntry_BallistaArrow_C
// (None)

class UClass* UEngramEntry_BallistaArrow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BallistaArrow_C");

	return Clss;
}


// EngramEntry_BallistaArrow_C EngramEntry_BallistaArrow.Default__EngramEntry_BallistaArrow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BallistaArrow_C* UEngramEntry_BallistaArrow_C::GetDefaultObj()
{
	static class UEngramEntry_BallistaArrow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BallistaArrow_C*>(UEngramEntry_BallistaArrow_C::StaticClass()->DefaultObject);

	return Default;
}

}


