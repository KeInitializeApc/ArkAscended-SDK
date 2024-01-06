#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Note.PrimalItem_Note_C
// (None)

class UClass* UPrimalItem_Note_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Note_C");

	return Clss;
}


// PrimalItem_Note_C PrimalItem_Note.Default__PrimalItem_Note_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Note_C* UPrimalItem_Note_C::GetDefaultObj()
{
	static class UPrimalItem_Note_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Note_C*>(UPrimalItem_Note_C::StaticClass()->DefaultObject);

	return Default;
}

}


