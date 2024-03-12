#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Violet_7_Mauve.PrimalItemDye_Violet_7_Mauve_C
// (None)

class UClass* UPrimalItemDye_Violet_7_Mauve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Violet_7_Mauve_C");

	return Clss;
}


// PrimalItemDye_Violet_7_Mauve_C PrimalItemDye_Violet_7_Mauve.Default__PrimalItemDye_Violet_7_Mauve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Violet_7_Mauve_C* UPrimalItemDye_Violet_7_Mauve_C::GetDefaultObj()
{
	static class UPrimalItemDye_Violet_7_Mauve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Violet_7_Mauve_C*>(UPrimalItemDye_Violet_7_Mauve_C::StaticClass()->DefaultObject);

	return Default;
}

}


