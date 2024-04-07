#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_SnailPaste.PrimalItemResource_SnailPaste_C
// (None)

class UClass* UPrimalItemResource_SnailPaste_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_SnailPaste_C");

	return Clss;
}


// PrimalItemResource_SnailPaste_C PrimalItemResource_SnailPaste.Default__PrimalItemResource_SnailPaste_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_SnailPaste_C* UPrimalItemResource_SnailPaste_C::GetDefaultObj()
{
	static class UPrimalItemResource_SnailPaste_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_SnailPaste_C*>(UPrimalItemResource_SnailPaste_C::StaticClass()->DefaultObject);

	return Default;
}

}


