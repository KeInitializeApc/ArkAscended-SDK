#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItem_Camera.PrimalItem_Camera_C
// (None)

class UClass* UPrimalItem_Camera_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItem_Camera_C");

	return Clss;
}


// PrimalItem_Camera_C PrimalItem_Camera.Default__PrimalItem_Camera_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItem_Camera_C* UPrimalItem_Camera_C::GetDefaultObj()
{
	static class UPrimalItem_Camera_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItem_Camera_C*>(UPrimalItem_Camera_C::StaticClass()->DefaultObject);

	return Default;
}

}


