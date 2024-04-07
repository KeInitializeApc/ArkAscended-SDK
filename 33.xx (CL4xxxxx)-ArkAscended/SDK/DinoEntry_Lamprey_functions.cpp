#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Lamprey.DinoEntry_Lamprey_C
// (None)

class UClass* UDinoEntry_Lamprey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Lamprey_C");

	return Clss;
}


// DinoEntry_Lamprey_C DinoEntry_Lamprey.Default__DinoEntry_Lamprey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Lamprey_C* UDinoEntry_Lamprey_C::GetDefaultObj()
{
	static class UDinoEntry_Lamprey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Lamprey_C*>(UDinoEntry_Lamprey_C::StaticClass()->DefaultObject);

	return Default;
}

}


