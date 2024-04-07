#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Violet_2_Eminence.PrimalItemDye_Violet_2_Eminence_C
// (None)

class UClass* UPrimalItemDye_Violet_2_Eminence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Violet_2_Eminence_C");

	return Clss;
}


// PrimalItemDye_Violet_2_Eminence_C PrimalItemDye_Violet_2_Eminence.Default__PrimalItemDye_Violet_2_Eminence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Violet_2_Eminence_C* UPrimalItemDye_Violet_2_Eminence_C::GetDefaultObj()
{
	static class UPrimalItemDye_Violet_2_Eminence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Violet_2_Eminence_C*>(UPrimalItemDye_Violet_2_Eminence_C::StaticClass()->DefaultObject);

	return Default;
}

}


