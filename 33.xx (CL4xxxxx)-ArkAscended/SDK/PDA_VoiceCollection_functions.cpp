#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_VoiceCollection.PDA_VoiceCollection_C
// (None)

class UClass* UPDA_VoiceCollection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_VoiceCollection_C");

	return Clss;
}


// PDA_VoiceCollection_C PDA_VoiceCollection.Default__PDA_VoiceCollection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_VoiceCollection_C* UPDA_VoiceCollection_C::GetDefaultObj()
{
	static class UPDA_VoiceCollection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_VoiceCollection_C*>(UPDA_VoiceCollection_C::StaticClass()->DefaultObject);

	return Default;
}

}


