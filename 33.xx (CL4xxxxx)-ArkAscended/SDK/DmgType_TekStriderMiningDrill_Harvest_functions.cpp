#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_TekStriderMiningDrill_Harvest.DmgType_TekStriderMiningDrill_Harvest_C
// (None)

class UClass* UDmgType_TekStriderMiningDrill_Harvest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_TekStriderMiningDrill_Harvest_C");

	return Clss;
}


// DmgType_TekStriderMiningDrill_Harvest_C DmgType_TekStriderMiningDrill_Harvest.Default__DmgType_TekStriderMiningDrill_Harvest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_TekStriderMiningDrill_Harvest_C* UDmgType_TekStriderMiningDrill_Harvest_C::GetDefaultObj()
{
	static class UDmgType_TekStriderMiningDrill_Harvest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_TekStriderMiningDrill_Harvest_C*>(UDmgType_TekStriderMiningDrill_Harvest_C::StaticClass()->DefaultObject);

	return Default;
}

}


