#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_SpindlesSaddle.EngramEntry_SpindlesSaddle_C
// (None)

class UClass* UEngramEntry_SpindlesSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_SpindlesSaddle_C");

	return Clss;
}


// EngramEntry_SpindlesSaddle_C EngramEntry_SpindlesSaddle.Default__EngramEntry_SpindlesSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_SpindlesSaddle_C* UEngramEntry_SpindlesSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_SpindlesSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_SpindlesSaddle_C*>(UEngramEntry_SpindlesSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


