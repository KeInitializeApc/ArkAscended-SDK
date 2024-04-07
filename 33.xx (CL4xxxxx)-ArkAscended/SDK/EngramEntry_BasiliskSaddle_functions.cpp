#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_BasiliskSaddle.EngramEntry_BasiliskSaddle_C
// (None)

class UClass* UEngramEntry_BasiliskSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_BasiliskSaddle_C");

	return Clss;
}


// EngramEntry_BasiliskSaddle_C EngramEntry_BasiliskSaddle.Default__EngramEntry_BasiliskSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_BasiliskSaddle_C* UEngramEntry_BasiliskSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_BasiliskSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_BasiliskSaddle_C*>(UEngramEntry_BasiliskSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


