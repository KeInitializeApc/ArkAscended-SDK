#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Chupacabra.DinoEntry_Chupacabra_C
// (None)

class UClass* UDinoEntry_Chupacabra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Chupacabra_C");

	return Clss;
}


// DinoEntry_Chupacabra_C DinoEntry_Chupacabra.Default__DinoEntry_Chupacabra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Chupacabra_C* UDinoEntry_Chupacabra_C::GetDefaultObj()
{
	static class UDinoEntry_Chupacabra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Chupacabra_C*>(UDinoEntry_Chupacabra_C::StaticClass()->DefaultObject);

	return Default;
}

}


