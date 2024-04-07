#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Lystro.DinoEntry_Lystro_C
// (None)

class UClass* UDinoEntry_Lystro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Lystro_C");

	return Clss;
}


// DinoEntry_Lystro_C DinoEntry_Lystro.Default__DinoEntry_Lystro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Lystro_C* UDinoEntry_Lystro_C::GetDefaultObj()
{
	static class UDinoEntry_Lystro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Lystro_C*>(UDinoEntry_Lystro_C::StaticClass()->DefaultObject);

	return Default;
}

}


