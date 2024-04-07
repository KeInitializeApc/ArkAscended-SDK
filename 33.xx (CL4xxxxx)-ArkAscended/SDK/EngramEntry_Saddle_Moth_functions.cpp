#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Moth.EngramEntry_Saddle_Moth_C
// (None)

class UClass* UEngramEntry_Saddle_Moth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Moth_C");

	return Clss;
}


// EngramEntry_Saddle_Moth_C EngramEntry_Saddle_Moth.Default__EngramEntry_Saddle_Moth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Moth_C* UEngramEntry_Saddle_Moth_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Moth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Moth_C*>(UEngramEntry_Saddle_Moth_C::StaticClass()->DefaultObject);

	return Default;
}

}


