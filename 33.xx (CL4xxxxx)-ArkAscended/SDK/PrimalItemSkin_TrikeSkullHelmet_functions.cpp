#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_TrikeSkullHelmet.PrimalItemSkin_TrikeSkullHelmet_C
// (None)

class UClass* UPrimalItemSkin_TrikeSkullHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_TrikeSkullHelmet_C");

	return Clss;
}


// PrimalItemSkin_TrikeSkullHelmet_C PrimalItemSkin_TrikeSkullHelmet.Default__PrimalItemSkin_TrikeSkullHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_TrikeSkullHelmet_C* UPrimalItemSkin_TrikeSkullHelmet_C::GetDefaultObj()
{
	static class UPrimalItemSkin_TrikeSkullHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_TrikeSkullHelmet_C*>(UPrimalItemSkin_TrikeSkullHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


