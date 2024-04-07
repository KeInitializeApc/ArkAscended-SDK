#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Electronics.PrimalItemResource_Electronics_C
// (None)

class UClass* UPrimalItemResource_Electronics_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Electronics_C");

	return Clss;
}


// PrimalItemResource_Electronics_C PrimalItemResource_Electronics.Default__PrimalItemResource_Electronics_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Electronics_C* UPrimalItemResource_Electronics_C::GetDefaultObj()
{
	static class UPrimalItemResource_Electronics_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Electronics_C*>(UPrimalItemResource_Electronics_C::StaticClass()->DefaultObject);

	return Default;
}

}


