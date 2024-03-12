#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Yellow_7_Khaki.PrimalItemDye_Yellow_7_Khaki_C
// (None)

class UClass* UPrimalItemDye_Yellow_7_Khaki_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Yellow_7_Khaki_C");

	return Clss;
}


// PrimalItemDye_Yellow_7_Khaki_C PrimalItemDye_Yellow_7_Khaki.Default__PrimalItemDye_Yellow_7_Khaki_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Yellow_7_Khaki_C* UPrimalItemDye_Yellow_7_Khaki_C::GetDefaultObj()
{
	static class UPrimalItemDye_Yellow_7_Khaki_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Yellow_7_Khaki_C*>(UPrimalItemDye_Yellow_7_Khaki_C::StaticClass()->DefaultObject);

	return Default;
}

}


