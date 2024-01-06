#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Thatch.PrimalItemResource_Thatch_C
// (None)

class UClass* UPrimalItemResource_Thatch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Thatch_C");

	return Clss;
}


// PrimalItemResource_Thatch_C PrimalItemResource_Thatch.Default__PrimalItemResource_Thatch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Thatch_C* UPrimalItemResource_Thatch_C::GetDefaultObj()
{
	static class UPrimalItemResource_Thatch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Thatch_C*>(UPrimalItemResource_Thatch_C::StaticClass()->DefaultObject);

	return Default;
}

}


