#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gas.PrimalItemResource_Gas_C
// (None)

class UClass* UPrimalItemResource_Gas_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gas_C");

	return Clss;
}


// PrimalItemResource_Gas_C PrimalItemResource_Gas.Default__PrimalItemResource_Gas_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gas_C* UPrimalItemResource_Gas_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gas_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gas_C*>(UPrimalItemResource_Gas_C::StaticClass()->DefaultObject);

	return Default;
}

}


