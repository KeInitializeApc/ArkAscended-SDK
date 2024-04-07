#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Mek.DinoEntry_Mek_C
// (None)

class UClass* UDinoEntry_Mek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Mek_C");

	return Clss;
}


// DinoEntry_Mek_C DinoEntry_Mek.Default__DinoEntry_Mek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Mek_C* UDinoEntry_Mek_C::GetDefaultObj()
{
	static class UDinoEntry_Mek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Mek_C*>(UDinoEntry_Mek_C::StaticClass()->DefaultObject);

	return Default;
}

}


