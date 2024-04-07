#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_FurHelmet.EngramEntry_FurHelmet_C
// (None)

class UClass* UEngramEntry_FurHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_FurHelmet_C");

	return Clss;
}


// EngramEntry_FurHelmet_C EngramEntry_FurHelmet.Default__EngramEntry_FurHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_FurHelmet_C* UEngramEntry_FurHelmet_C::GetDefaultObj()
{
	static class UEngramEntry_FurHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_FurHelmet_C*>(UEngramEntry_FurHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


