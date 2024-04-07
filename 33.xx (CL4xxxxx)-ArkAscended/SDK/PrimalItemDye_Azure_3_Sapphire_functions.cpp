#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Azure_3_Sapphire.PrimalItemDye_Azure_3_Sapphire_C
// (None)

class UClass* UPrimalItemDye_Azure_3_Sapphire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Azure_3_Sapphire_C");

	return Clss;
}


// PrimalItemDye_Azure_3_Sapphire_C PrimalItemDye_Azure_3_Sapphire.Default__PrimalItemDye_Azure_3_Sapphire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Azure_3_Sapphire_C* UPrimalItemDye_Azure_3_Sapphire_C::GetDefaultObj()
{
	static class UPrimalItemDye_Azure_3_Sapphire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Azure_3_Sapphire_C*>(UPrimalItemDye_Azure_3_Sapphire_C::StaticClass()->DefaultObject);

	return Default;
}

}


