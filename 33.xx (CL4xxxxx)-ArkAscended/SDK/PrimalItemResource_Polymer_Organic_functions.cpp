#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Polymer_Organic.PrimalItemResource_Polymer_Organic_C
// (None)

class UClass* UPrimalItemResource_Polymer_Organic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Polymer_Organic_C");

	return Clss;
}


// PrimalItemResource_Polymer_Organic_C PrimalItemResource_Polymer_Organic.Default__PrimalItemResource_Polymer_Organic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Polymer_Organic_C* UPrimalItemResource_Polymer_Organic_C::GetDefaultObj()
{
	static class UPrimalItemResource_Polymer_Organic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Polymer_Organic_C*>(UPrimalItemResource_Polymer_Organic_C::StaticClass()->DefaultObject);

	return Default;
}

}


