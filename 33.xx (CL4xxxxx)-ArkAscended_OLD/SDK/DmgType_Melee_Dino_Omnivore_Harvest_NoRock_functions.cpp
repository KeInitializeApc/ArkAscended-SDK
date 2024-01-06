#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Dino_Omnivore_Harvest_NoRock.DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C
// (None)

class UClass* UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C");

	return Clss;
}


// DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C DmgType_Melee_Dino_Omnivore_Harvest_NoRock.Default__DmgType_Melee_Dino_Omnivore_Harvest_NoRock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C* UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C::GetDefaultObj()
{
	static class UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C*>(UDmgType_Melee_Dino_Omnivore_Harvest_NoRock_C::StaticClass()->DefaultObject);

	return Default;
}

}


