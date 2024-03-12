#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Para.DinoEntry_Para_C
// (None)

class UClass* UDinoEntry_Para_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Para_C");

	return Clss;
}


// DinoEntry_Para_C DinoEntry_Para.Default__DinoEntry_Para_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Para_C* UDinoEntry_Para_C::GetDefaultObj()
{
	static class UDinoEntry_Para_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Para_C*>(UDinoEntry_Para_C::StaticClass()->DefaultObject);

	return Default;
}

}


