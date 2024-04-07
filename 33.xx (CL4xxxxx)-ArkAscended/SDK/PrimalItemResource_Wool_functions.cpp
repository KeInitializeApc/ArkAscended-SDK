#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Wool.PrimalItemResource_Wool_C
// (None)

class UClass* UPrimalItemResource_Wool_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Wool_C");

	return Clss;
}


// PrimalItemResource_Wool_C PrimalItemResource_Wool.Default__PrimalItemResource_Wool_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Wool_C* UPrimalItemResource_Wool_C::GetDefaultObj()
{
	static class UPrimalItemResource_Wool_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Wool_C*>(UPrimalItemResource_Wool_C::StaticClass()->DefaultObject);

	return Default;
}

}


