#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_4_Yellow.PrimalItemDye_Yellow_4_Yellow_C
// (None)

class UClass* UPrimalItemDye_Yellow_4_Yellow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_4_Yellow_C");

	return Clss;
}


// PrimalItemDye_Yellow_4_Yellow_C PrimalItemDye_Yellow_4_Yellow.Default__PrimalItemDye_Yellow_4_Yellow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_4_Yellow_C* UPrimalItemDye_Yellow_4_Yellow_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_4_Yellow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_4_Yellow_C*>(UPrimalItemDye_Yellow_4_Yellow_C::StaticClass()->DefaultObject);

	return Default;
}

}


