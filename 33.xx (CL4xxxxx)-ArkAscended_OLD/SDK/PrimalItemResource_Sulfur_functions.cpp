#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Sulfur.PrimalItemResource_Sulfur_C
// (None)

class UClass* UPrimalItemResource_Sulfur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Sulfur_C");

	return Clss;
}


// PrimalItemResource_Sulfur_C PrimalItemResource_Sulfur.Default__PrimalItemResource_Sulfur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Sulfur_C* UPrimalItemResource_Sulfur_C::GetDefaultObj()
{
	static class UPrimalItemResource_Sulfur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Sulfur_C*>(UPrimalItemResource_Sulfur_C::StaticClass()->DefaultObject);

	return Default;
}

}


