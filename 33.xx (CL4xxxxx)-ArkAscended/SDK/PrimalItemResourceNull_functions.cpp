#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResourceNull.PrimalItemResourceNull_C
// (None)

class UClass* UPrimalItemResourceNull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResourceNull_C");

	return Clss;
}


// PrimalItemResourceNull_C PrimalItemResourceNull.Default__PrimalItemResourceNull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResourceNull_C* UPrimalItemResourceNull_C::GetDefaultObj()
{
	static class UPrimalItemResourceNull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResourceNull_C*>(UPrimalItemResourceNull_C::StaticClass()->DefaultObject);

	return Default;
}

}


