#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ProcoptodonSaddle.PrimalItemArmor_ProcoptodonSaddle_C
// (None)

class UClass* UPrimalItemArmor_ProcoptodonSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ProcoptodonSaddle_C");

	return Clss;
}


// PrimalItemArmor_ProcoptodonSaddle_C PrimalItemArmor_ProcoptodonSaddle.Default__PrimalItemArmor_ProcoptodonSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ProcoptodonSaddle_C* UPrimalItemArmor_ProcoptodonSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ProcoptodonSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ProcoptodonSaddle_C*>(UPrimalItemArmor_ProcoptodonSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


