#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ZiplineMotor.EngramEntry_ZiplineMotor_C
// (None)

class UClass* UEngramEntry_ZiplineMotor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ZiplineMotor_C");

	return Clss;
}


// EngramEntry_ZiplineMotor_C EngramEntry_ZiplineMotor.Default__EngramEntry_ZiplineMotor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ZiplineMotor_C* UEngramEntry_ZiplineMotor_C::GetDefaultObj()
{
	static class UEngramEntry_ZiplineMotor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ZiplineMotor_C*>(UEngramEntry_ZiplineMotor_C::StaticClass()->DefaultObject);

	return Default;
}

}


