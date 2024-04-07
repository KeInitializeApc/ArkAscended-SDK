#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Pelagornis.DinoEntry_Pelagornis_C
// (None)

class UClass* UDinoEntry_Pelagornis_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Pelagornis_C");

	return Clss;
}


// DinoEntry_Pelagornis_C DinoEntry_Pelagornis.Default__DinoEntry_Pelagornis_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Pelagornis_C* UDinoEntry_Pelagornis_C::GetDefaultObj()
{
	static class UDinoEntry_Pelagornis_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Pelagornis_C*>(UDinoEntry_Pelagornis_C::StaticClass()->DefaultObject);

	return Default;
}

}


