#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Carno.DinoEntry_Carno_C
// (None)

class UClass* UDinoEntry_Carno_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Carno_C");

	return Clss;
}


// DinoEntry_Carno_C DinoEntry_Carno.Default__DinoEntry_Carno_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Carno_C* UDinoEntry_Carno_C::GetDefaultObj()
{
	static class UDinoEntry_Carno_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Carno_C*>(UDinoEntry_Carno_C::StaticClass()->DefaultObject);

	return Default;
}

}


