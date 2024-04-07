#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Megalania.DinoEntry_Megalania_C
// (None)

class UClass* UDinoEntry_Megalania_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Megalania_C");

	return Clss;
}


// DinoEntry_Megalania_C DinoEntry_Megalania.Default__DinoEntry_Megalania_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Megalania_C* UDinoEntry_Megalania_C::GetDefaultObj()
{
	static class UDinoEntry_Megalania_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Megalania_C*>(UDinoEntry_Megalania_C::StaticClass()->DefaultObject);

	return Default;
}

}


