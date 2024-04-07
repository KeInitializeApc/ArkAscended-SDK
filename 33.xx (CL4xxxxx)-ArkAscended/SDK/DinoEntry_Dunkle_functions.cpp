#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Dunkle.DinoEntry_Dunkle_C
// (None)

class UClass* UDinoEntry_Dunkle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Dunkle_C");

	return Clss;
}


// DinoEntry_Dunkle_C DinoEntry_Dunkle.Default__DinoEntry_Dunkle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Dunkle_C* UDinoEntry_Dunkle_C::GetDefaultObj()
{
	static class UDinoEntry_Dunkle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Dunkle_C*>(UDinoEntry_Dunkle_C::StaticClass()->DefaultObject);

	return Default;
}

}


