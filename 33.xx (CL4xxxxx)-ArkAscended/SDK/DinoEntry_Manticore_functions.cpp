#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Manticore.DinoEntry_Manticore_C
// (None)

class UClass* UDinoEntry_Manticore_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Manticore_C");

	return Clss;
}


// DinoEntry_Manticore_C DinoEntry_Manticore.Default__DinoEntry_Manticore_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Manticore_C* UDinoEntry_Manticore_C::GetDefaultObj()
{
	static class UDinoEntry_Manticore_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Manticore_C*>(UDinoEntry_Manticore_C::StaticClass()->DefaultObject);

	return Default;
}

}


