#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GachaSaddle.EngramEntry_GachaSaddle_C
// (None)

class UClass* UEngramEntry_GachaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GachaSaddle_C");

	return Clss;
}


// EngramEntry_GachaSaddle_C EngramEntry_GachaSaddle.Default__EngramEntry_GachaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GachaSaddle_C* UEngramEntry_GachaSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_GachaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GachaSaddle_C*>(UEngramEntry_GachaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


