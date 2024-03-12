#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_RawSalt.PrimalItemResource_RawSalt_C
// (None)

class UClass* UPrimalItemResource_RawSalt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_RawSalt_C");

	return Clss;
}


// PrimalItemResource_RawSalt_C PrimalItemResource_RawSalt.Default__PrimalItemResource_RawSalt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_RawSalt_C* UPrimalItemResource_RawSalt_C::GetDefaultObj()
{
	static class UPrimalItemResource_RawSalt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_RawSalt_C*>(UPrimalItemResource_RawSalt_C::StaticClass()->DefaultObject);

	return Default;
}

}


