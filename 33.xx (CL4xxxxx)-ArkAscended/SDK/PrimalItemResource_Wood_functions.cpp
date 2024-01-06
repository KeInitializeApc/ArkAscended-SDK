#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Wood.PrimalItemResource_Wood_C
// (None)

class UClass* UPrimalItemResource_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Wood_C");

	return Clss;
}


// PrimalItemResource_Wood_C PrimalItemResource_Wood.Default__PrimalItemResource_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Wood_C* UPrimalItemResource_Wood_C::GetDefaultObj()
{
	static class UPrimalItemResource_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Wood_C*>(UPrimalItemResource_Wood_C::StaticClass()->DefaultObject);

	return Default;
}

}


