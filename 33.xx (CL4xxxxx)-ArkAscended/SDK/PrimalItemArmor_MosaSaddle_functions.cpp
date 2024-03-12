#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemArmor_MosaSaddle.PrimalItemArmor_MosaSaddle_C
// (None)

class UClass* UPrimalItemArmor_MosaSaddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemArmor_MosaSaddle_C");

	return Clss;
}


// PrimalItemArmor_MosaSaddle_C PrimalItemArmor_MosaSaddle.Default__PrimalItemArmor_MosaSaddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemArmor_MosaSaddle_C* UPrimalItemArmor_MosaSaddle_C::GetDefaultObj()
{
	static class UPrimalItemArmor_MosaSaddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemArmor_MosaSaddle_C*>(UPrimalItemArmor_MosaSaddle_C::StaticClass()->DefaultObject);

	return Default;
}

}


