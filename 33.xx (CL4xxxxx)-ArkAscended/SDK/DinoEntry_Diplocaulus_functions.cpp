#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Diplocaulus.DinoEntry_Diplocaulus_C
// (None)

class UClass* UDinoEntry_Diplocaulus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Diplocaulus_C");

	return Clss;
}


// DinoEntry_Diplocaulus_C DinoEntry_Diplocaulus.Default__DinoEntry_Diplocaulus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Diplocaulus_C* UDinoEntry_Diplocaulus_C::GetDefaultObj()
{
	static class UDinoEntry_Diplocaulus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Diplocaulus_C*>(UDinoEntry_Diplocaulus_C::StaticClass()->DefaultObject);

	return Default;
}

}


