#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Gravestone.EngramEntry_Gravestone_C
// (None)

class UClass* UEngramEntry_Gravestone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Gravestone_C");

	return Clss;
}


// EngramEntry_Gravestone_C EngramEntry_Gravestone.Default__EngramEntry_Gravestone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Gravestone_C* UEngramEntry_Gravestone_C::GetDefaultObj()
{
	static class UEngramEntry_Gravestone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Gravestone_C*>(UEngramEntry_Gravestone_C::StaticClass()->DefaultObject);

	return Default;
}

}


