#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Sap.PrimalItemResource_Sap_C
// (None)

class UClass* UPrimalItemResource_Sap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Sap_C");

	return Clss;
}


// PrimalItemResource_Sap_C PrimalItemResource_Sap.Default__PrimalItemResource_Sap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Sap_C* UPrimalItemResource_Sap_C::GetDefaultObj()
{
	static class UPrimalItemResource_Sap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Sap_C*>(UPrimalItemResource_Sap_C::StaticClass()->DefaultObject);

	return Default;
}

}


