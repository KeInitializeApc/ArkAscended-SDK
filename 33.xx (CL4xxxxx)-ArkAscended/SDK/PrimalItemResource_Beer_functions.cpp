#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Beer.PrimalItemResource_Beer_C
// (None)

class UClass* UPrimalItemResource_Beer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Beer_C");

	return Clss;
}


// PrimalItemResource_Beer_C PrimalItemResource_Beer.Default__PrimalItemResource_Beer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Beer_C* UPrimalItemResource_Beer_C::GetDefaultObj()
{
	static class UPrimalItemResource_Beer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Beer_C*>(UPrimalItemResource_Beer_C::StaticClass()->DefaultObject);

	return Default;
}

}


