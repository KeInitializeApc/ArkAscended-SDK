#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Weather_Settings.UDS_Weather_Settings_C
// (None)

class UClass* UUDS_Weather_Settings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Weather_Settings_C");

	return Clss;
}


// UDS_Weather_Settings_C UDS_Weather_Settings.Default__UDS_Weather_Settings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUDS_Weather_Settings_C* UUDS_Weather_Settings_C::GetDefaultObj()
{
	static class UUDS_Weather_Settings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUDS_Weather_Settings_C*>(UUDS_Weather_Settings_C::StaticClass()->DefaultObject);

	return Default;
}

}


