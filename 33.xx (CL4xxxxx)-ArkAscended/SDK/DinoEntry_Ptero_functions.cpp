#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Ptero.DinoEntry_Ptero_C
// (None)

class UClass* UDinoEntry_Ptero_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Ptero_C");

	return Clss;
}


// DinoEntry_Ptero_C DinoEntry_Ptero.Default__DinoEntry_Ptero_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Ptero_C* UDinoEntry_Ptero_C::GetDefaultObj()
{
	static class UDinoEntry_Ptero_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Ptero_C*>(UDinoEntry_Ptero_C::StaticClass()->DefaultObject);

	return Default;
}

}


