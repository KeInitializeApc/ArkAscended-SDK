#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Glider.EngramEntry_Glider_C
// (None)

class UClass* UEngramEntry_Glider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Glider_C");

	return Clss;
}


// EngramEntry_Glider_C EngramEntry_Glider.Default__EngramEntry_Glider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Glider_C* UEngramEntry_Glider_C::GetDefaultObj()
{
	static class UEngramEntry_Glider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Glider_C*>(UEngramEntry_Glider_C::StaticClass()->DefaultObject);

	return Default;
}

}


