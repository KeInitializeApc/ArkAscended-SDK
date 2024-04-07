#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ElectricStun_Impacts.ElectricStun_Impacts_C
// (Actor)

class UClass* AElectricStun_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ElectricStun_Impacts_C");

	return Clss;
}


// ElectricStun_Impacts_C ElectricStun_Impacts.Default__ElectricStun_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AElectricStun_Impacts_C* AElectricStun_Impacts_C::GetDefaultObj()
{
	static class AElectricStun_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AElectricStun_Impacts_C*>(AElectricStun_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


