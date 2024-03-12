#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dimetro.DinoEntry_Dimetro_C
// (None)

class UClass* UDinoEntry_Dimetro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dimetro_C");

	return Clss;
}


// DinoEntry_Dimetro_C DinoEntry_Dimetro.Default__DinoEntry_Dimetro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dimetro_C* UDinoEntry_Dimetro_C::GetDefaultObj()
{
	static class UDinoEntry_Dimetro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dimetro_C*>(UDinoEntry_Dimetro_C::StaticClass()->DefaultObject);

	return Default;
}

}


