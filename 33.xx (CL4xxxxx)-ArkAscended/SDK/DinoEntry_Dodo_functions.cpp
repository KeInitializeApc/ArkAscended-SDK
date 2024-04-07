#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dodo.DinoEntry_Dodo_C
// (None)

class UClass* UDinoEntry_Dodo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dodo_C");

	return Clss;
}


// DinoEntry_Dodo_C DinoEntry_Dodo.Default__DinoEntry_Dodo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dodo_C* UDinoEntry_Dodo_C::GetDefaultObj()
{
	static class UDinoEntry_Dodo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dodo_C*>(UDinoEntry_Dodo_C::StaticClass()->DefaultObject);

	return Default;
}

}


