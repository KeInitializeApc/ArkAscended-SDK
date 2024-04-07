#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Coel.DinoEntry_Coel_C
// (None)

class UClass* UDinoEntry_Coel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Coel_C");

	return Clss;
}


// DinoEntry_Coel_C DinoEntry_Coel.Default__DinoEntry_Coel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Coel_C* UDinoEntry_Coel_C::GetDefaultObj()
{
	static class UDinoEntry_Coel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Coel_C*>(UDinoEntry_Coel_C::StaticClass()->DefaultObject);

	return Default;
}

}


