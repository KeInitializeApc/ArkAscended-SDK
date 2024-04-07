#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_RavagerSaddle.EngramEntry_RavagerSaddle_C
// (None)

class UClass* UEngramEntry_RavagerSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_RavagerSaddle_C");

	return Clss;
}


// EngramEntry_RavagerSaddle_C EngramEntry_RavagerSaddle.Default__EngramEntry_RavagerSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_RavagerSaddle_C* UEngramEntry_RavagerSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_RavagerSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_RavagerSaddle_C*>(UEngramEntry_RavagerSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


