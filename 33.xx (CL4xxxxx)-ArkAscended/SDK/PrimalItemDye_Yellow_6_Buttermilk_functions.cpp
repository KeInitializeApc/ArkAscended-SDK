#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_6_Buttermilk.PrimalItemDye_Yellow_6_Buttermilk_C
// (None)

class UClass* UPrimalItemDye_Yellow_6_Buttermilk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_6_Buttermilk_C");

	return Clss;
}


// PrimalItemDye_Yellow_6_Buttermilk_C PrimalItemDye_Yellow_6_Buttermilk.Default__PrimalItemDye_Yellow_6_Buttermilk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_6_Buttermilk_C* UPrimalItemDye_Yellow_6_Buttermilk_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_6_Buttermilk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_6_Buttermilk_C*>(UPrimalItemDye_Yellow_6_Buttermilk_C::StaticClass()->DefaultObject);

	return Default;
}

}


