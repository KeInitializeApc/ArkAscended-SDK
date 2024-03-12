#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Trilobite.DinoEntry_Trilobite_C
// (None)

class UClass* UDinoEntry_Trilobite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Trilobite_C");

	return Clss;
}


// DinoEntry_Trilobite_C DinoEntry_Trilobite.Default__DinoEntry_Trilobite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Trilobite_C* UDinoEntry_Trilobite_C::GetDefaultObj()
{
	static class UDinoEntry_Trilobite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Trilobite_C*>(UDinoEntry_Trilobite_C::StaticClass()->DefaultObject);

	return Default;
}

}


