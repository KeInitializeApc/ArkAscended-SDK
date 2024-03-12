#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_IceKaiju.DinoEntry_IceKaiju_C
// (None)

class UClass* UDinoEntry_IceKaiju_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_IceKaiju_C");

	return Clss;
}


// DinoEntry_IceKaiju_C DinoEntry_IceKaiju.Default__DinoEntry_IceKaiju_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_IceKaiju_C* UDinoEntry_IceKaiju_C::GetDefaultObj()
{
	static class UDinoEntry_IceKaiju_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_IceKaiju_C*>(UDinoEntry_IceKaiju_C::StaticClass()->DefaultObject);

	return Default;
}

}


