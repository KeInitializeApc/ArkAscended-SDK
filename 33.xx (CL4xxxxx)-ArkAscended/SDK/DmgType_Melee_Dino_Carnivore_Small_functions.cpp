#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Melee_Dino_Carnivore_Small.DmgType_Melee_Dino_Carnivore_Small_C
// (None)

class UClass* UDmgType_Melee_Dino_Carnivore_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Melee_Dino_Carnivore_Small_C");

	return Clss;
}


// DmgType_Melee_Dino_Carnivore_Small_C DmgType_Melee_Dino_Carnivore_Small.Default__DmgType_Melee_Dino_Carnivore_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Melee_Dino_Carnivore_Small_C* UDmgType_Melee_Dino_Carnivore_Small_C::GetDefaultObj()
{
	static class UDmgType_Melee_Dino_Carnivore_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Melee_Dino_Carnivore_Small_C*>(UDmgType_Melee_Dino_Carnivore_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


