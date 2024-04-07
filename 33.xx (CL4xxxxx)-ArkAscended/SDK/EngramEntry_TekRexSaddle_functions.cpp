#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekRexSaddle.EngramEntry_TekRexSaddle_C
// (None)

class UClass* UEngramEntry_TekRexSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekRexSaddle_C");

	return Clss;
}


// EngramEntry_TekRexSaddle_C EngramEntry_TekRexSaddle.Default__EngramEntry_TekRexSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekRexSaddle_C* UEngramEntry_TekRexSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekRexSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekRexSaddle_C*>(UEngramEntry_TekRexSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


