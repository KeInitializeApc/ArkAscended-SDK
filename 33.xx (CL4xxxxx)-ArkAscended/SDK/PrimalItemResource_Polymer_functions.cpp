#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Polymer.PrimalItemResource_Polymer_C
// (None)

class UClass* UPrimalItemResource_Polymer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Polymer_C");

	return Clss;
}


// PrimalItemResource_Polymer_C PrimalItemResource_Polymer.Default__PrimalItemResource_Polymer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Polymer_C* UPrimalItemResource_Polymer_C::GetDefaultObj()
{
	static class UPrimalItemResource_Polymer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Polymer_C*>(UPrimalItemResource_Polymer_C::StaticClass()->DefaultObject);

	return Default;
}

}


