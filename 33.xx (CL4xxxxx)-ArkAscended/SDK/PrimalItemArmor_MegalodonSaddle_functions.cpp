#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MegalodonSaddle.PrimalItemArmor_MegalodonSaddle_C
// (None)

class UClass* UPrimalItemArmor_MegalodonSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MegalodonSaddle_C");

	return Clss;
}


// PrimalItemArmor_MegalodonSaddle_C PrimalItemArmor_MegalodonSaddle.Default__PrimalItemArmor_MegalodonSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MegalodonSaddle_C* UPrimalItemArmor_MegalodonSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MegalodonSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MegalodonSaddle_C*>(UPrimalItemArmor_MegalodonSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


