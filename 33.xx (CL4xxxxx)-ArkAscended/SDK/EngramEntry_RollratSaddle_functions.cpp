#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RollratSaddle.EngramEntry_RollratSaddle_C
// (None)

class UClass* UEngramEntry_RollratSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RollratSaddle_C");

	return Clss;
}


// EngramEntry_RollratSaddle_C EngramEntry_RollratSaddle.Default__EngramEntry_RollratSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RollratSaddle_C* UEngramEntry_RollratSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_RollratSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RollratSaddle_C*>(UEngramEntry_RollratSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


