#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Azure_2_Prussian.PrimalItemDye_Azure_2_Prussian_C
// (None)

class UClass* UPrimalItemDye_Azure_2_Prussian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Azure_2_Prussian_C");

	return Clss;
}


// PrimalItemDye_Azure_2_Prussian_C PrimalItemDye_Azure_2_Prussian.Default__PrimalItemDye_Azure_2_Prussian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Azure_2_Prussian_C* UPrimalItemDye_Azure_2_Prussian_C::GetDefaultObj()
{
	static class UPrimalItemDye_Azure_2_Prussian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Azure_2_Prussian_C*>(UPrimalItemDye_Azure_2_Prussian_C::StaticClass()->DefaultObject);

	return Default;
}

}


