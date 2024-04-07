#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AmmoBox.EngramEntry_AmmoBox_C
// (None)

class UClass* UEngramEntry_AmmoBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AmmoBox_C");

	return Clss;
}


// EngramEntry_AmmoBox_C EngramEntry_AmmoBox.Default__EngramEntry_AmmoBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AmmoBox_C* UEngramEntry_AmmoBox_C::GetDefaultObj()
{
	static class UEngramEntry_AmmoBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AmmoBox_C*>(UEngramEntry_AmmoBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


