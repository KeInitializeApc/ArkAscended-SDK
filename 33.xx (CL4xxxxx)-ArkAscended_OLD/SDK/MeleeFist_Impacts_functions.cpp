#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeleeFist_Impacts.MeleeFist_Impacts_C
// (Actor)

class UClass* AMeleeFist_Impacts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeleeFist_Impacts_C");

	return Clss;
}


// MeleeFist_Impacts_C MeleeFist_Impacts.Default__MeleeFist_Impacts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeleeFist_Impacts_C* AMeleeFist_Impacts_C::GetDefaultObj()
{
	static class AMeleeFist_Impacts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeleeFist_Impacts_C*>(AMeleeFist_Impacts_C::StaticClass()->DefaultObject);

	return Default;
}

}


