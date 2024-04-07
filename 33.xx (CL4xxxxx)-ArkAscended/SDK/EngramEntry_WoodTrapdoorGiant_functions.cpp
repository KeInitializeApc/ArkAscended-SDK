#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodTrapdoorGiant.EngramEntry_WoodTrapdoorGiant_C
// (None)

class UClass* UEngramEntry_WoodTrapdoorGiant_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodTrapdoorGiant_C");

	return Clss;
}


// EngramEntry_WoodTrapdoorGiant_C EngramEntry_WoodTrapdoorGiant.Default__EngramEntry_WoodTrapdoorGiant_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodTrapdoorGiant_C* UEngramEntry_WoodTrapdoorGiant_C::GetDefaultObj()
{
	static class UEngramEntry_WoodTrapdoorGiant_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodTrapdoorGiant_C*>(UEngramEntry_WoodTrapdoorGiant_C::StaticClass()->DefaultObject);

	return Default;
}

}


