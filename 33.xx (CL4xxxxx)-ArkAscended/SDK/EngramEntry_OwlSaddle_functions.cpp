#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_OwlSaddle.EngramEntry_OwlSaddle_C
// (None)

class UClass* UEngramEntry_OwlSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_OwlSaddle_C");

	return Clss;
}


// EngramEntry_OwlSaddle_C EngramEntry_OwlSaddle.Default__EngramEntry_OwlSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_OwlSaddle_C* UEngramEntry_OwlSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_OwlSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_OwlSaddle_C*>(UEngramEntry_OwlSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


