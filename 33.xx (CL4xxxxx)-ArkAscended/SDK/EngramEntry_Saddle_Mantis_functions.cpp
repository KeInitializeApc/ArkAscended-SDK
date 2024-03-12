#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Mantis.EngramEntry_Saddle_Mantis_C
// (None)

class UClass* UEngramEntry_Saddle_Mantis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Mantis_C");

	return Clss;
}


// EngramEntry_Saddle_Mantis_C EngramEntry_Saddle_Mantis.Default__EngramEntry_Saddle_Mantis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Mantis_C* UEngramEntry_Saddle_Mantis_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Mantis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Mantis_C*>(UEngramEntry_Saddle_Mantis_C::StaticClass()->DefaultObject);

	return Default;
}

}


