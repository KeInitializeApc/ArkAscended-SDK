#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Green_6_Pistachio.PrimalItemDye_Green_6_Pistachio_C
// (None)

class UClass* UPrimalItemDye_Green_6_Pistachio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Green_6_Pistachio_C");

	return Clss;
}


// PrimalItemDye_Green_6_Pistachio_C PrimalItemDye_Green_6_Pistachio.Default__PrimalItemDye_Green_6_Pistachio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Green_6_Pistachio_C* UPrimalItemDye_Green_6_Pistachio_C::GetDefaultObj()
{
	static class UPrimalItemDye_Green_6_Pistachio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Green_6_Pistachio_C*>(UPrimalItemDye_Green_6_Pistachio_C::StaticClass()->DefaultObject);

	return Default;
}

}


