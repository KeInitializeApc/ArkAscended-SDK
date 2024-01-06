#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Obsidian.PrimalItemResource_Obsidian_C
// (None)

class UClass* UPrimalItemResource_Obsidian_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Obsidian_C");

	return Clss;
}


// PrimalItemResource_Obsidian_C PrimalItemResource_Obsidian.Default__PrimalItemResource_Obsidian_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Obsidian_C* UPrimalItemResource_Obsidian_C::GetDefaultObj()
{
	static class UPrimalItemResource_Obsidian_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Obsidian_C*>(UPrimalItemResource_Obsidian_C::StaticClass()->DefaultObject);

	return Default;
}

}


