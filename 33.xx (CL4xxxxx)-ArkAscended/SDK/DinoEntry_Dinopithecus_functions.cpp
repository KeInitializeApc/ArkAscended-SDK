#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dinopithecus.DinoEntry_Dinopithecus_C
// (None)

class UClass* UDinoEntry_Dinopithecus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dinopithecus_C");

	return Clss;
}


// DinoEntry_Dinopithecus_C DinoEntry_Dinopithecus.Default__DinoEntry_Dinopithecus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dinopithecus_C* UDinoEntry_Dinopithecus_C::GetDefaultObj()
{
	static class UDinoEntry_Dinopithecus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dinopithecus_C*>(UDinoEntry_Dinopithecus_C::StaticClass()->DefaultObject);

	return Default;
}

}


