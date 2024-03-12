#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekSpaceWhaleSaddle.EngramEntry_TekSpaceWhaleSaddle_C
// (None)

class UClass* UEngramEntry_TekSpaceWhaleSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekSpaceWhaleSaddle_C");

	return Clss;
}


// EngramEntry_TekSpaceWhaleSaddle_C EngramEntry_TekSpaceWhaleSaddle.Default__EngramEntry_TekSpaceWhaleSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekSpaceWhaleSaddle_C* UEngramEntry_TekSpaceWhaleSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_TekSpaceWhaleSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekSpaceWhaleSaddle_C*>(UEngramEntry_TekSpaceWhaleSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


