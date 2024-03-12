#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Liopleur.DinoEntry_Liopleur_C
// (None)

class UClass* UDinoEntry_Liopleur_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Liopleur_C");

	return Clss;
}


// DinoEntry_Liopleur_C DinoEntry_Liopleur.Default__DinoEntry_Liopleur_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Liopleur_C* UDinoEntry_Liopleur_C::GetDefaultObj()
{
	static class UDinoEntry_Liopleur_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Liopleur_C*>(UDinoEntry_Liopleur_C::StaticClass()->DefaultObject);

	return Default;
}

}


