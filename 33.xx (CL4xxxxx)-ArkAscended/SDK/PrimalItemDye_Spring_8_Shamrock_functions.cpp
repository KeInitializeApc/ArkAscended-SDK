#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Spring_8_Shamrock.PrimalItemDye_Spring_8_Shamrock_C
// (None)

class UClass* UPrimalItemDye_Spring_8_Shamrock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Spring_8_Shamrock_C");

	return Clss;
}


// PrimalItemDye_Spring_8_Shamrock_C PrimalItemDye_Spring_8_Shamrock.Default__PrimalItemDye_Spring_8_Shamrock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Spring_8_Shamrock_C* UPrimalItemDye_Spring_8_Shamrock_C::GetDefaultObj()
{
	static class UPrimalItemDye_Spring_8_Shamrock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Spring_8_Shamrock_C*>(UPrimalItemDye_Spring_8_Shamrock_C::StaticClass()->DefaultObject);

	return Default;
}

}


