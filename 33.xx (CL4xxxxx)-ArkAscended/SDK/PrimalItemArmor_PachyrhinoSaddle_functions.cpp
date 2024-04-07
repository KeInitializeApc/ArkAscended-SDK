#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_PachyrhinoSaddle.PrimalItemArmor_PachyrhinoSaddle_C
// (None)

class UClass* UPrimalItemArmor_PachyrhinoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_PachyrhinoSaddle_C");

	return Clss;
}


// PrimalItemArmor_PachyrhinoSaddle_C PrimalItemArmor_PachyrhinoSaddle.Default__PrimalItemArmor_PachyrhinoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_PachyrhinoSaddle_C* UPrimalItemArmor_PachyrhinoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_PachyrhinoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_PachyrhinoSaddle_C*>(UPrimalItemArmor_PachyrhinoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


