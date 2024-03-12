#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C
// (None)

class UClass* UPrimalItemStructure_BaseWallWithDoor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseWallWithDoor_C");

	return Clss;
}


// PrimalItemStructure_BaseWallWithDoor_C PrimalItemStructure_BaseWallWithDoor.Default__PrimalItemStructure_BaseWallWithDoor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseWallWithDoor_C* UPrimalItemStructure_BaseWallWithDoor_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseWallWithDoor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseWallWithDoor_C*>(UPrimalItemStructure_BaseWallWithDoor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PrimalItemStructure_BaseWallWithDoor.PrimalItemStructure_BaseWallWithDoor_C.NewFunction_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPrimalItemStructure_BaseWallWithDoor_C::NewFunction_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PrimalItemStructure_BaseWallWithDoor_C", "NewFunction_0");



	UObject::ProcessEvent(Func, nullptr);

}

}


