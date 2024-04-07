#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Sparkpowder.EngramEntry_Sparkpowder_C
// (None)

class UClass* UEngramEntry_Sparkpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Sparkpowder_C");

	return Clss;
}


// EngramEntry_Sparkpowder_C EngramEntry_Sparkpowder.Default__EngramEntry_Sparkpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Sparkpowder_C* UEngramEntry_Sparkpowder_C::GetDefaultObj()
{
	static class UEngramEntry_Sparkpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Sparkpowder_C*>(UEngramEntry_Sparkpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


