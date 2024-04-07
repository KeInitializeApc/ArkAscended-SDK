#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekClaws.EngramEntry_TekClaws_C
// (None)

class UClass* UEngramEntry_TekClaws_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekClaws_C");

	return Clss;
}


// EngramEntry_TekClaws_C EngramEntry_TekClaws.Default__EngramEntry_TekClaws_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekClaws_C* UEngramEntry_TekClaws_C::GetDefaultObj()
{
	static class UEngramEntry_TekClaws_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekClaws_C*>(UEngramEntry_TekClaws_C::StaticClass()->DefaultObject);

	return Default;
}

}


