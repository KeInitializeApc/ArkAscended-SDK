#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MinimapData_Base.MinimapData_Base_C
// (None)

class UClass* UMinimapData_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MinimapData_Base_C");

	return Clss;
}


// MinimapData_Base_C MinimapData_Base.Default__MinimapData_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMinimapData_Base_C* UMinimapData_Base_C::GetDefaultObj()
{
	static class UMinimapData_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMinimapData_Base_C*>(UMinimapData_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


