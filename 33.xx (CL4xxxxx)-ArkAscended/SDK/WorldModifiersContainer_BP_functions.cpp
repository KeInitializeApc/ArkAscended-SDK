#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WorldModifiersContainer_BP.WorldModifiersContainer_BP_C
// (None)

class UClass* UWorldModifiersContainer_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WorldModifiersContainer_BP_C");

	return Clss;
}


// WorldModifiersContainer_BP_C WorldModifiersContainer_BP.Default__WorldModifiersContainer_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWorldModifiersContainer_BP_C* UWorldModifiersContainer_BP_C::GetDefaultObj()
{
	static class UWorldModifiersContainer_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWorldModifiersContainer_BP_C*>(UWorldModifiersContainer_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


