#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DinoListButton.DinoListButton_C
// (None)

class UClass* UDinoListButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoListButton_C");

	return Clss;
}


// DinoListButton_C DinoListButton.Default__DinoListButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoListButton_C* UDinoListButton_C::GetDefaultObj()
{
	static class UDinoListButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoListButton_C*>(UDinoListButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


