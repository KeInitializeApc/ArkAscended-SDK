#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Megalosaurus.DinoEntry_Megalosaurus_C
// (None)

class UClass* UDinoEntry_Megalosaurus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Megalosaurus_C");

	return Clss;
}


// DinoEntry_Megalosaurus_C DinoEntry_Megalosaurus.Default__DinoEntry_Megalosaurus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Megalosaurus_C* UDinoEntry_Megalosaurus_C::GetDefaultObj()
{
	static class UDinoEntry_Megalosaurus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Megalosaurus_C*>(UDinoEntry_Megalosaurus_C::StaticClass()->DefaultObject);

	return Default;
}

}


