#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Amarga.DinoEntry_Amarga_C
// (None)

class UClass* UDinoEntry_Amarga_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Amarga_C");

	return Clss;
}


// DinoEntry_Amarga_C DinoEntry_Amarga.Default__DinoEntry_Amarga_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Amarga_C* UDinoEntry_Amarga_C::GetDefaultObj()
{
	static class UDinoEntry_Amarga_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Amarga_C*>(UDinoEntry_Amarga_C::StaticClass()->DefaultObject);

	return Default;
}

}


