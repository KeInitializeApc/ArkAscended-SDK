#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Resin.PrimalItemResource_Resin_C
// (None)

class UClass* UPrimalItemResource_Resin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Resin_C");

	return Clss;
}


// PrimalItemResource_Resin_C PrimalItemResource_Resin.Default__PrimalItemResource_Resin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Resin_C* UPrimalItemResource_Resin_C::GetDefaultObj()
{
	static class UPrimalItemResource_Resin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Resin_C*>(UPrimalItemResource_Resin_C::StaticClass()->DefaultObject);

	return Default;
}

}


