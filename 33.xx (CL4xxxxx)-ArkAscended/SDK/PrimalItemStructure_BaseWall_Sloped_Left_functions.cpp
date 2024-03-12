#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_BaseWall_Sloped_Left.PrimalItemStructure_BaseWall_Sloped_Left_C
// (None)

class UClass* UPrimalItemStructure_BaseWall_Sloped_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_BaseWall_Sloped_Left_C");

	return Clss;
}


// PrimalItemStructure_BaseWall_Sloped_Left_C PrimalItemStructure_BaseWall_Sloped_Left.Default__PrimalItemStructure_BaseWall_Sloped_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_BaseWall_Sloped_Left_C* UPrimalItemStructure_BaseWall_Sloped_Left_C::GetDefaultObj()
{
	static class UPrimalItemStructure_BaseWall_Sloped_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_BaseWall_Sloped_Left_C*>(UPrimalItemStructure_BaseWall_Sloped_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


