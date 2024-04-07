#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CherufeSaddle.EngramEntry_CherufeSaddle_C
// (None)

class UClass* UEngramEntry_CherufeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CherufeSaddle_C");

	return Clss;
}


// EngramEntry_CherufeSaddle_C EngramEntry_CherufeSaddle.Default__EngramEntry_CherufeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CherufeSaddle_C* UEngramEntry_CherufeSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_CherufeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CherufeSaddle_C*>(UEngramEntry_CherufeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


