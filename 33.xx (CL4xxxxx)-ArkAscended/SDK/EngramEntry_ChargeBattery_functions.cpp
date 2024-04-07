#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_ChargeBattery.EngramEntry_ChargeBattery_C
// (None)

class UClass* UEngramEntry_ChargeBattery_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_ChargeBattery_C");

	return Clss;
}


// EngramEntry_ChargeBattery_C EngramEntry_ChargeBattery.Default__EngramEntry_ChargeBattery_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_ChargeBattery_C* UEngramEntry_ChargeBattery_C::GetDefaultObj()
{
	static class UEngramEntry_ChargeBattery_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_ChargeBattery_C*>(UEngramEntry_ChargeBattery_C::StaticClass()->DefaultObject);

	return Default;
}

}


