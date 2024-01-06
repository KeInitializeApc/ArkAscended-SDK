#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_ElementDust.PrimalItemResource_ElementDust_C
// (None)

class UClass* UPrimalItemResource_ElementDust_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_ElementDust_C");

	return Clss;
}


// PrimalItemResource_ElementDust_C PrimalItemResource_ElementDust.Default__PrimalItemResource_ElementDust_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_ElementDust_C* UPrimalItemResource_ElementDust_C::GetDefaultObj()
{
	static class UPrimalItemResource_ElementDust_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_ElementDust_C*>(UPrimalItemResource_ElementDust_C::StaticClass()->DefaultObject);

	return Default;
}

}


