#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalInventoryBP_StorageBox_Base.PrimalInventoryBP_StorageBox_Base_C
// (None)

class UClass* UPrimalInventoryBP_StorageBox_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalInventoryBP_StorageBox_Base_C");

	return Clss;
}


// PrimalInventoryBP_StorageBox_Base_C PrimalInventoryBP_StorageBox_Base.Default__PrimalInventoryBP_StorageBox_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalInventoryBP_StorageBox_Base_C* UPrimalInventoryBP_StorageBox_Base_C::GetDefaultObj()
{
	static class UPrimalInventoryBP_StorageBox_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalInventoryBP_StorageBox_Base_C*>(UPrimalInventoryBP_StorageBox_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


