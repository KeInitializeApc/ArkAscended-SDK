#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Mammoth.DinoEntry_Mammoth_C
// (None)

class UClass* UDinoEntry_Mammoth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Mammoth_C");

	return Clss;
}


// DinoEntry_Mammoth_C DinoEntry_Mammoth.Default__DinoEntry_Mammoth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Mammoth_C* UDinoEntry_Mammoth_C::GetDefaultObj()
{
	static class UDinoEntry_Mammoth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Mammoth_C*>(UDinoEntry_Mammoth_C::StaticClass()->DefaultObject);

	return Default;
}

}


