#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_DesmodusSaddle.PrimalItemArmor_DesmodusSaddle_C
// (None)

class UClass* UPrimalItemArmor_DesmodusSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_DesmodusSaddle_C");

	return Clss;
}


// PrimalItemArmor_DesmodusSaddle_C PrimalItemArmor_DesmodusSaddle.Default__PrimalItemArmor_DesmodusSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_DesmodusSaddle_C* UPrimalItemArmor_DesmodusSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_DesmodusSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_DesmodusSaddle_C*>(UPrimalItemArmor_DesmodusSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


