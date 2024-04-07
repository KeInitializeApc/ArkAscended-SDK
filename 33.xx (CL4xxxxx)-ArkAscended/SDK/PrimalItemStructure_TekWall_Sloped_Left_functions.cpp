#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_TekWall_Sloped_Left.PrimalItemStructure_TekWall_Sloped_Left_C
// (None)

class UClass* UPrimalItemStructure_TekWall_Sloped_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_TekWall_Sloped_Left_C");

	return Clss;
}


// PrimalItemStructure_TekWall_Sloped_Left_C PrimalItemStructure_TekWall_Sloped_Left.Default__PrimalItemStructure_TekWall_Sloped_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_TekWall_Sloped_Left_C* UPrimalItemStructure_TekWall_Sloped_Left_C::GetDefaultObj()
{
	static class UPrimalItemStructure_TekWall_Sloped_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_TekWall_Sloped_Left_C*>(UPrimalItemStructure_TekWall_Sloped_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


