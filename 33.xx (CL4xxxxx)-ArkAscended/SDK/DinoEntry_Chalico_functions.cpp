#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Chalico.DinoEntry_Chalico_C
// (None)

class UClass* UDinoEntry_Chalico_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Chalico_C");

	return Clss;
}


// DinoEntry_Chalico_C DinoEntry_Chalico.Default__DinoEntry_Chalico_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Chalico_C* UDinoEntry_Chalico_C::GetDefaultObj()
{
	static class UDinoEntry_Chalico_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Chalico_C*>(UDinoEntry_Chalico_C::StaticClass()->DefaultObject);

	return Default;
}

}


