#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StorageBox_Huge.PrimalItemStructure_StorageBox_Huge_C
// (None)

class UClass* UPrimalItemStructure_StorageBox_Huge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StorageBox_Huge_C");

	return Clss;
}


// PrimalItemStructure_StorageBox_Huge_C PrimalItemStructure_StorageBox_Huge.Default__PrimalItemStructure_StorageBox_Huge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StorageBox_Huge_C* UPrimalItemStructure_StorageBox_Huge_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StorageBox_Huge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StorageBox_Huge_C*>(UPrimalItemStructure_StorageBox_Huge_C::StaticClass()->DefaultObject);

	return Default;
}

}


