#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StorageBox_Balloon.PrimalItemStructure_StorageBox_Balloon_C
// (None)

class UClass* UPrimalItemStructure_StorageBox_Balloon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StorageBox_Balloon_C");

	return Clss;
}


// PrimalItemStructure_StorageBox_Balloon_C PrimalItemStructure_StorageBox_Balloon.Default__PrimalItemStructure_StorageBox_Balloon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StorageBox_Balloon_C* UPrimalItemStructure_StorageBox_Balloon_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StorageBox_Balloon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StorageBox_Balloon_C*>(UPrimalItemStructure_StorageBox_Balloon_C::StaticClass()->DefaultObject);

	return Default;
}

}


