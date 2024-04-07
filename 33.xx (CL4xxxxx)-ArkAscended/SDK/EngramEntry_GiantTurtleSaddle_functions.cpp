#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GiantTurtleSaddle.EngramEntry_GiantTurtleSaddle_C
// (None)

class UClass* UEngramEntry_GiantTurtleSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GiantTurtleSaddle_C");

	return Clss;
}


// EngramEntry_GiantTurtleSaddle_C EngramEntry_GiantTurtleSaddle.Default__EngramEntry_GiantTurtleSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GiantTurtleSaddle_C* UEngramEntry_GiantTurtleSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_GiantTurtleSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GiantTurtleSaddle_C*>(UEngramEntry_GiantTurtleSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


