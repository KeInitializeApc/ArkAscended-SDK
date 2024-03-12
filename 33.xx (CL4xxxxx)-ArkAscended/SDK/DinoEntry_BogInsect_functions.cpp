#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_BogInsect.DinoEntry_BogInsect_C
// (None)

class UClass* UDinoEntry_BogInsect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_BogInsect_C");

	return Clss;
}


// DinoEntry_BogInsect_C DinoEntry_BogInsect.Default__DinoEntry_BogInsect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_BogInsect_C* UDinoEntry_BogInsect_C::GetDefaultObj()
{
	static class UDinoEntry_BogInsect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_BogInsect_C*>(UDinoEntry_BogInsect_C::StaticClass()->DefaultObject);

	return Default;
}

}


