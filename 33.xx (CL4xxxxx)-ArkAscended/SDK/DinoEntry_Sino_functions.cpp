#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Sino.DinoEntry_Sino_C
// (None)

class UClass* UDinoEntry_Sino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Sino_C");

	return Clss;
}


// DinoEntry_Sino_C DinoEntry_Sino.Default__DinoEntry_Sino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Sino_C* UDinoEntry_Sino_C::GetDefaultObj()
{
	static class UDinoEntry_Sino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Sino_C*>(UDinoEntry_Sino_C::StaticClass()->DefaultObject);

	return Default;
}

}


