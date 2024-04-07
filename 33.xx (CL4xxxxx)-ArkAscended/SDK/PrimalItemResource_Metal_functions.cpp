#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Metal.PrimalItemResource_Metal_C
// (None)

class UClass* UPrimalItemResource_Metal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Metal_C");

	return Clss;
}


// PrimalItemResource_Metal_C PrimalItemResource_Metal.Default__PrimalItemResource_Metal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Metal_C* UPrimalItemResource_Metal_C::GetDefaultObj()
{
	static class UPrimalItemResource_Metal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Metal_C*>(UPrimalItemResource_Metal_C::StaticClass()->DefaultObject);

	return Default;
}

}


