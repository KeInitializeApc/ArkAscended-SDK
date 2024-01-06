#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShooterReplicationGraph.BP_ShooterReplicationGraph_C
// (None)

class UClass* UBP_ShooterReplicationGraph_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShooterReplicationGraph_C");

	return Clss;
}


// BP_ShooterReplicationGraph_C BP_ShooterReplicationGraph.Default__BP_ShooterReplicationGraph_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ShooterReplicationGraph_C* UBP_ShooterReplicationGraph_C::GetDefaultObj()
{
	static class UBP_ShooterReplicationGraph_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ShooterReplicationGraph_C*>(UBP_ShooterReplicationGraph_C::StaticClass()->DefaultObject);

	return Default;
}

}


