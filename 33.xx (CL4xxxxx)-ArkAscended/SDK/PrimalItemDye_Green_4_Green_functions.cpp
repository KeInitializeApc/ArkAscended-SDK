#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Green_4_Green.PrimalItemDye_Green_4_Green_C
// (None)

class UClass* UPrimalItemDye_Green_4_Green_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Green_4_Green_C");

	return Clss;
}


// PrimalItemDye_Green_4_Green_C PrimalItemDye_Green_4_Green.Default__PrimalItemDye_Green_4_Green_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Green_4_Green_C* UPrimalItemDye_Green_4_Green_C::GetDefaultObj()
{
	static class UPrimalItemDye_Green_4_Green_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Green_4_Green_C*>(UPrimalItemDye_Green_4_Green_C::StaticClass()->DefaultObject);

	return Default;
}

}


