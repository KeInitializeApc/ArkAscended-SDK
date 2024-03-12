#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_SeaMine.PrimalItemStructure_SeaMine_C
// (None)

class UClass* UPrimalItemStructure_SeaMine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_SeaMine_C");

	return Clss;
}


// PrimalItemStructure_SeaMine_C PrimalItemStructure_SeaMine.Default__PrimalItemStructure_SeaMine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_SeaMine_C* UPrimalItemStructure_SeaMine_C::GetDefaultObj()
{
	static class UPrimalItemStructure_SeaMine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_SeaMine_C*>(UPrimalItemStructure_SeaMine_C::StaticClass()->DefaultObject);

	return Default;
}

}


