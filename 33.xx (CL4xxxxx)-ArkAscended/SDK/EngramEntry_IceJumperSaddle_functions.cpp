#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_IceJumperSaddle.EngramEntry_IceJumperSaddle_C
// (None)

class UClass* UEngramEntry_IceJumperSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_IceJumperSaddle_C");

	return Clss;
}


// EngramEntry_IceJumperSaddle_C EngramEntry_IceJumperSaddle.Default__EngramEntry_IceJumperSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_IceJumperSaddle_C* UEngramEntry_IceJumperSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_IceJumperSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_IceJumperSaddle_C*>(UEngramEntry_IceJumperSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


