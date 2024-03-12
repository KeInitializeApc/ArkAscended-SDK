#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Structure.NavArea_Structure_C
// (None)

class UClass* UNavArea_Structure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Structure_C");

	return Clss;
}


// NavArea_Structure_C NavArea_Structure.Default__NavArea_Structure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Structure_C* UNavArea_Structure_C::GetDefaultObj()
{
	static class UNavArea_Structure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Structure_C*>(UNavArea_Structure_C::StaticClass()->DefaultObject);

	return Default;
}

}


