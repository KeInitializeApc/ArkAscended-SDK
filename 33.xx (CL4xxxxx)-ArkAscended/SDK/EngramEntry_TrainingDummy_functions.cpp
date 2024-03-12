#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EngramEntry_TrainingDummy.EngramEntry_TrainingDummy_C
// (None)

class UClass* UEngramEntry_TrainingDummy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EngramEntry_TrainingDummy_C");

	return Clss;
}


// EngramEntry_TrainingDummy_C EngramEntry_TrainingDummy.Default__EngramEntry_TrainingDummy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEngramEntry_TrainingDummy_C* UEngramEntry_TrainingDummy_C::GetDefaultObj()
{
	static class UEngramEntry_TrainingDummy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEngramEntry_TrainingDummy_C*>(UEngramEntry_TrainingDummy_C::StaticClass()->DefaultObject);

	return Default;
}

}


