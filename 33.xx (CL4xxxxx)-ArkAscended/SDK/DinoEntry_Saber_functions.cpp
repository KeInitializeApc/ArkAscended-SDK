#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Saber.DinoEntry_Saber_C
// (None)

class UClass* UDinoEntry_Saber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Saber_C");

	return Clss;
}


// DinoEntry_Saber_C DinoEntry_Saber.Default__DinoEntry_Saber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Saber_C* UDinoEntry_Saber_C::GetDefaultObj()
{
	static class UDinoEntry_Saber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Saber_C*>(UDinoEntry_Saber_C::StaticClass()->DefaultObject);

	return Default;
}

}


