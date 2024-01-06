#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Stone.PrimalItemResource_Stone_C
// (None)

class UClass* UPrimalItemResource_Stone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Stone_C");

	return Clss;
}


// PrimalItemResource_Stone_C PrimalItemResource_Stone.Default__PrimalItemResource_Stone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Stone_C* UPrimalItemResource_Stone_C::GetDefaultObj()
{
	static class UPrimalItemResource_Stone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Stone_C*>(UPrimalItemResource_Stone_C::StaticClass()->DefaultObject);

	return Default;
}

}


