#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemResource_Hair.PrimalItemResource_Hair_C
// (None)

class UClass* UPrimalItemResource_Hair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemResource_Hair_C");

	return Clss;
}


// PrimalItemResource_Hair_C PrimalItemResource_Hair.Default__PrimalItemResource_Hair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemResource_Hair_C* UPrimalItemResource_Hair_C::GetDefaultObj()
{
	static class UPrimalItemResource_Hair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemResource_Hair_C*>(UPrimalItemResource_Hair_C::StaticClass()->DefaultObject);

	return Default;
}

}


