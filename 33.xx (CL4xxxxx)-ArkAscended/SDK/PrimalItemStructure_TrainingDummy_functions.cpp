#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TrainingDummy.PrimalItemStructure_TrainingDummy_C
// (None)

class UClass* UPrimalItemStructure_TrainingDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TrainingDummy_C");

	return Clss;
}


// PrimalItemStructure_TrainingDummy_C PrimalItemStructure_TrainingDummy.Default__PrimalItemStructure_TrainingDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TrainingDummy_C* UPrimalItemStructure_TrainingDummy_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TrainingDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TrainingDummy_C*>(UPrimalItemStructure_TrainingDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


