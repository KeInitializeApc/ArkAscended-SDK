#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_Flag_Spider.PrimalItemStructure_Flag_Spider_C
// (None)

class UClass* UPrimalItemStructure_Flag_Spider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_Flag_Spider_C");

	return Clss;
}


// PrimalItemStructure_Flag_Spider_C PrimalItemStructure_Flag_Spider.Default__PrimalItemStructure_Flag_Spider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_Flag_Spider_C* UPrimalItemStructure_Flag_Spider_C::GetDefaultObj()
{
	static class UPrimalItemStructure_Flag_Spider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_Flag_Spider_C*>(UPrimalItemStructure_Flag_Spider_C::StaticClass()->DefaultObject);

	return Default;
}

}


