#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Camelsaurus.DinoEntry_Camelsaurus_C
// (None)

class UClass* UDinoEntry_Camelsaurus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Camelsaurus_C");

	return Clss;
}


// DinoEntry_Camelsaurus_C DinoEntry_Camelsaurus.Default__DinoEntry_Camelsaurus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Camelsaurus_C* UDinoEntry_Camelsaurus_C::GetDefaultObj()
{
	static class UDinoEntry_Camelsaurus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Camelsaurus_C*>(UDinoEntry_Camelsaurus_C::StaticClass()->DefaultObject);

	return Default;
}

}


