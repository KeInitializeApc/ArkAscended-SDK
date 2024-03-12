#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CompoundBow.EngramEntry_CompoundBow_C
// (None)

class UClass* UEngramEntry_CompoundBow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CompoundBow_C");

	return Clss;
}


// EngramEntry_CompoundBow_C EngramEntry_CompoundBow.Default__EngramEntry_CompoundBow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CompoundBow_C* UEngramEntry_CompoundBow_C::GetDefaultObj()
{
	static class UEngramEntry_CompoundBow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CompoundBow_C*>(UEngramEntry_CompoundBow_C::StaticClass()->DefaultObject);

	return Default;
}

}


