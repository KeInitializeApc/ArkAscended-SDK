#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C
// (None)

class UClass* UPrimalItemResource_Sparkpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Sparkpowder_C");

	return Clss;
}


// PrimalItemResource_Sparkpowder_C PrimalItemResource_Sparkpowder.Default__PrimalItemResource_Sparkpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Sparkpowder_C* UPrimalItemResource_Sparkpowder_C::GetDefaultObj()
{
	static class UPrimalItemResource_Sparkpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Sparkpowder_C*>(UPrimalItemResource_Sparkpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


