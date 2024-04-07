#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_DesertKaiju.DinoEntry_DesertKaiju_C
// (None)

class UClass* UDinoEntry_DesertKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_DesertKaiju_C");

	return Clss;
}


// DinoEntry_DesertKaiju_C DinoEntry_DesertKaiju.Default__DinoEntry_DesertKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_DesertKaiju_C* UDinoEntry_DesertKaiju_C::GetDefaultObj()
{
	static class UDinoEntry_DesertKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_DesertKaiju_C*>(UDinoEntry_DesertKaiju_C::StaticClass()->DefaultObject);

	return Default;
}

}


