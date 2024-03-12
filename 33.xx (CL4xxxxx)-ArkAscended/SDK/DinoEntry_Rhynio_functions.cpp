#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Rhynio.DinoEntry_Rhynio_C
// (None)

class UClass* UDinoEntry_Rhynio_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Rhynio_C");

	return Clss;
}


// DinoEntry_Rhynio_C DinoEntry_Rhynio.Default__DinoEntry_Rhynio_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Rhynio_C* UDinoEntry_Rhynio_C::GetDefaultObj()
{
	static class UDinoEntry_Rhynio_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Rhynio_C*>(UDinoEntry_Rhynio_C::StaticClass()->DefaultObject);

	return Default;
}

}


