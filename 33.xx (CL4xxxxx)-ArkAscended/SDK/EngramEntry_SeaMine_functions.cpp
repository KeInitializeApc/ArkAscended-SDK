#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SeaMine.EngramEntry_SeaMine_C
// (None)

class UClass* UEngramEntry_SeaMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SeaMine_C");

	return Clss;
}


// EngramEntry_SeaMine_C EngramEntry_SeaMine.Default__EngramEntry_SeaMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SeaMine_C* UEngramEntry_SeaMine_C::GetDefaultObj()
{
	static class UEngramEntry_SeaMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SeaMine_C*>(UEngramEntry_SeaMine_C::StaticClass()->DefaultObject);

	return Default;
}

}


