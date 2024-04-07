#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Tropeognathus.DinoEntry_Tropeognathus_C
// (None)

class UClass* UDinoEntry_Tropeognathus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Tropeognathus_C");

	return Clss;
}


// DinoEntry_Tropeognathus_C DinoEntry_Tropeognathus.Default__DinoEntry_Tropeognathus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Tropeognathus_C* UDinoEntry_Tropeognathus_C::GetDefaultObj()
{
	static class UDinoEntry_Tropeognathus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Tropeognathus_C*>(UDinoEntry_Tropeognathus_C::StaticClass()->DefaultObject);

	return Default;
}

}


