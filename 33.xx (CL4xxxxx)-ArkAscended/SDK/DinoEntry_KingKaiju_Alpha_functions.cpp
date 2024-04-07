#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_KingKaiju_Alpha.DinoEntry_KingKaiju_Alpha_C
// (None)

class UClass* UDinoEntry_KingKaiju_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_KingKaiju_Alpha_C");

	return Clss;
}


// DinoEntry_KingKaiju_Alpha_C DinoEntry_KingKaiju_Alpha.Default__DinoEntry_KingKaiju_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_KingKaiju_Alpha_C* UDinoEntry_KingKaiju_Alpha_C::GetDefaultObj()
{
	static class UDinoEntry_KingKaiju_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_KingKaiju_Alpha_C*>(UDinoEntry_KingKaiju_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


