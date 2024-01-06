#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_LeechBlood.PrimalItemResource_LeechBlood_C
// (None)

class UClass* UPrimalItemResource_LeechBlood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_LeechBlood_C");

	return Clss;
}


// PrimalItemResource_LeechBlood_C PrimalItemResource_LeechBlood.Default__PrimalItemResource_LeechBlood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_LeechBlood_C* UPrimalItemResource_LeechBlood_C::GetDefaultObj()
{
	static class UPrimalItemResource_LeechBlood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_LeechBlood_C*>(UPrimalItemResource_LeechBlood_C::StaticClass()->DefaultObject);

	return Default;
}

}


