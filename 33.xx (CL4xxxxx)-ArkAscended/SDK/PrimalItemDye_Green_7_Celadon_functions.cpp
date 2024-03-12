#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Green_7_Celadon.PrimalItemDye_Green_7_Celadon_C
// (None)

class UClass* UPrimalItemDye_Green_7_Celadon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Green_7_Celadon_C");

	return Clss;
}


// PrimalItemDye_Green_7_Celadon_C PrimalItemDye_Green_7_Celadon.Default__PrimalItemDye_Green_7_Celadon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Green_7_Celadon_C* UPrimalItemDye_Green_7_Celadon_C::GetDefaultObj()
{
	static class UPrimalItemDye_Green_7_Celadon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Green_7_Celadon_C*>(UPrimalItemDye_Green_7_Celadon_C::StaticClass()->DefaultObject);

	return Default;
}

}


