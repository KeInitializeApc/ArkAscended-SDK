#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Ammonite.DinoEntry_Ammonite_C
// (None)

class UClass* UDinoEntry_Ammonite_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Ammonite_C");

	return Clss;
}


// DinoEntry_Ammonite_C DinoEntry_Ammonite.Default__DinoEntry_Ammonite_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Ammonite_C* UDinoEntry_Ammonite_C::GetDefaultObj()
{
	static class UDinoEntry_Ammonite_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Ammonite_C*>(UDinoEntry_Ammonite_C::StaticClass()->DefaultObject);

	return Default;
}

}


