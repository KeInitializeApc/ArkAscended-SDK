#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Scissors.EngramEntry_Scissors_C
// (None)

class UClass* UEngramEntry_Scissors_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Scissors_C");

	return Clss;
}


// EngramEntry_Scissors_C EngramEntry_Scissors.Default__EngramEntry_Scissors_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Scissors_C* UEngramEntry_Scissors_C::GetDefaultObj()
{
	static class UEngramEntry_Scissors_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Scissors_C*>(UEngramEntry_Scissors_C::StaticClass()->DefaultObject);

	return Default;
}

}


