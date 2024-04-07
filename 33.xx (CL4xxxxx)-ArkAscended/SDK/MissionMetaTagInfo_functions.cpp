#pragma once

// Dumped with TateDumper!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionMetaTagInfo.MissionMetaTagInfo_C
// (None)

class UClass* UMissionMetaTagInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionMetaTagInfo_C");

	return Clss;
}


// MissionMetaTagInfo_C MissionMetaTagInfo.Default__MissionMetaTagInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionMetaTagInfo_C* UMissionMetaTagInfo_C::GetDefaultObj()
{
	static class UMissionMetaTagInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionMetaTagInfo_C*>(UMissionMetaTagInfo_C::StaticClass()->DefaultObject);

	return Default;
}

}


