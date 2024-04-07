#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_FenrirWolf.DinoEntry_FenrirWolf_C
// (None)

class UClass* UDinoEntry_FenrirWolf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_FenrirWolf_C");

	return Clss;
}


// DinoEntry_FenrirWolf_C DinoEntry_FenrirWolf.Default__DinoEntry_FenrirWolf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_FenrirWolf_C* UDinoEntry_FenrirWolf_C::GetDefaultObj()
{
	static class UDinoEntry_FenrirWolf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_FenrirWolf_C*>(UDinoEntry_FenrirWolf_C::StaticClass()->DefaultObject);

	return Default;
}

}


