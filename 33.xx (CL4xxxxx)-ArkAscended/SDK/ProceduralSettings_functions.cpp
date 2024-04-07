#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProceduralSettings.ProceduralSettings_C
// (None)

class UClass* UProceduralSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProceduralSettings_C");

	return Clss;
}


// ProceduralSettings_C ProceduralSettings.Default__ProceduralSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProceduralSettings_C* UProceduralSettings_C::GetDefaultObj()
{
	static class UProceduralSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProceduralSettings_C*>(UProceduralSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


