#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Hide.PrimalItemResource_Hide_C
// (None)

class UClass* UPrimalItemResource_Hide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Hide_C");

	return Clss;
}


// PrimalItemResource_Hide_C PrimalItemResource_Hide.Default__PrimalItemResource_Hide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Hide_C* UPrimalItemResource_Hide_C::GetDefaultObj()
{
	static class UPrimalItemResource_Hide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Hide_C*>(UPrimalItemResource_Hide_C::StaticClass()->DefaultObject);

	return Default;
}

}


