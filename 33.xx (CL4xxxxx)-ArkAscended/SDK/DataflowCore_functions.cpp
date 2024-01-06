#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DataflowCore.DataflowSettings
// (None)

class UClass* UDataflowSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DataflowSettings");

	return Clss;
}


// DataflowSettings DataflowCore.Default__DataflowSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UDataflowSettings* UDataflowSettings::GetDefaultObj()
{
	static class UDataflowSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UDataflowSettings*>(UDataflowSettings::StaticClass()->DefaultObject);

	return Default;
}

}


