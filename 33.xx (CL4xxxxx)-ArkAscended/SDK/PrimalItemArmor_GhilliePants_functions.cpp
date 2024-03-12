#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_GhilliePants.PrimalItemArmor_GhilliePants_C
// (None)

class UClass* UPrimalItemArmor_GhilliePants_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_GhilliePants_C");

	return Clss;
}


// PrimalItemArmor_GhilliePants_C PrimalItemArmor_GhilliePants.Default__PrimalItemArmor_GhilliePants_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_GhilliePants_C* UPrimalItemArmor_GhilliePants_C::GetDefaultObj()
{
	static class UPrimalItemArmor_GhilliePants_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_GhilliePants_C*>(UPrimalItemArmor_GhilliePants_C::StaticClass()->DefaultObject);

	return Default;
}

}


