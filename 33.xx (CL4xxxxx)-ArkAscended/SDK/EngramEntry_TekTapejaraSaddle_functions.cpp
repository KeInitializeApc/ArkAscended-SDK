#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekTapejaraSaddle.EngramEntry_TekTapejaraSaddle_C
// (None)

class UClass* UEngramEntry_TekTapejaraSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekTapejaraSaddle_C");

	return Clss;
}


// EngramEntry_TekTapejaraSaddle_C EngramEntry_TekTapejaraSaddle.Default__EngramEntry_TekTapejaraSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekTapejaraSaddle_C* UEngramEntry_TekTapejaraSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekTapejaraSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekTapejaraSaddle_C*>(UEngramEntry_TekTapejaraSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


