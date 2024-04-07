#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Brown_2_Bark.PrimalItemDye_Brown_2_Bark_C
// (None)

class UClass* UPrimalItemDye_Brown_2_Bark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Brown_2_Bark_C");

	return Clss;
}


// PrimalItemDye_Brown_2_Bark_C PrimalItemDye_Brown_2_Bark.Default__PrimalItemDye_Brown_2_Bark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Brown_2_Bark_C* UPrimalItemDye_Brown_2_Bark_C::GetDefaultObj()
{
	static class UPrimalItemDye_Brown_2_Bark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Brown_2_Bark_C*>(UPrimalItemDye_Brown_2_Bark_C::StaticClass()->DefaultObject);

	return Default;
}

}


