#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_2_Olive.PrimalItemDye_Yellow_2_Olive_C
// (None)

class UClass* UPrimalItemDye_Yellow_2_Olive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_2_Olive_C");

	return Clss;
}


// PrimalItemDye_Yellow_2_Olive_C PrimalItemDye_Yellow_2_Olive.Default__PrimalItemDye_Yellow_2_Olive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_2_Olive_C* UPrimalItemDye_Yellow_2_Olive_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_2_Olive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_2_Olive_C*>(UPrimalItemDye_Yellow_2_Olive_C::StaticClass()->DefaultObject);

	return Default;
}

}


