#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Electronics.EngramEntry_Electronics_C
// (None)

class UClass* UEngramEntry_Electronics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Electronics_C");

	return Clss;
}


// EngramEntry_Electronics_C EngramEntry_Electronics.Default__EngramEntry_Electronics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Electronics_C* UEngramEntry_Electronics_C::GetDefaultObj()
{
	static class UEngramEntry_Electronics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Electronics_C*>(UEngramEntry_Electronics_C::StaticClass()->DefaultObject);

	return Default;
}

}


