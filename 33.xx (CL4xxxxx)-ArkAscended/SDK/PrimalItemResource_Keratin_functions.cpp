#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Keratin.PrimalItemResource_Keratin_C
// (None)

class UClass* UPrimalItemResource_Keratin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Keratin_C");

	return Clss;
}


// PrimalItemResource_Keratin_C PrimalItemResource_Keratin.Default__PrimalItemResource_Keratin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Keratin_C* UPrimalItemResource_Keratin_C::GetDefaultObj()
{
	static class UPrimalItemResource_Keratin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Keratin_C*>(UPrimalItemResource_Keratin_C::StaticClass()->DefaultObject);

	return Default;
}

}


