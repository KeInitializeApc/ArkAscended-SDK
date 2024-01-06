#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Red.PrimalItemDye_Red_C
// (None)

class UClass* UPrimalItemDye_Red_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Red_C");

	return Clss;
}


// PrimalItemDye_Red_C PrimalItemDye_Red.Default__PrimalItemDye_Red_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Red_C* UPrimalItemDye_Red_C::GetDefaultObj()
{
	static class UPrimalItemDye_Red_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Red_C*>(UPrimalItemDye_Red_C::StaticClass()->DefaultObject);

	return Default;
}

}


