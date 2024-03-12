#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_3_Citron.PrimalItemDye_Yellow_3_Citron_C
// (None)

class UClass* UPrimalItemDye_Yellow_3_Citron_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_3_Citron_C");

	return Clss;
}


// PrimalItemDye_Yellow_3_Citron_C PrimalItemDye_Yellow_3_Citron.Default__PrimalItemDye_Yellow_3_Citron_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_3_Citron_C* UPrimalItemDye_Yellow_3_Citron_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_3_Citron_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_3_Citron_C*>(UPrimalItemDye_Yellow_3_Citron_C::StaticClass()->DefaultObject);

	return Default;
}

}


