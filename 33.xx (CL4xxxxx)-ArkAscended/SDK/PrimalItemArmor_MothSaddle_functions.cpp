#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MothSaddle.PrimalItemArmor_MothSaddle_C
// (None)

class UClass* UPrimalItemArmor_MothSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MothSaddle_C");

	return Clss;
}


// PrimalItemArmor_MothSaddle_C PrimalItemArmor_MothSaddle.Default__PrimalItemArmor_MothSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MothSaddle_C* UPrimalItemArmor_MothSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MothSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MothSaddle_C*>(UPrimalItemArmor_MothSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


