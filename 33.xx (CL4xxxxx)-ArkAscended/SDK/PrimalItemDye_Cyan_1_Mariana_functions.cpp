#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Cyan_1_Mariana.PrimalItemDye_Cyan_1_Mariana_C
// (None)

class UClass* UPrimalItemDye_Cyan_1_Mariana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Cyan_1_Mariana_C");

	return Clss;
}


// PrimalItemDye_Cyan_1_Mariana_C PrimalItemDye_Cyan_1_Mariana.Default__PrimalItemDye_Cyan_1_Mariana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Cyan_1_Mariana_C* UPrimalItemDye_Cyan_1_Mariana_C::GetDefaultObj()
{
	static class UPrimalItemDye_Cyan_1_Mariana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Cyan_1_Mariana_C*>(UPrimalItemDye_Cyan_1_Mariana_C::StaticClass()->DefaultObject);

	return Default;
}

}


