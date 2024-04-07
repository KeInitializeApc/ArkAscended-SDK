#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Tek_Gategrame.EngramEntry_Tek_Gategrame_C
// (None)

class UClass* UEngramEntry_Tek_Gategrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Tek_Gategrame_C");

	return Clss;
}


// EngramEntry_Tek_Gategrame_C EngramEntry_Tek_Gategrame.Default__EngramEntry_Tek_Gategrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Tek_Gategrame_C* UEngramEntry_Tek_Gategrame_C::GetDefaultObj()
{
	static class UEngramEntry_Tek_Gategrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Tek_Gategrame_C*>(UEngramEntry_Tek_Gategrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


