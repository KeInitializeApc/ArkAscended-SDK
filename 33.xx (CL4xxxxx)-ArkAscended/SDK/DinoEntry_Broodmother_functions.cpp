#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Broodmother.DinoEntry_Broodmother_C
// (None)

class UClass* UDinoEntry_Broodmother_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Broodmother_C");

	return Clss;
}


// DinoEntry_Broodmother_C DinoEntry_Broodmother.Default__DinoEntry_Broodmother_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Broodmother_C* UDinoEntry_Broodmother_C::GetDefaultObj()
{
	static class UDinoEntry_Broodmother_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Broodmother_C*>(UDinoEntry_Broodmother_C::StaticClass()->DefaultObject);

	return Default;
}

}


