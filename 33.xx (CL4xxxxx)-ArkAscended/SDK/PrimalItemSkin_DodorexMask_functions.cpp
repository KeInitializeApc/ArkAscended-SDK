#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemSkin_DodorexMask.PrimalItemSkin_DodorexMask_C
// (None)

class UClass* UPrimalItemSkin_DodorexMask_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemSkin_DodorexMask_C");

	return Clss;
}


// PrimalItemSkin_DodorexMask_C PrimalItemSkin_DodorexMask.Default__PrimalItemSkin_DodorexMask_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemSkin_DodorexMask_C* UPrimalItemSkin_DodorexMask_C::GetDefaultObj()
{
	static class UPrimalItemSkin_DodorexMask_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemSkin_DodorexMask_C*>(UPrimalItemSkin_DodorexMask_C::StaticClass()->DefaultObject);

	return Default;
}

}


