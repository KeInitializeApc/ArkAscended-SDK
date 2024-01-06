#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MeshFadeOut_Blueprint_Fast_WithDrop.MeshFadeOut_Blueprint_Fast_WithDrop_C
// (Actor)

class UClass* AMeshFadeOut_Blueprint_Fast_WithDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MeshFadeOut_Blueprint_Fast_WithDrop_C");

	return Clss;
}


// MeshFadeOut_Blueprint_Fast_WithDrop_C MeshFadeOut_Blueprint_Fast_WithDrop.Default__MeshFadeOut_Blueprint_Fast_WithDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMeshFadeOut_Blueprint_Fast_WithDrop_C* AMeshFadeOut_Blueprint_Fast_WithDrop_C::GetDefaultObj()
{
	static class AMeshFadeOut_Blueprint_Fast_WithDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMeshFadeOut_Blueprint_Fast_WithDrop_C*>(AMeshFadeOut_Blueprint_Fast_WithDrop_C::StaticClass()->DefaultObject);

	return Default;
}

}


