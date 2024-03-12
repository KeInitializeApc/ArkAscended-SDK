#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Therizino.DinoEntry_Therizino_C
// (None)

class UClass* UDinoEntry_Therizino_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Therizino_C");

	return Clss;
}


// DinoEntry_Therizino_C DinoEntry_Therizino.Default__DinoEntry_Therizino_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Therizino_C* UDinoEntry_Therizino_C::GetDefaultObj()
{
	static class UDinoEntry_Therizino_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Therizino_C*>(UDinoEntry_Therizino_C::StaticClass()->DefaultObject);

	return Default;
}

}


