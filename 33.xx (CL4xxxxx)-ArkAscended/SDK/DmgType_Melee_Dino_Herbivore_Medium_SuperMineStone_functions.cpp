#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone.DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C
// (None)

class UClass* UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C");

	return Clss;
}


// DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone.Default__DmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C* UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C::GetDefaultObj()
{
	static class UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C*>(UDmgType_Melee_Dino_Herbivore_Medium_SuperMineStone_C::StaticClass()->DefaultObject);

	return Default;
}

}


