#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Silk.PrimalItemResource_Silk_C
// (None)

class UClass* UPrimalItemResource_Silk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Silk_C");

	return Clss;
}


// PrimalItemResource_Silk_C PrimalItemResource_Silk.Default__PrimalItemResource_Silk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Silk_C* UPrimalItemResource_Silk_C::GetDefaultObj()
{
	static class UPrimalItemResource_Silk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Silk_C*>(UPrimalItemResource_Silk_C::StaticClass()->DefaultObject);

	return Default;
}

}


