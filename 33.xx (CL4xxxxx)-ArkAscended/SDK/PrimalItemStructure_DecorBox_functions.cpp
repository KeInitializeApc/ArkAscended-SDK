#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_DecorBox.PrimalItemStructure_DecorBox_C
// (None)

class UClass* UPrimalItemStructure_DecorBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_DecorBox_C");

	return Clss;
}


// PrimalItemStructure_DecorBox_C PrimalItemStructure_DecorBox.Default__PrimalItemStructure_DecorBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_DecorBox_C* UPrimalItemStructure_DecorBox_C::GetDefaultObj()
{
	static class UPrimalItemStructure_DecorBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_DecorBox_C*>(UPrimalItemStructure_DecorBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


