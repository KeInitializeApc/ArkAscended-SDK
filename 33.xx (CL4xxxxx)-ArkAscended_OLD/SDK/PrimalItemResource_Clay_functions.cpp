#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Clay.PrimalItemResource_Clay_C
// (None)

class UClass* UPrimalItemResource_Clay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Clay_C");

	return Clss;
}


// PrimalItemResource_Clay_C PrimalItemResource_Clay.Default__PrimalItemResource_Clay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Clay_C* UPrimalItemResource_Clay_C::GetDefaultObj()
{
	static class UPrimalItemResource_Clay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Clay_C*>(UPrimalItemResource_Clay_C::StaticClass()->DefaultObject);

	return Default;
}

}


