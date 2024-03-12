#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Desmodus.DinoEntry_Desmodus_C
// (None)

class UClass* UDinoEntry_Desmodus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Desmodus_C");

	return Clss;
}


// DinoEntry_Desmodus_C DinoEntry_Desmodus.Default__DinoEntry_Desmodus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Desmodus_C* UDinoEntry_Desmodus_C::GetDefaultObj()
{
	static class UDinoEntry_Desmodus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Desmodus_C*>(UDinoEntry_Desmodus_C::StaticClass()->DefaultObject);

	return Default;
}

}


