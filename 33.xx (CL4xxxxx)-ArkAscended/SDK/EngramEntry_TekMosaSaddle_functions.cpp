#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekMosaSaddle.EngramEntry_TekMosaSaddle_C
// (None)

class UClass* UEngramEntry_TekMosaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekMosaSaddle_C");

	return Clss;
}


// EngramEntry_TekMosaSaddle_C EngramEntry_TekMosaSaddle.Default__EngramEntry_TekMosaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekMosaSaddle_C* UEngramEntry_TekMosaSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekMosaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekMosaSaddle_C*>(UEngramEntry_TekMosaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


