#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x368 - 0x358)
// WidgetBlueprintGeneratedClass MissionObjectiveEntry.MissionObjectiveEntry_C
class UMissionObjectiveEntry_C : public UMissionObjectiveEntryWidget
{
public:
	class UImage*                                MissionObjectiveCompletionIcon;                    // 0x358(0x8)(BlueprintVisible, ExportObject, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UProgressBar*                          MissionObjectiveProgressBar;                       // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UMissionObjectiveEntry_C* GetDefaultObj();

};

}


