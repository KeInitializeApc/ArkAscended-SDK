#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Phio.DinoEntry_Phio_C
// (None)

class UClass* UDinoEntry_Phio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Phio_C");

	return Clss;
}


// DinoEntry_Phio_C DinoEntry_Phio.Default__DinoEntry_Phio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Phio_C* UDinoEntry_Phio_C::GetDefaultObj()
{
	static class UDinoEntry_Phio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Phio_C*>(UDinoEntry_Phio_C::StaticClass()->DefaultObject);

	return Default;
}

}


