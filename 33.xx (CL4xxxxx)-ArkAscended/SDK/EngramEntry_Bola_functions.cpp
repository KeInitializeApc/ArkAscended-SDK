#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Bola.EngramEntry_Bola_C
// (None)

class UClass* UEngramEntry_Bola_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Bola_C");

	return Clss;
}


// EngramEntry_Bola_C EngramEntry_Bola.Default__EngramEntry_Bola_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Bola_C* UEngramEntry_Bola_C::GetDefaultObj()
{
	static class UEngramEntry_Bola_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Bola_C*>(UEngramEntry_Bola_C::StaticClass()->DefaultObject);

	return Default;
}

}


