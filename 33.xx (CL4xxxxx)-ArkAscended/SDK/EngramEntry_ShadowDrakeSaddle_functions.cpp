#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ShadowDrakeSaddle.EngramEntry_ShadowDrakeSaddle_C
// (None)

class UClass* UEngramEntry_ShadowDrakeSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ShadowDrakeSaddle_C");

	return Clss;
}


// EngramEntry_ShadowDrakeSaddle_C EngramEntry_ShadowDrakeSaddle.Default__EngramEntry_ShadowDrakeSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ShadowDrakeSaddle_C* UEngramEntry_ShadowDrakeSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_ShadowDrakeSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ShadowDrakeSaddle_C*>(UEngramEntry_ShadowDrakeSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


