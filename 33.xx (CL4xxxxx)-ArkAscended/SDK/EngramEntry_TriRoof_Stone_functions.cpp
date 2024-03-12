#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TriRoof_Stone.EngramEntry_TriRoof_Stone_C
// (None)

class UClass* UEngramEntry_TriRoof_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TriRoof_Stone_C");

	return Clss;
}


// EngramEntry_TriRoof_Stone_C EngramEntry_TriRoof_Stone.Default__EngramEntry_TriRoof_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TriRoof_Stone_C* UEngramEntry_TriRoof_Stone_C::GetDefaultObj()
{
	static class UEngramEntry_TriRoof_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TriRoof_Stone_C*>(UEngramEntry_TriRoof_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


