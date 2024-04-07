#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_ArgentavisSaddle.PrimalItemArmor_ArgentavisSaddle_C
// (None)

class UClass* UPrimalItemArmor_ArgentavisSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_ArgentavisSaddle_C");

	return Clss;
}


// PrimalItemArmor_ArgentavisSaddle_C PrimalItemArmor_ArgentavisSaddle.Default__PrimalItemArmor_ArgentavisSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_ArgentavisSaddle_C* UPrimalItemArmor_ArgentavisSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_ArgentavisSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_ArgentavisSaddle_C*>(UPrimalItemArmor_ArgentavisSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


