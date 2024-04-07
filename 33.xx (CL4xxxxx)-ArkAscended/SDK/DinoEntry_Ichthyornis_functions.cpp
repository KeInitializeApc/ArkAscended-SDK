#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Ichthyornis.DinoEntry_Ichthyornis_C
// (None)

class UClass* UDinoEntry_Ichthyornis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Ichthyornis_C");

	return Clss;
}


// DinoEntry_Ichthyornis_C DinoEntry_Ichthyornis.Default__DinoEntry_Ichthyornis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Ichthyornis_C* UDinoEntry_Ichthyornis_C::GetDefaultObj()
{
	static class UDinoEntry_Ichthyornis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Ichthyornis_C*>(UDinoEntry_Ichthyornis_C::StaticClass()->DefaultObject);

	return Default;
}

}


