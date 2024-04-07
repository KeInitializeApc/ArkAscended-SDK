#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Crossbow.EngramEntry_Crossbow_C
// (None)

class UClass* UEngramEntry_Crossbow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Crossbow_C");

	return Clss;
}


// EngramEntry_Crossbow_C EngramEntry_Crossbow.Default__EngramEntry_Crossbow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Crossbow_C* UEngramEntry_Crossbow_C::GetDefaultObj()
{
	static class UEngramEntry_Crossbow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Crossbow_C*>(UEngramEntry_Crossbow_C::StaticClass()->DefaultObject);

	return Default;
}

}


