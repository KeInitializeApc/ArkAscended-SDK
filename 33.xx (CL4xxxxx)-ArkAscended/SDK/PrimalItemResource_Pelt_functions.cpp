#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Pelt.PrimalItemResource_Pelt_C
// (None)

class UClass* UPrimalItemResource_Pelt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Pelt_C");

	return Clss;
}


// PrimalItemResource_Pelt_C PrimalItemResource_Pelt.Default__PrimalItemResource_Pelt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Pelt_C* UPrimalItemResource_Pelt_C::GetDefaultObj()
{
	static class UPrimalItemResource_Pelt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Pelt_C*>(UPrimalItemResource_Pelt_C::StaticClass()->DefaultObject);

	return Default;
}

}


