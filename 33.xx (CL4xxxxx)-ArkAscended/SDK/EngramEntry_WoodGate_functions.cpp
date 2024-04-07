#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodGate.EngramEntry_WoodGate_C
// (None)

class UClass* UEngramEntry_WoodGate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodGate_C");

	return Clss;
}


// EngramEntry_WoodGate_C EngramEntry_WoodGate.Default__EngramEntry_WoodGate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodGate_C* UEngramEntry_WoodGate_C::GetDefaultObj()
{
	static class UEngramEntry_WoodGate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodGate_C*>(UEngramEntry_WoodGate_C::StaticClass()->DefaultObject);

	return Default;
}

}


