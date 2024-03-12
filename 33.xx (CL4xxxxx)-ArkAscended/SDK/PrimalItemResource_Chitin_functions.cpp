#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Chitin.PrimalItemResource_Chitin_C
// (None)

class UClass* UPrimalItemResource_Chitin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Chitin_C");

	return Clss;
}


// PrimalItemResource_Chitin_C PrimalItemResource_Chitin.Default__PrimalItemResource_Chitin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Chitin_C* UPrimalItemResource_Chitin_C::GetDefaultObj()
{
	static class UPrimalItemResource_Chitin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Chitin_C*>(UPrimalItemResource_Chitin_C::StaticClass()->DefaultObject);

	return Default;
}

}


