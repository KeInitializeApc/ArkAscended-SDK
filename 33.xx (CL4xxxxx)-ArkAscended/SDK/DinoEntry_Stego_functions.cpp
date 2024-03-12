#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Stego.DinoEntry_Stego_C
// (None)

class UClass* UDinoEntry_Stego_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Stego_C");

	return Clss;
}


// DinoEntry_Stego_C DinoEntry_Stego.Default__DinoEntry_Stego_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Stego_C* UDinoEntry_Stego_C::GetDefaultObj()
{
	static class UDinoEntry_Stego_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Stego_C*>(UDinoEntry_Stego_C::StaticClass()->DefaultObject);

	return Default;
}

}


