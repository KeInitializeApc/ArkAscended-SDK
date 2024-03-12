#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ThatchRoof.EngramEntry_ThatchRoof_C
// (None)

class UClass* UEngramEntry_ThatchRoof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ThatchRoof_C");

	return Clss;
}


// EngramEntry_ThatchRoof_C EngramEntry_ThatchRoof.Default__EngramEntry_ThatchRoof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ThatchRoof_C* UEngramEntry_ThatchRoof_C::GetDefaultObj()
{
	static class UEngramEntry_ThatchRoof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ThatchRoof_C*>(UEngramEntry_ThatchRoof_C::StaticClass()->DefaultObject);

	return Default;
}

}


