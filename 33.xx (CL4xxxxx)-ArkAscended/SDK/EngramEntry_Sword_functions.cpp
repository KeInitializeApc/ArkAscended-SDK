#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Sword.EngramEntry_Sword_C
// (None)

class UClass* UEngramEntry_Sword_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Sword_C");

	return Clss;
}


// EngramEntry_Sword_C EngramEntry_Sword.Default__EngramEntry_Sword_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Sword_C* UEngramEntry_Sword_C::GetDefaultObj()
{
	static class UEngramEntry_Sword_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Sword_C*>(UEngramEntry_Sword_C::StaticClass()->DefaultObject);

	return Default;
}

}


