#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Greyscale_5_Slate.PrimalItemDye_Greyscale_5_Slate_C
// (None)

class UClass* UPrimalItemDye_Greyscale_5_Slate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Greyscale_5_Slate_C");

	return Clss;
}


// PrimalItemDye_Greyscale_5_Slate_C PrimalItemDye_Greyscale_5_Slate.Default__PrimalItemDye_Greyscale_5_Slate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Greyscale_5_Slate_C* UPrimalItemDye_Greyscale_5_Slate_C::GetDefaultObj()
{
	static class UPrimalItemDye_Greyscale_5_Slate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Greyscale_5_Slate_C*>(UPrimalItemDye_Greyscale_5_Slate_C::StaticClass()->DefaultObject);

	return Default;
}

}


