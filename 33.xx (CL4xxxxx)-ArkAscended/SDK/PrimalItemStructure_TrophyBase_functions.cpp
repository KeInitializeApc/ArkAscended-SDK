#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TrophyBase.PrimalItemStructure_TrophyBase_C
// (None)

class UClass* UPrimalItemStructure_TrophyBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TrophyBase_C");

	return Clss;
}


// PrimalItemStructure_TrophyBase_C PrimalItemStructure_TrophyBase.Default__PrimalItemStructure_TrophyBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TrophyBase_C* UPrimalItemStructure_TrophyBase_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TrophyBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TrophyBase_C*>(UPrimalItemStructure_TrophyBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


