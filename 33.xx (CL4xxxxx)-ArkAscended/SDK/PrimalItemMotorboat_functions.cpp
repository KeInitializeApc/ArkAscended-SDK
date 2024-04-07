#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemMotorboat.PrimalItemMotorboat_C
// (None)

class UClass* UPrimalItemMotorboat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemMotorboat_C");

	return Clss;
}


// PrimalItemMotorboat_C PrimalItemMotorboat.Default__PrimalItemMotorboat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemMotorboat_C* UPrimalItemMotorboat_C::GetDefaultObj()
{
	static class UPrimalItemMotorboat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemMotorboat_C*>(UPrimalItemMotorboat_C::StaticClass()->DefaultObject);

	return Default;
}

}


