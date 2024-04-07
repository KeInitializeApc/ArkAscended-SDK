#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_MiningDrill_Harvest.DmgType_MiningDrill_Harvest_C
// (None)

class UClass* UDmgType_MiningDrill_Harvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_MiningDrill_Harvest_C");

	return Clss;
}


// DmgType_MiningDrill_Harvest_C DmgType_MiningDrill_Harvest.Default__DmgType_MiningDrill_Harvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_MiningDrill_Harvest_C* UDmgType_MiningDrill_Harvest_C::GetDefaultObj()
{
	static class UDmgType_MiningDrill_Harvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_MiningDrill_Harvest_C*>(UDmgType_MiningDrill_Harvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


