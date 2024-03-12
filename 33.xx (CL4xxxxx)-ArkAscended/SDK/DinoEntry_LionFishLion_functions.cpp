#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_LionFishLion.DinoEntry_LionFishLion_C
// (None)

class UClass* UDinoEntry_LionFishLion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_LionFishLion_C");

	return Clss;
}


// DinoEntry_LionFishLion_C DinoEntry_LionFishLion.Default__DinoEntry_LionFishLion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_LionFishLion_C* UDinoEntry_LionFishLion_C::GetDefaultObj()
{
	static class UDinoEntry_LionFishLion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_LionFishLion_C*>(UDinoEntry_LionFishLion_C::StaticClass()->DefaultObject);

	return Default;
}

}


