#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemAmmo_Zipline.PrimalItemAmmo_Zipline_C
// (None)

class UClass* UPrimalItemAmmo_Zipline_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemAmmo_Zipline_C");

	return Clss;
}


// PrimalItemAmmo_Zipline_C PrimalItemAmmo_Zipline.Default__PrimalItemAmmo_Zipline_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemAmmo_Zipline_C* UPrimalItemAmmo_Zipline_C::GetDefaultObj()
{
	static class UPrimalItemAmmo_Zipline_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemAmmo_Zipline_C*>(UPrimalItemAmmo_Zipline_C::StaticClass()->DefaultObject);

	return Default;
}

}


