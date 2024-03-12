#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemHelmet2.PrimalItemHelmet2_C
// (None)

class UClass* UPrimalItemHelmet2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemHelmet2_C");

	return Clss;
}


// PrimalItemHelmet2_C PrimalItemHelmet2.Default__PrimalItemHelmet2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemHelmet2_C* UPrimalItemHelmet2_C::GetDefaultObj()
{
	static class UPrimalItemHelmet2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemHelmet2_C*>(UPrimalItemHelmet2_C::StaticClass()->DefaultObject);

	return Default;
}

}


