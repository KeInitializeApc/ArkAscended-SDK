#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Milkglider_Saddle.EngramEntry_Milkglider_Saddle_C
// (None)

class UClass* UEngramEntry_Milkglider_Saddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Milkglider_Saddle_C");

	return Clss;
}


// EngramEntry_Milkglider_Saddle_C EngramEntry_Milkglider_Saddle.Default__EngramEntry_Milkglider_Saddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Milkglider_Saddle_C* UEngramEntry_Milkglider_Saddle_C::GetDefaultObj()
{
	static class UEngramEntry_Milkglider_Saddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Milkglider_Saddle_C*>(UEngramEntry_Milkglider_Saddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


