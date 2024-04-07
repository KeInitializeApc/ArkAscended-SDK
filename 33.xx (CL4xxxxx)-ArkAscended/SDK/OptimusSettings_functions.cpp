#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OptimusSettings.OptimusSettings
// (None)

class UClass* UOptimusSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OptimusSettings");

	return Clss;
}


// OptimusSettings OptimusSettings.Default__OptimusSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOptimusSettings* UOptimusSettings::GetDefaultObj()
{
	static class UOptimusSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOptimusSettings*>(UOptimusSettings::StaticClass()->DefaultObject);

	return Default;
}

}


