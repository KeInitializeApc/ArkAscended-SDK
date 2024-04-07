#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Sarco.EngramEntry_Saddle_Sarco_C
// (None)

class UClass* UEngramEntry_Saddle_Sarco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Sarco_C");

	return Clss;
}


// EngramEntry_Saddle_Sarco_C EngramEntry_Saddle_Sarco.Default__EngramEntry_Saddle_Sarco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Sarco_C* UEngramEntry_Saddle_Sarco_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Sarco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Sarco_C*>(UEngramEntry_Saddle_Sarco_C::StaticClass()->DefaultObject);

	return Default;
}

}


