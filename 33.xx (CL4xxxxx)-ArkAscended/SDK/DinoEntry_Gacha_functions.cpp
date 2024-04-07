#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Gacha.DinoEntry_Gacha_C
// (None)

class UClass* UDinoEntry_Gacha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Gacha_C");

	return Clss;
}


// DinoEntry_Gacha_C DinoEntry_Gacha.Default__DinoEntry_Gacha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Gacha_C* UDinoEntry_Gacha_C::GetDefaultObj()
{
	static class UDinoEntry_Gacha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Gacha_C*>(UDinoEntry_Gacha_C::StaticClass()->DefaultObject);

	return Default;
}

}


