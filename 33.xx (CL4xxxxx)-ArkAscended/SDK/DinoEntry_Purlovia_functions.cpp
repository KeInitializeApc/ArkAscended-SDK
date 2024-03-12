#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Purlovia.DinoEntry_Purlovia_C
// (None)

class UClass* UDinoEntry_Purlovia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Purlovia_C");

	return Clss;
}


// DinoEntry_Purlovia_C DinoEntry_Purlovia.Default__DinoEntry_Purlovia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Purlovia_C* UDinoEntry_Purlovia_C::GetDefaultObj()
{
	static class UDinoEntry_Purlovia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Purlovia_C*>(UDinoEntry_Purlovia_C::StaticClass()->DefaultObject);

	return Default;
}

}


