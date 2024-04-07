#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_KarkinoSaddle.EngramEntry_KarkinoSaddle_C
// (None)

class UClass* UEngramEntry_KarkinoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_KarkinoSaddle_C");

	return Clss;
}


// EngramEntry_KarkinoSaddle_C EngramEntry_KarkinoSaddle.Default__EngramEntry_KarkinoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_KarkinoSaddle_C* UEngramEntry_KarkinoSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_KarkinoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_KarkinoSaddle_C*>(UEngramEntry_KarkinoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


