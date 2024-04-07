#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Scorp.DinoEntry_Scorp_C
// (None)

class UClass* UDinoEntry_Scorp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Scorp_C");

	return Clss;
}


// DinoEntry_Scorp_C DinoEntry_Scorp.Default__DinoEntry_Scorp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Scorp_C* UDinoEntry_Scorp_C::GetDefaultObj()
{
	static class UDinoEntry_Scorp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Scorp_C*>(UDinoEntry_Scorp_C::StaticClass()->DefaultObject);

	return Default;
}

}


