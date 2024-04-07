#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Deinonychus.DinoEntry_Deinonychus_C
// (None)

class UClass* UDinoEntry_Deinonychus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Deinonychus_C");

	return Clss;
}


// DinoEntry_Deinonychus_C DinoEntry_Deinonychus.Default__DinoEntry_Deinonychus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Deinonychus_C* UDinoEntry_Deinonychus_C::GetDefaultObj()
{
	static class UDinoEntry_Deinonychus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Deinonychus_C*>(UDinoEntry_Deinonychus_C::StaticClass()->DefaultObject);

	return Default;
}

}


