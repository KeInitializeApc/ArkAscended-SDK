#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ChitinPaste.PrimalItemResource_ChitinPaste_C
// (None)

class UClass* UPrimalItemResource_ChitinPaste_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ChitinPaste_C");

	return Clss;
}


// PrimalItemResource_ChitinPaste_C PrimalItemResource_ChitinPaste.Default__PrimalItemResource_ChitinPaste_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ChitinPaste_C* UPrimalItemResource_ChitinPaste_C::GetDefaultObj()
{
	static class UPrimalItemResource_ChitinPaste_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ChitinPaste_C*>(UPrimalItemResource_ChitinPaste_C::StaticClass()->DefaultObject);

	return Default;
}

}


