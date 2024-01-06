#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Dino_Herbivore_Medium.DmgType_Melee_Dino_Herbivore_Medium_C
// (None)

class UClass* UDmgType_Melee_Dino_Herbivore_Medium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Dino_Herbivore_Medium_C");

	return Clss;
}


// DmgType_Melee_Dino_Herbivore_Medium_C DmgType_Melee_Dino_Herbivore_Medium.Default__DmgType_Melee_Dino_Herbivore_Medium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Dino_Herbivore_Medium_C* UDmgType_Melee_Dino_Herbivore_Medium_C::GetDefaultObj()
{
	static class UDmgType_Melee_Dino_Herbivore_Medium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Dino_Herbivore_Medium_C*>(UDmgType_Melee_Dino_Herbivore_Medium_C::StaticClass()->DefaultObject);

	return Default;
}

}


