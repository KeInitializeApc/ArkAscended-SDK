#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseWall.PrimalItemStructure_BaseWall_C
// (None)

class UClass* UPrimalItemStructure_BaseWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseWall_C");

	return Clss;
}


// PrimalItemStructure_BaseWall_C PrimalItemStructure_BaseWall.Default__PrimalItemStructure_BaseWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseWall_C* UPrimalItemStructure_BaseWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseWall_C*>(UPrimalItemStructure_BaseWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


