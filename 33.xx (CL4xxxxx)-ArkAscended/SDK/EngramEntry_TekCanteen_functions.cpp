#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TekCanteen.EngramEntry_TekCanteen_C
// (None)

class UClass* UEngramEntry_TekCanteen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TekCanteen_C");

	return Clss;
}


// EngramEntry_TekCanteen_C EngramEntry_TekCanteen.Default__EngramEntry_TekCanteen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TekCanteen_C* UEngramEntry_TekCanteen_C::GetDefaultObj()
{
	static class UEngramEntry_TekCanteen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TekCanteen_C*>(UEngramEntry_TekCanteen_C::StaticClass()->DefaultObject);

	return Default;
}

}


