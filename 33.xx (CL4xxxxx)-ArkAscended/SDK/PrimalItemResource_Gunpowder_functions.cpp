#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Gunpowder.PrimalItemResource_Gunpowder_C
// (None)

class UClass* UPrimalItemResource_Gunpowder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Gunpowder_C");

	return Clss;
}


// PrimalItemResource_Gunpowder_C PrimalItemResource_Gunpowder.Default__PrimalItemResource_Gunpowder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Gunpowder_C* UPrimalItemResource_Gunpowder_C::GetDefaultObj()
{
	static class UPrimalItemResource_Gunpowder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Gunpowder_C*>(UPrimalItemResource_Gunpowder_C::StaticClass()->DefaultObject);

	return Default;
}

}


