#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WaterTankMetal.EngramEntry_WaterTankMetal_C
// (None)

class UClass* UEngramEntry_WaterTankMetal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WaterTankMetal_C");

	return Clss;
}


// EngramEntry_WaterTankMetal_C EngramEntry_WaterTankMetal.Default__EngramEntry_WaterTankMetal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WaterTankMetal_C* UEngramEntry_WaterTankMetal_C::GetDefaultObj()
{
	static class UEngramEntry_WaterTankMetal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WaterTankMetal_C*>(UEngramEntry_WaterTankMetal_C::StaticClass()->DefaultObject);

	return Default;
}

}


