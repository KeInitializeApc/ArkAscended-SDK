#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Saddle_Stego.EngramEntry_Saddle_Stego_C
// (None)

class UClass* UEngramEntry_Saddle_Stego_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Saddle_Stego_C");

	return Clss;
}


// EngramEntry_Saddle_Stego_C EngramEntry_Saddle_Stego.Default__EngramEntry_Saddle_Stego_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Saddle_Stego_C* UEngramEntry_Saddle_Stego_C::GetDefaultObj()
{
	static class UEngramEntry_Saddle_Stego_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Saddle_Stego_C*>(UEngramEntry_Saddle_Stego_C::StaticClass()->DefaultObject);

	return Default;
}

}


