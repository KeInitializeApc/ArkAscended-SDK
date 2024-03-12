#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FurPants.EngramEntry_FurPants_C
// (None)

class UClass* UEngramEntry_FurPants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FurPants_C");

	return Clss;
}


// EngramEntry_FurPants_C EngramEntry_FurPants.Default__EngramEntry_FurPants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FurPants_C* UEngramEntry_FurPants_C::GetDefaultObj()
{
	static class UEngramEntry_FurPants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FurPants_C*>(UEngramEntry_FurPants_C::StaticClass()->DefaultObject);

	return Default;
}

}


