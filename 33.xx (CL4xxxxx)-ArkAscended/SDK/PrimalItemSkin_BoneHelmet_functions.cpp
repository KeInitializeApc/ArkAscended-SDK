#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_BoneHelmet.PrimalItemSkin_BoneHelmet_C
// (None)

class UClass* UPrimalItemSkin_BoneHelmet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_BoneHelmet_C");

	return Clss;
}


// PrimalItemSkin_BoneHelmet_C PrimalItemSkin_BoneHelmet.Default__PrimalItemSkin_BoneHelmet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_BoneHelmet_C* UPrimalItemSkin_BoneHelmet_C::GetDefaultObj()
{
	static class UPrimalItemSkin_BoneHelmet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_BoneHelmet_C*>(UPrimalItemSkin_BoneHelmet_C::StaticClass()->DefaultObject);

	return Default;
}

}


