#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Trike.EngramEntry_Saddle_Trike_C
// (None)

class UClass* UEngramEntry_Saddle_Trike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Trike_C");

	return Clss;
}


// EngramEntry_Saddle_Trike_C EngramEntry_Saddle_Trike.Default__EngramEntry_Saddle_Trike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Trike_C* UEngramEntry_Saddle_Trike_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Trike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Trike_C*>(UEngramEntry_Saddle_Trike_C::StaticClass()->DefaultObject);

	return Default;
}

}


