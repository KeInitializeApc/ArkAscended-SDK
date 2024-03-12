#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Fireplace.EngramEntry_Fireplace_C
// (None)

class UClass* UEngramEntry_Fireplace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Fireplace_C");

	return Clss;
}


// EngramEntry_Fireplace_C EngramEntry_Fireplace.Default__EngramEntry_Fireplace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Fireplace_C* UEngramEntry_Fireplace_C::GetDefaultObj()
{
	static class UEngramEntry_Fireplace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Fireplace_C*>(UEngramEntry_Fireplace_C::StaticClass()->DefaultObject);

	return Default;
}

}


