#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_WaterTank.EngramEntry_WaterTank_C
// (None)

class UClass* UEngramEntry_WaterTank_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_WaterTank_C");

	return Clss;
}


// EngramEntry_WaterTank_C EngramEntry_WaterTank.Default__EngramEntry_WaterTank_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_WaterTank_C* UEngramEntry_WaterTank_C::GetDefaultObj()
{
	static class UEngramEntry_WaterTank_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_WaterTank_C*>(UEngramEntry_WaterTank_C::StaticClass()->DefaultObject);

	return Default;
}

}


