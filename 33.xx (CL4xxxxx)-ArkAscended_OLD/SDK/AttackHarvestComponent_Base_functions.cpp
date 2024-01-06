#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AttackHarvestComponent_Base.AttackHarvestComponent_Base_C
// (None)

class UClass* UAttackHarvestComponent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AttackHarvestComponent_Base_C");

	return Clss;
}


// AttackHarvestComponent_Base_C AttackHarvestComponent_Base.Default__AttackHarvestComponent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAttackHarvestComponent_Base_C* UAttackHarvestComponent_Base_C::GetDefaultObj()
{
	static class UAttackHarvestComponent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAttackHarvestComponent_Base_C*>(UAttackHarvestComponent_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


