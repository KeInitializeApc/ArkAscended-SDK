#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Forge.EngramEntry_Forge_C
// (None)

class UClass* UEngramEntry_Forge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Forge_C");

	return Clss;
}


// EngramEntry_Forge_C EngramEntry_Forge.Default__EngramEntry_Forge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Forge_C* UEngramEntry_Forge_C::GetDefaultObj()
{
	static class UEngramEntry_Forge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Forge_C*>(UEngramEntry_Forge_C::StaticClass()->DefaultObject);

	return Default;
}

}


