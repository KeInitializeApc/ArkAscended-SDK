#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Green_1_Nori.PrimalItemDye_Green_1_Nori_C
// (None)

class UClass* UPrimalItemDye_Green_1_Nori_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Green_1_Nori_C");

	return Clss;
}


// PrimalItemDye_Green_1_Nori_C PrimalItemDye_Green_1_Nori.Default__PrimalItemDye_Green_1_Nori_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Green_1_Nori_C* UPrimalItemDye_Green_1_Nori_C::GetDefaultObj()
{
	static class UPrimalItemDye_Green_1_Nori_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Green_1_Nori_C*>(UPrimalItemDye_Green_1_Nori_C::StaticClass()->DefaultObject);

	return Default;
}

}


