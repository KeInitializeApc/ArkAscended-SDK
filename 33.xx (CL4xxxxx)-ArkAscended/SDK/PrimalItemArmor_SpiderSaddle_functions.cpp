#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SpiderSaddle.PrimalItemArmor_SpiderSaddle_C
// (None)

class UClass* UPrimalItemArmor_SpiderSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SpiderSaddle_C");

	return Clss;
}


// PrimalItemArmor_SpiderSaddle_C PrimalItemArmor_SpiderSaddle.Default__PrimalItemArmor_SpiderSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SpiderSaddle_C* UPrimalItemArmor_SpiderSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SpiderSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SpiderSaddle_C*>(UPrimalItemArmor_SpiderSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


