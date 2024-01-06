#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_UseHarvest.DmgType_UseHarvest_C
// (None)

class UClass* UDmgType_UseHarvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_UseHarvest_C");

	return Clss;
}


// DmgType_UseHarvest_C DmgType_UseHarvest.Default__DmgType_UseHarvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_UseHarvest_C* UDmgType_UseHarvest_C::GetDefaultObj()
{
	static class UDmgType_UseHarvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_UseHarvest_C*>(UDmgType_UseHarvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


