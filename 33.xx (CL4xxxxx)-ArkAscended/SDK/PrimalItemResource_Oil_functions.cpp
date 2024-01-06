#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Oil.PrimalItemResource_Oil_C
// (None)

class UClass* UPrimalItemResource_Oil_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Oil_C");

	return Clss;
}


// PrimalItemResource_Oil_C PrimalItemResource_Oil.Default__PrimalItemResource_Oil_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Oil_C* UPrimalItemResource_Oil_C::GetDefaultObj()
{
	static class UPrimalItemResource_Oil_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Oil_C*>(UPrimalItemResource_Oil_C::StaticClass()->DefaultObject);

	return Default;
}

}


