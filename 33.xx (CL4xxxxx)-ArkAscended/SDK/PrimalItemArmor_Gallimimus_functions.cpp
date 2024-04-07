#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_Gallimimus.PrimalItemArmor_Gallimimus_C
// (None)

class UClass* UPrimalItemArmor_Gallimimus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_Gallimimus_C");

	return Clss;
}


// PrimalItemArmor_Gallimimus_C PrimalItemArmor_Gallimimus.Default__PrimalItemArmor_Gallimimus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_Gallimimus_C* UPrimalItemArmor_Gallimimus_C::GetDefaultObj()
{
	static class UPrimalItemArmor_Gallimimus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_Gallimimus_C*>(UPrimalItemArmor_Gallimimus_C::StaticClass()->DefaultObject);

	return Default;
}

}


