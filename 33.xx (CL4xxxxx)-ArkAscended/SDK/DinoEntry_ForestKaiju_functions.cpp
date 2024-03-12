#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_ForestKaiju.DinoEntry_ForestKaiju_C
// (None)

class UClass* UDinoEntry_ForestKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_ForestKaiju_C");

	return Clss;
}


// DinoEntry_ForestKaiju_C DinoEntry_ForestKaiju.Default__DinoEntry_ForestKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_ForestKaiju_C* UDinoEntry_ForestKaiju_C::GetDefaultObj()
{
	static class UDinoEntry_ForestKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_ForestKaiju_C*>(UDinoEntry_ForestKaiju_C::StaticClass()->DefaultObject);

	return Default;
}

}


