#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_Raft.EngramEntry_Raft_C
// (None)

class UClass* UEngramEntry_Raft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_Raft_C");

	return Clss;
}


// EngramEntry_Raft_C EngramEntry_Raft.Default__EngramEntry_Raft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_Raft_C* UEngramEntry_Raft_C::GetDefaultObj()
{
	static class UEngramEntry_Raft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_Raft_C*>(UEngramEntry_Raft_C::StaticClass()->DefaultObject);

	return Default;
}

}


