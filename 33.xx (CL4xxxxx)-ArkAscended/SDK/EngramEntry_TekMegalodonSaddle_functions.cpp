#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekMegalodonSaddle.EngramEntry_TekMegalodonSaddle_C
// (None)

class UClass* UEngramEntry_TekMegalodonSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekMegalodonSaddle_C");

	return Clss;
}


// EngramEntry_TekMegalodonSaddle_C EngramEntry_TekMegalodonSaddle.Default__EngramEntry_TekMegalodonSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekMegalodonSaddle_C* UEngramEntry_TekMegalodonSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekMegalodonSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekMegalodonSaddle_C*>(UEngramEntry_TekMegalodonSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


