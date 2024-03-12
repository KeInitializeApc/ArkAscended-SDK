#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_RhinoSaddle.PrimalItemArmor_RhinoSaddle_C
// (None)

class UClass* UPrimalItemArmor_RhinoSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_RhinoSaddle_C");

	return Clss;
}


// PrimalItemArmor_RhinoSaddle_C PrimalItemArmor_RhinoSaddle.Default__PrimalItemArmor_RhinoSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_RhinoSaddle_C* UPrimalItemArmor_RhinoSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_RhinoSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_RhinoSaddle_C*>(UPrimalItemArmor_RhinoSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


