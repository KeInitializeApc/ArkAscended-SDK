#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Quetz.EngramEntry_Saddle_Quetz_C
// (None)

class UClass* UEngramEntry_Saddle_Quetz_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Quetz_C");

	return Clss;
}


// EngramEntry_Saddle_Quetz_C EngramEntry_Saddle_Quetz.Default__EngramEntry_Saddle_Quetz_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Quetz_C* UEngramEntry_Saddle_Quetz_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Quetz_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Quetz_C*>(UEngramEntry_Saddle_Quetz_C::StaticClass()->DefaultObject);

	return Default;
}

}


