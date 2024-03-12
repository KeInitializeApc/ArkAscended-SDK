#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_GasBagsSaddle.EngramEntry_GasBagsSaddle_C
// (None)

class UClass* UEngramEntry_GasBagsSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_GasBagsSaddle_C");

	return Clss;
}


// EngramEntry_GasBagsSaddle_C EngramEntry_GasBagsSaddle.Default__EngramEntry_GasBagsSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_GasBagsSaddle_C* UEngramEntry_GasBagsSaddle_C::GetDefaultObj()
{
	static class UEngramEntry_GasBagsSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_GasBagsSaddle_C*>(UEngramEntry_GasBagsSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


