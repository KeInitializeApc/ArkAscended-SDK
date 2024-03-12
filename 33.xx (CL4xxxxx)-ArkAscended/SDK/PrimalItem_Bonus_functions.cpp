#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Bonus.PrimalItem_Bonus_C
// (None)

class UClass* UPrimalItem_Bonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Bonus_C");

	return Clss;
}


// PrimalItem_Bonus_C PrimalItem_Bonus.Default__PrimalItem_Bonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Bonus_C* UPrimalItem_Bonus_C::GetDefaultObj()
{
	static class UPrimalItem_Bonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Bonus_C*>(UPrimalItem_Bonus_C::StaticClass()->DefaultObject);

	return Default;
}

}


