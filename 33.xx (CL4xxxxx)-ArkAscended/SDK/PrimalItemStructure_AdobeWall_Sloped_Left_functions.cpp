#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrimalItemStructure_AdobeWall_Sloped_Left.PrimalItemStructure_AdobeWall_Sloped_Left_C
// (None)

class UClass* UPrimalItemStructure_AdobeWall_Sloped_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimalItemStructure_AdobeWall_Sloped_Left_C");

	return Clss;
}


// PrimalItemStructure_AdobeWall_Sloped_Left_C PrimalItemStructure_AdobeWall_Sloped_Left.Default__PrimalItemStructure_AdobeWall_Sloped_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrimalItemStructure_AdobeWall_Sloped_Left_C* UPrimalItemStructure_AdobeWall_Sloped_Left_C::GetDefaultObj()
{
	static class UPrimalItemStructure_AdobeWall_Sloped_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimalItemStructure_AdobeWall_Sloped_Left_C*>(UPrimalItemStructure_AdobeWall_Sloped_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


