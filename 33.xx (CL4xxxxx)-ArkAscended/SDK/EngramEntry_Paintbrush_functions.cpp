#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Paintbrush.EngramEntry_Paintbrush_C
// (None)

class UClass* UEngramEntry_Paintbrush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Paintbrush_C");

	return Clss;
}


// EngramEntry_Paintbrush_C EngramEntry_Paintbrush.Default__EngramEntry_Paintbrush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Paintbrush_C* UEngramEntry_Paintbrush_C::GetDefaultObj()
{
	static class UEngramEntry_Paintbrush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Paintbrush_C*>(UEngramEntry_Paintbrush_C::StaticClass()->DefaultObject);

	return Default;
}

}


