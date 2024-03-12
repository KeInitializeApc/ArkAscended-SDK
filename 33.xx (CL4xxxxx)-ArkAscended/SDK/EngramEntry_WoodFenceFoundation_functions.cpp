#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WoodFenceFoundation.EngramEntry_WoodFenceFoundation_C
// (None)

class UClass* UEngramEntry_WoodFenceFoundation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WoodFenceFoundation_C");

	return Clss;
}


// EngramEntry_WoodFenceFoundation_C EngramEntry_WoodFenceFoundation.Default__EngramEntry_WoodFenceFoundation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WoodFenceFoundation_C* UEngramEntry_WoodFenceFoundation_C::GetDefaultObj()
{
	static class UEngramEntry_WoodFenceFoundation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WoodFenceFoundation_C*>(UEngramEntry_WoodFenceFoundation_C::StaticClass()->DefaultObject);

	return Default;
}

}


