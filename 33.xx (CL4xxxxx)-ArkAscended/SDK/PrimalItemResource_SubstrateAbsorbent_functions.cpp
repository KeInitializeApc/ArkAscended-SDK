#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_SubstrateAbsorbent.PrimalItemResource_SubstrateAbsorbent_C
// (None)

class UClass* UPrimalItemResource_SubstrateAbsorbent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_SubstrateAbsorbent_C");

	return Clss;
}


// PrimalItemResource_SubstrateAbsorbent_C PrimalItemResource_SubstrateAbsorbent.Default__PrimalItemResource_SubstrateAbsorbent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_SubstrateAbsorbent_C* UPrimalItemResource_SubstrateAbsorbent_C::GetDefaultObj()
{
	static class UPrimalItemResource_SubstrateAbsorbent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_SubstrateAbsorbent_C*>(UPrimalItemResource_SubstrateAbsorbent_C::StaticClass()->DefaultObject);

	return Default;
}

}


