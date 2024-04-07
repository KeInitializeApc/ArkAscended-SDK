#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Andrewsarchus.DinoEntry_Andrewsarchus_C
// (None)

class UClass* UDinoEntry_Andrewsarchus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Andrewsarchus_C");

	return Clss;
}


// DinoEntry_Andrewsarchus_C DinoEntry_Andrewsarchus.Default__DinoEntry_Andrewsarchus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Andrewsarchus_C* UDinoEntry_Andrewsarchus_C::GetDefaultObj()
{
	static class UDinoEntry_Andrewsarchus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Andrewsarchus_C*>(UDinoEntry_Andrewsarchus_C::StaticClass()->DefaultObject);

	return Default;
}

}


