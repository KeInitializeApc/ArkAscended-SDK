#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekRockDrakeSaddle.EngramEntry_TekRockDrakeSaddle_C
// (None)

class UClass* UEngramEntry_TekRockDrakeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekRockDrakeSaddle_C");

	return Clss;
}


// EngramEntry_TekRockDrakeSaddle_C EngramEntry_TekRockDrakeSaddle.Default__EngramEntry_TekRockDrakeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekRockDrakeSaddle_C* UEngramEntry_TekRockDrakeSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekRockDrakeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekRockDrakeSaddle_C*>(UEngramEntry_TekRockDrakeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


