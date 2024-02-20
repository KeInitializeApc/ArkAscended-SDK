#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDinoCostume_Custom.PrimalItemDinoCostume_Custom_C
// (None)

class UClass* UPrimalItemDinoCostume_Custom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDinoCostume_Custom_C");

	return Clss;
}


// PrimalItemDinoCostume_Custom_C PrimalItemDinoCostume_Custom.Default__PrimalItemDinoCostume_Custom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDinoCostume_Custom_C* UPrimalItemDinoCostume_Custom_C::GetDefaultObj()
{
	static class UPrimalItemDinoCostume_Custom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDinoCostume_Custom_C*>(UPrimalItemDinoCostume_Custom_C::StaticClass()->DefaultObject);

	return Default;
}

}


