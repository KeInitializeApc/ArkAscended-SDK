#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodCage.EngramEntry_WoodCage_C
// (None)

class UClass* UEngramEntry_WoodCage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodCage_C");

	return Clss;
}


// EngramEntry_WoodCage_C EngramEntry_WoodCage.Default__EngramEntry_WoodCage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodCage_C* UEngramEntry_WoodCage_C::GetDefaultObj()
{
	static class UEngramEntry_WoodCage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodCage_C*>(UEngramEntry_WoodCage_C::StaticClass()->DefaultObject);

	return Default;
}

}


