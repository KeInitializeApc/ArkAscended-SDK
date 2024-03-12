#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Rex.EngramEntry_Saddle_Rex_C
// (None)

class UClass* UEngramEntry_Saddle_Rex_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Rex_C");

	return Clss;
}


// EngramEntry_Saddle_Rex_C EngramEntry_Saddle_Rex.Default__EngramEntry_Saddle_Rex_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Rex_C* UEngramEntry_Saddle_Rex_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Rex_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Rex_C*>(UEngramEntry_Saddle_Rex_C::StaticClass()->DefaultObject);

	return Default;
}

}


