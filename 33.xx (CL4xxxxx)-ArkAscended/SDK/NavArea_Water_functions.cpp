#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_Water.NavArea_Water_C
// (None)

class UClass* UNavArea_Water_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_Water_C");

	return Clss;
}


// NavArea_Water_C NavArea_Water.Default__NavArea_Water_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_Water_C* UNavArea_Water_C::GetDefaultObj()
{
	static class UNavArea_Water_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_Water_C*>(UNavArea_Water_C::StaticClass()->DefaultObject);

	return Default;
}

}


