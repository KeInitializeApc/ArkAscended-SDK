#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_MegaMek.DinoEntry_MegaMek_C
// (None)

class UClass* UDinoEntry_MegaMek_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_MegaMek_C");

	return Clss;
}


// DinoEntry_MegaMek_C DinoEntry_MegaMek.Default__DinoEntry_MegaMek_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_MegaMek_C* UDinoEntry_MegaMek_C::GetDefaultObj()
{
	static class UDinoEntry_MegaMek_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_MegaMek_C*>(UDinoEntry_MegaMek_C::StaticClass()->DefaultObject);

	return Default;
}

}


