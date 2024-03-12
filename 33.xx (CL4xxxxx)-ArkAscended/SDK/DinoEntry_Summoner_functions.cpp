#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Summoner.DinoEntry_Summoner_C
// (None)

class UClass* UDinoEntry_Summoner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Summoner_C");

	return Clss;
}


// DinoEntry_Summoner_C DinoEntry_Summoner.Default__DinoEntry_Summoner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Summoner_C* UDinoEntry_Summoner_C::GetDefaultObj()
{
	static class UDinoEntry_Summoner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Summoner_C*>(UDinoEntry_Summoner_C::StaticClass()->DefaultObject);

	return Default;
}

}


