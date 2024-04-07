#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemDye_Magenta_3_Purple.PrimalItemDye_Magenta_3_Purple_C
// (None)

class UClass* UPrimalItemDye_Magenta_3_Purple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemDye_Magenta_3_Purple_C");

	return Clss;
}


// PrimalItemDye_Magenta_3_Purple_C PrimalItemDye_Magenta_3_Purple.Default__PrimalItemDye_Magenta_3_Purple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemDye_Magenta_3_Purple_C* UPrimalItemDye_Magenta_3_Purple_C::GetDefaultObj()
{
	static class UPrimalItemDye_Magenta_3_Purple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemDye_Magenta_3_Purple_C*>(UPrimalItemDye_Magenta_3_Purple_C::StaticClass()->DefaultObject);

	return Default;
}

}


