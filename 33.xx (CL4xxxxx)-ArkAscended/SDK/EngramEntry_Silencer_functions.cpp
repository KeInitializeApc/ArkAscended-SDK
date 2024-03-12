#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Silencer.EngramEntry_Silencer_C
// (None)

class UClass* UEngramEntry_Silencer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Silencer_C");

	return Clss;
}


// EngramEntry_Silencer_C EngramEntry_Silencer.Default__EngramEntry_Silencer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Silencer_C* UEngramEntry_Silencer_C::GetDefaultObj()
{
	static class UEngramEntry_Silencer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Silencer_C*>(UEngramEntry_Silencer_C::StaticClass()->DefaultObject);

	return Default;
}

}


