#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_StoneCliffPlatform.EngramEntry_StoneCliffPlatform_C
// (None)

class UClass* UEngramEntry_StoneCliffPlatform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_StoneCliffPlatform_C");

	return Clss;
}


// EngramEntry_StoneCliffPlatform_C EngramEntry_StoneCliffPlatform.Default__EngramEntry_StoneCliffPlatform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_StoneCliffPlatform_C* UEngramEntry_StoneCliffPlatform_C::GetDefaultObj()
{
	static class UEngramEntry_StoneCliffPlatform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_StoneCliffPlatform_C*>(UEngramEntry_StoneCliffPlatform_C::StaticClass()->DefaultObject);

	return Default;
}

}


