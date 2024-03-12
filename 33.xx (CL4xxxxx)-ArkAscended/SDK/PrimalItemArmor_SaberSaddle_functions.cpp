#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_SaberSaddle.PrimalItemArmor_SaberSaddle_C
// (None)

class UClass* UPrimalItemArmor_SaberSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_SaberSaddle_C");

	return Clss;
}


// PrimalItemArmor_SaberSaddle_C PrimalItemArmor_SaberSaddle.Default__PrimalItemArmor_SaberSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_SaberSaddle_C* UPrimalItemArmor_SaberSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_SaberSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_SaberSaddle_C*>(UPrimalItemArmor_SaberSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


