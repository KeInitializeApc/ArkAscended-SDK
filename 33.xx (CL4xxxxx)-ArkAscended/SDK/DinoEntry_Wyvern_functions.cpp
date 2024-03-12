#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Wyvern.DinoEntry_Wyvern_C
// (None)

class UClass* UDinoEntry_Wyvern_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Wyvern_C");

	return Clss;
}


// DinoEntry_Wyvern_C DinoEntry_Wyvern.Default__DinoEntry_Wyvern_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Wyvern_C* UDinoEntry_Wyvern_C::GetDefaultObj()
{
	static class UDinoEntry_Wyvern_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Wyvern_C*>(UDinoEntry_Wyvern_C::StaticClass()->DefaultObject);

	return Default;
}

}


