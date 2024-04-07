#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_AmargaSpike.PrimalItemResource_AmargaSpike_C
// (None)

class UClass* UPrimalItemResource_AmargaSpike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_AmargaSpike_C");

	return Clss;
}


// PrimalItemResource_AmargaSpike_C PrimalItemResource_AmargaSpike.Default__PrimalItemResource_AmargaSpike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_AmargaSpike_C* UPrimalItemResource_AmargaSpike_C::GetDefaultObj()
{
	static class UPrimalItemResource_AmargaSpike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_AmargaSpike_C*>(UPrimalItemResource_AmargaSpike_C::StaticClass()->DefaultObject);

	return Default;
}

}


