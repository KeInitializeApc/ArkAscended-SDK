#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Plesi.DinoEntry_Plesi_C
// (None)

class UClass* UDinoEntry_Plesi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Plesi_C");

	return Clss;
}


// DinoEntry_Plesi_C DinoEntry_Plesi.Default__DinoEntry_Plesi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Plesi_C* UDinoEntry_Plesi_C::GetDefaultObj()
{
	static class UDinoEntry_Plesi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Plesi_C*>(UDinoEntry_Plesi_C::StaticClass()->DefaultObject);

	return Default;
}

}


