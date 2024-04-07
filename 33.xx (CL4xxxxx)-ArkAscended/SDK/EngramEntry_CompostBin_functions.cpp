#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CompostBin.EngramEntry_CompostBin_C
// (None)

class UClass* UEngramEntry_CompostBin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CompostBin_C");

	return Clss;
}


// EngramEntry_CompostBin_C EngramEntry_CompostBin.Default__EngramEntry_CompostBin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CompostBin_C* UEngramEntry_CompostBin_C::GetDefaultObj()
{
	static class UEngramEntry_CompostBin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CompostBin_C*>(UEngramEntry_CompostBin_C::StaticClass()->DefaultObject);

	return Default;
}

}


