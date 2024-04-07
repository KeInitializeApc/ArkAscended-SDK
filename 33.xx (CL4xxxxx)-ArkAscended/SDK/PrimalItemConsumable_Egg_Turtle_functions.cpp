#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemConsumable_Egg_Turtle.PrimalItemConsumable_Egg_Turtle_C
// (None)

class UClass* UPrimalItemConsumable_Egg_Turtle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemConsumable_Egg_Turtle_C");

	return Clss;
}


// PrimalItemConsumable_Egg_Turtle_C PrimalItemConsumable_Egg_Turtle.Default__PrimalItemConsumable_Egg_Turtle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemConsumable_Egg_Turtle_C* UPrimalItemConsumable_Egg_Turtle_C::GetDefaultObj()
{
	static class UPrimalItemConsumable_Egg_Turtle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemConsumable_Egg_Turtle_C*>(UPrimalItemConsumable_Egg_Turtle_C::StaticClass()->DefaultObject);

	return Default;
}

}


