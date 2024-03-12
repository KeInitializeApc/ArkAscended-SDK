#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ArthroSaddle.PrimalItemArmor_ArthroSaddle_C
// (None)

class UClass* UPrimalItemArmor_ArthroSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ArthroSaddle_C");

	return Clss;
}


// PrimalItemArmor_ArthroSaddle_C PrimalItemArmor_ArthroSaddle.Default__PrimalItemArmor_ArthroSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ArthroSaddle_C* UPrimalItemArmor_ArthroSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ArthroSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ArthroSaddle_C*>(UPrimalItemArmor_ArthroSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


