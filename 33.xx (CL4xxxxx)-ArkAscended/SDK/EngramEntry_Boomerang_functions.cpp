#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Boomerang.EngramEntry_Boomerang_C
// (None)

class UClass* UEngramEntry_Boomerang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Boomerang_C");

	return Clss;
}


// EngramEntry_Boomerang_C EngramEntry_Boomerang.Default__EngramEntry_Boomerang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Boomerang_C* UEngramEntry_Boomerang_C::GetDefaultObj()
{
	static class UEngramEntry_Boomerang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Boomerang_C*>(UEngramEntry_Boomerang_C::StaticClass()->DefaultObject);

	return Default;
}

}


