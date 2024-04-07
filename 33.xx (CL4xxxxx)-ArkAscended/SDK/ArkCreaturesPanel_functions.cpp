#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ArkCreaturesPanel.ArkCreaturesPanel_C
// (None)

class UClass* UArkCreaturesPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArkCreaturesPanel_C");

	return Clss;
}


// ArkCreaturesPanel_C ArkCreaturesPanel.Default__ArkCreaturesPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArkCreaturesPanel_C* UArkCreaturesPanel_C::GetDefaultObj()
{
	static class UArkCreaturesPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArkCreaturesPanel_C*>(UArkCreaturesPanel_C::StaticClass()->DefaultObject);

	return Default;
}

}


