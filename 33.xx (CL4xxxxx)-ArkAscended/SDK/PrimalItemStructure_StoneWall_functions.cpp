#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_StoneWall.PrimalItemStructure_StoneWall_C
// (None)

class UClass* UPrimalItemStructure_StoneWall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_StoneWall_C");

	return Clss;
}


// PrimalItemStructure_StoneWall_C PrimalItemStructure_StoneWall.Default__PrimalItemStructure_StoneWall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_StoneWall_C* UPrimalItemStructure_StoneWall_C::GetDefaultObj()
{
	static class UPrimalItemStructure_StoneWall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_StoneWall_C*>(UPrimalItemStructure_StoneWall_C::StaticClass()->DefaultObject);

	return Default;
}

}


