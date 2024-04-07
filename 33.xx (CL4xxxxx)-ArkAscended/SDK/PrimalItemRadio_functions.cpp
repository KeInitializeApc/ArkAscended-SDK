#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemRadio.PrimalItemRadio_C
// (None)

class UClass* UPrimalItemRadio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemRadio_C");

	return Clss;
}


// PrimalItemRadio_C PrimalItemRadio.Default__PrimalItemRadio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemRadio_C* UPrimalItemRadio_C::GetDefaultObj()
{
	static class UPrimalItemRadio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemRadio_C*>(UPrimalItemRadio_C::StaticClass()->DefaultObject);

	return Default;
}

}


