#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalGameSettingsData_Base.PrimalGameSettingsData_Base_C
// (None)

class UClass* UPrimalGameSettingsData_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalGameSettingsData_Base_C");

	return Clss;
}


// PrimalGameSettingsData_Base_C PrimalGameSettingsData_Base.Default__PrimalGameSettingsData_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalGameSettingsData_Base_C* UPrimalGameSettingsData_Base_C::GetDefaultObj()
{
	static class UPrimalGameSettingsData_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalGameSettingsData_Base_C*>(UPrimalGameSettingsData_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


