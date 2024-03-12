#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Spino.DinoEntry_Spino_C
// (None)

class UClass* UDinoEntry_Spino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Spino_C");

	return Clss;
}


// DinoEntry_Spino_C DinoEntry_Spino.Default__DinoEntry_Spino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Spino_C* UDinoEntry_Spino_C::GetDefaultObj()
{
	static class UDinoEntry_Spino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Spino_C*>(UDinoEntry_Spino_C::StaticClass()->DefaultObject);

	return Default;
}

}


