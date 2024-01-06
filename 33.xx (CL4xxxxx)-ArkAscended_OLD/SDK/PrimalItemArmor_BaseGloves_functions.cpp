#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_BaseGloves.PrimalItemArmor_BaseGloves_C
// (None)

class UClass* UPrimalItemArmor_BaseGloves_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_BaseGloves_C");

	return Clss;
}


// PrimalItemArmor_BaseGloves_C PrimalItemArmor_BaseGloves.Default__PrimalItemArmor_BaseGloves_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_BaseGloves_C* UPrimalItemArmor_BaseGloves_C::GetDefaultObj()
{
	static class UPrimalItemArmor_BaseGloves_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_BaseGloves_C*>(UPrimalItemArmor_BaseGloves_C::StaticClass()->DefaultObject);

	return Default;
}

}


