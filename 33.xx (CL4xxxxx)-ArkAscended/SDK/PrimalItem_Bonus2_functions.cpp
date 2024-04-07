#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Bonus2.PrimalItem_Bonus2_C
// (None)

class UClass* UPrimalItem_Bonus2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Bonus2_C");

	return Clss;
}


// PrimalItem_Bonus2_C PrimalItem_Bonus2.Default__PrimalItem_Bonus2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Bonus2_C* UPrimalItem_Bonus2_C::GetDefaultObj()
{
	static class UPrimalItem_Bonus2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Bonus2_C*>(UPrimalItem_Bonus2_C::StaticClass()->DefaultObject);

	return Default;
}

}


