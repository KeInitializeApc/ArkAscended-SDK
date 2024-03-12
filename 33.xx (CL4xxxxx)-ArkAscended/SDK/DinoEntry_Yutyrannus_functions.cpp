#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Yutyrannus.DinoEntry_Yutyrannus_C
// (None)

class UClass* UDinoEntry_Yutyrannus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Yutyrannus_C");

	return Clss;
}


// DinoEntry_Yutyrannus_C DinoEntry_Yutyrannus.Default__DinoEntry_Yutyrannus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Yutyrannus_C* UDinoEntry_Yutyrannus_C::GetDefaultObj()
{
	static class UDinoEntry_Yutyrannus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Yutyrannus_C*>(UDinoEntry_Yutyrannus_C::StaticClass()->DefaultObject);

	return Default;
}

}


