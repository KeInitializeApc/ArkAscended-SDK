#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Violet_8_Royalty.PrimalItemDye_Violet_8_Royalty_C
// (None)

class UClass* UPrimalItemDye_Violet_8_Royalty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Violet_8_Royalty_C");

	return Clss;
}


// PrimalItemDye_Violet_8_Royalty_C PrimalItemDye_Violet_8_Royalty.Default__PrimalItemDye_Violet_8_Royalty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Violet_8_Royalty_C* UPrimalItemDye_Violet_8_Royalty_C::GetDefaultObj()
{
	static class UPrimalItemDye_Violet_8_Royalty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Violet_8_Royalty_C*>(UPrimalItemDye_Violet_8_Royalty_C::StaticClass()->DefaultObject);

	return Default;
}

}


