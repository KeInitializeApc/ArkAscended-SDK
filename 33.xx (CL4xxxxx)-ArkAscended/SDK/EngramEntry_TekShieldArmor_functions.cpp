#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekShieldArmor.EngramEntry_TekShieldArmor_C
// (None)

class UClass* UEngramEntry_TekShieldArmor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekShieldArmor_C");

	return Clss;
}


// EngramEntry_TekShieldArmor_C EngramEntry_TekShieldArmor.Default__EngramEntry_TekShieldArmor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekShieldArmor_C* UEngramEntry_TekShieldArmor_C::GetDefaultObj()
{
	static class UEngramEntry_TekShieldArmor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekShieldArmor_C*>(UEngramEntry_TekShieldArmor_C::StaticClass()->DefaultObject);

	return Default;
}

}


