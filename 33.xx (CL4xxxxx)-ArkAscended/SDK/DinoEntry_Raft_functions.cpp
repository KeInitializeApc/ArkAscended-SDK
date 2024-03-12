#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DinoEntry_Raft.DinoEntry_Raft_C
// (None)

class UClass* UDinoEntry_Raft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DinoEntry_Raft_C");

	return Clss;
}


// DinoEntry_Raft_C DinoEntry_Raft.Default__DinoEntry_Raft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDinoEntry_Raft_C* UDinoEntry_Raft_C::GetDefaultObj()
{
	static class UDinoEntry_Raft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDinoEntry_Raft_C*>(UDinoEntry_Raft_C::StaticClass()->DefaultObject);

	return Default;
}

}


