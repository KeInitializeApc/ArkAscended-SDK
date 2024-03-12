#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Motorboat.EngramEntry_Motorboat_C
// (None)

class UClass* UEngramEntry_Motorboat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Motorboat_C");

	return Clss;
}


// EngramEntry_Motorboat_C EngramEntry_Motorboat.Default__EngramEntry_Motorboat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Motorboat_C* UEngramEntry_Motorboat_C::GetDefaultObj()
{
	static class UEngramEntry_Motorboat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Motorboat_C*>(UEngramEntry_Motorboat_C::StaticClass()->DefaultObject);

	return Default;
}

}


