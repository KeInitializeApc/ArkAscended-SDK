#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_Glasses.PrimalItemSkin_Glasses_C
// (None)

class UClass* UPrimalItemSkin_Glasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_Glasses_C");

	return Clss;
}


// PrimalItemSkin_Glasses_C PrimalItemSkin_Glasses.Default__PrimalItemSkin_Glasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_Glasses_C* UPrimalItemSkin_Glasses_C::GetDefaultObj()
{
	static class UPrimalItemSkin_Glasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_Glasses_C*>(UPrimalItemSkin_Glasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


