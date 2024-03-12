#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_CryoFridge.EngramEntry_CryoFridge_C
// (None)

class UClass* UEngramEntry_CryoFridge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_CryoFridge_C");

	return Clss;
}


// EngramEntry_CryoFridge_C EngramEntry_CryoFridge.Default__EngramEntry_CryoFridge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_CryoFridge_C* UEngramEntry_CryoFridge_C::GetDefaultObj()
{
	static class UEngramEntry_CryoFridge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_CryoFridge_C*>(UEngramEntry_CryoFridge_C::StaticClass()->DefaultObject);

	return Default;
}

}


