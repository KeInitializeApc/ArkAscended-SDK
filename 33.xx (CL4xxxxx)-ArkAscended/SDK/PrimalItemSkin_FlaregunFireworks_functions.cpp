#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_FlaregunFireworks.PrimalItemSkin_FlaregunFireworks_C
// (None)

class UClass* UPrimalItemSkin_FlaregunFireworks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_FlaregunFireworks_C");

	return Clss;
}


// PrimalItemSkin_FlaregunFireworks_C PrimalItemSkin_FlaregunFireworks.Default__PrimalItemSkin_FlaregunFireworks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_FlaregunFireworks_C* UPrimalItemSkin_FlaregunFireworks_C::GetDefaultObj()
{
	static class UPrimalItemSkin_FlaregunFireworks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_FlaregunFireworks_C*>(UPrimalItemSkin_FlaregunFireworks_C::StaticClass()->DefaultObject);

	return Default;
}

}


