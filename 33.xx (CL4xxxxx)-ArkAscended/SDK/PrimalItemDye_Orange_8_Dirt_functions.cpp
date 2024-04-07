#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Orange_8_Dirt.PrimalItemDye_Orange_8_Dirt_C
// (None)

class UClass* UPrimalItemDye_Orange_8_Dirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Orange_8_Dirt_C");

	return Clss;
}


// PrimalItemDye_Orange_8_Dirt_C PrimalItemDye_Orange_8_Dirt.Default__PrimalItemDye_Orange_8_Dirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Orange_8_Dirt_C* UPrimalItemDye_Orange_8_Dirt_C::GetDefaultObj()
{
	static class UPrimalItemDye_Orange_8_Dirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Orange_8_Dirt_C*>(UPrimalItemDye_Orange_8_Dirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


