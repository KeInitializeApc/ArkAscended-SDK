#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Silicon.PrimalItemResource_Silicon_C
// (None)

class UClass* UPrimalItemResource_Silicon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Silicon_C");

	return Clss;
}


// PrimalItemResource_Silicon_C PrimalItemResource_Silicon.Default__PrimalItemResource_Silicon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Silicon_C* UPrimalItemResource_Silicon_C::GetDefaultObj()
{
	static class UPrimalItemResource_Silicon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Silicon_C*>(UPrimalItemResource_Silicon_C::StaticClass()->DefaultObject);

	return Default;
}

}


