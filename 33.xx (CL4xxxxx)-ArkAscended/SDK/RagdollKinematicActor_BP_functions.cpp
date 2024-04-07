#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RagdollKinematicActor_BP.RagdollKinematicActor_BP_C
// (Actor)

class UClass* ARagdollKinematicActor_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RagdollKinematicActor_BP_C");

	return Clss;
}


// RagdollKinematicActor_BP_C RagdollKinematicActor_BP.Default__RagdollKinematicActor_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARagdollKinematicActor_BP_C* ARagdollKinematicActor_BP_C::GetDefaultObj()
{
	static class ARagdollKinematicActor_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARagdollKinematicActor_BP_C*>(ARagdollKinematicActor_BP_C::StaticClass()->DefaultObject);

	return Default;
}

}


