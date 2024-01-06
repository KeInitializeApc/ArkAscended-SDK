#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NS_DinoFootprint_BP.NS_DinoFootprint_BP_C
// (SceneComponent, PrimitiveComponent)

class UClass* UNS_DinoFootprint_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NS_DinoFootprint_BP_C");

	return Clss;
}


// NS_DinoFootprint_BP_C NS_DinoFootprint_BP.Default__NS_DinoFootprint_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNS_DinoFootprint_BP_C* UNS_DinoFootprint_BP_C::GetDefaultObj()
{
	static class UNS_DinoFootprint_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNS_DinoFootprint_BP_C*>(UNS_DinoFootprint_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


