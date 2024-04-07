#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Sarco.DinoEntry_Sarco_C
// (None)

class UClass* UDinoEntry_Sarco_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Sarco_C");

	return Clss;
}


// DinoEntry_Sarco_C DinoEntry_Sarco.Default__DinoEntry_Sarco_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Sarco_C* UDinoEntry_Sarco_C::GetDefaultObj()
{
	static class UDinoEntry_Sarco_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Sarco_C*>(UDinoEntry_Sarco_C::StaticClass()->DefaultObject);

	return Default;
}

}


