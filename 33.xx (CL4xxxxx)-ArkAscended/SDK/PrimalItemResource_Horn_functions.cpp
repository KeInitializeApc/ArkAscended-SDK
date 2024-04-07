#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Horn.PrimalItemResource_Horn_C
// (None)

class UClass* UPrimalItemResource_Horn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Horn_C");

	return Clss;
}


// PrimalItemResource_Horn_C PrimalItemResource_Horn.Default__PrimalItemResource_Horn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Horn_C* UPrimalItemResource_Horn_C::GetDefaultObj()
{
	static class UPrimalItemResource_Horn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Horn_C*>(UPrimalItemResource_Horn_C::StaticClass()->DefaultObject);

	return Default;
}

}


