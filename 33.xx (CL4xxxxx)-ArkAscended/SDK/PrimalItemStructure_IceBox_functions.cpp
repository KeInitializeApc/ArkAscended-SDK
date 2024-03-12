#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_IceBox.PrimalItemStructure_IceBox_C
// (None)

class UClass* UPrimalItemStructure_IceBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_IceBox_C");

	return Clss;
}


// PrimalItemStructure_IceBox_C PrimalItemStructure_IceBox.Default__PrimalItemStructure_IceBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_IceBox_C* UPrimalItemStructure_IceBox_C::GetDefaultObj()
{
	static class UPrimalItemStructure_IceBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_IceBox_C*>(UPrimalItemStructure_IceBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


