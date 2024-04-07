#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_AdobeCeiling.EngramEntry_AdobeCeiling_C
// (None)

class UClass* UEngramEntry_AdobeCeiling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_AdobeCeiling_C");

	return Clss;
}


// EngramEntry_AdobeCeiling_C EngramEntry_AdobeCeiling.Default__EngramEntry_AdobeCeiling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_AdobeCeiling_C* UEngramEntry_AdobeCeiling_C::GetDefaultObj()
{
	static class UEngramEntry_AdobeCeiling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_AdobeCeiling_C*>(UEngramEntry_AdobeCeiling_C::StaticClass()->DefaultObject);

	return Default;
}

}


