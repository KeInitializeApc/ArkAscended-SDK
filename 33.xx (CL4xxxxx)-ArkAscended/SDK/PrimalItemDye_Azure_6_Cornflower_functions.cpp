#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Azure_6_Cornflower.PrimalItemDye_Azure_6_Cornflower_C
// (None)

class UClass* UPrimalItemDye_Azure_6_Cornflower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Azure_6_Cornflower_C");

	return Clss;
}


// PrimalItemDye_Azure_6_Cornflower_C PrimalItemDye_Azure_6_Cornflower.Default__PrimalItemDye_Azure_6_Cornflower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Azure_6_Cornflower_C* UPrimalItemDye_Azure_6_Cornflower_C::GetDefaultObj()
{
	static class UPrimalItemDye_Azure_6_Cornflower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Azure_6_Cornflower_C*>(UPrimalItemDye_Azure_6_Cornflower_C::StaticClass()->DefaultObject);

	return Default;
}

}


